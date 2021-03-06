module.exports = grammar({
  name: 'tenableAudit',

  rules: {
    // TODO: Modify this so you can have comments at the beginning or the end.
    source_file: $ => repeat1($._check_type_block),

    double_quoted_string: $ => prec(2, seq(/"/, repeat(choice(/([A-Z]|[a-z]|\+|\-|=|\$|\^|\[|\]|\(|\)|{|}|<|>|\\|\/|\*|,|\.|\||:|;|@|#|&|%|\?|\!|'|\w|\d)/, /\n/)), /"/)),

    _check_type_block: $ => seq($._check_type_start, repeat($._contents), $._check_type_end),

    _check_type_start: $ => /<\s*check_type\s*:\s*"Windows"\s*version\s*:\s*"2"\s*>/,

    _check_type_end: $ => /<\/check_type>/,

    _contents: $ => choice($.if_block, $.item_block, $.custom_item_block, $.acl_block, $.report_block),

    comment: $ => repeat1($.single_line_comment),

    single_line_comment: $ => /#.*/,

    if_block: $ => seq($._if_block_start, $.condition_block, $.then_block, optional($.else_block), $._if_block_end),

    _if_block_start: $ => /<\s*if\s*>/,

    // TODO - Verify that $._contents is the correct value inside of the condition block, or if it's just `item`s and `custom_item`s
    condition_block: $ => seq($._condition_block_start, repeat($._contents), $._condition_block_end),

    _condition_block_start: $ => seq(/<condition type\s*:\s*/, choice(/"or"/, /"OR"/, /"and"/, /"AND"/), />/),

    _condition_block_end: $ => /<\/condition>/,

    then_block: $ => seq($._then_block_start, repeat($._contents), $._then_block_end),

    _then_block_start: $ => /<then>/,

    _then_block_end: $ => /<\/then>/,

    else_block: $ => seq($._else_block_start, repeat($._contents), $._else_block_end),

    _else_block_start: $ => /<else>/,

    _else_block_end: $ => /<\/else>/,

    _if_block_end: $ => seq(/<\/if>/),

    item_block: $ => seq($._item_block_start, $._item_contents, $._item_block_end),

    _item_block_start: $ => /<item>/,

    _item_contents: $ => repeat1($.generic_tag_value_pair),

    generic_tag_value_pair: $ => seq(field('key', $.generic_tag_key), field('value', $._generic_tag_value)),

    generic_tag_key: $ => /([a-z]|[A-Z]||_)+\s*:\s*/,

    // TODO - need to support additional ways of using logical operators with value_data conditions
    _generic_tag_value: $ => choice($.unquoted_keyword, $.value_data_dword, $.value_data_range, seq($.double_quoted_string, optional(repeat(seq(/&&/, $.double_quoted_string))))),

    //item_tag_value_pairs: $ => alternatives($.item_name, $.item_value), // $.item_other_tag_pairs),

    //item_name: $ => seq(/name\s*:\s*/, $.double_quoted_string),

    //item_value: $ => seq(/value\s*:\s*/, choice($.value_data_dword, $.value_data_range)),

    // TODO - covers signed or unsigned integers and floats, but need to account for signed or unsigned hex (and other values?)
    value_data_dword: $ => /[+|-]?\d+(\.\d+)?/,
    value_data_min: $ => /MIN/,
    value_data_max: $ => /MAX/,

    // a range specifies a start DWORD or the keyword MIN, and an end DWORD or the keyword MAX. See https://docs.tenable.com/nessus/compliancechecksreference/Content/ValueData.htm
    value_data_range: $ => seq(/\[/, choice($.value_data_min, $.value_data_dword), /\.\./, choice($.value_data_max, $.value_data_dword), /\]/),

    unquoted_keyword: $ => /([a-z]|[A-Z]|_)+/,

    //item_other_tag_pairs: $ => seq(),

    _item_block_end: $ => /<\/item>/,

    custom_item_block: $ => seq($._custom_item_block_start, $._item_contents, $._custom_item_block_end),
    _custom_item_block_start: $ => /<custom_item>/,
    _custom_item_block_end: $ => /<\/custom_item>/,


    //custom_item_tag_value_pairs: $ => choice($.custom_item_type, $.custom_item_description, $.custom_item_value_type, $.custom_item_value_data, $.custom_item_check_type, $.custom_item_x_policy, $.generic_tag_value_pair),

    //custom_item_type: $ => seq(/type\s*:\s*/, /[A-Z][A-Z/|_]*/),

    // e.g., "password_policy: ENFORCE_PASSWORD_HISTORY",
    // "audit_policy: AUDIT_ACCOUNT_LOGON", etc
    //custom_item_x_policy: $ => seq(/[a-z]+_policy\s*:\s*[A-Z][A-Z/|_]*/),

    acl_block: $ => seq(/<acl>/),

    report_block: $ => seq($._report_block_start, $._item_contents, $._report_block_end),
    _report_block_start: $ => seq(/<report/, optional(seq(/type:/, $.double_quoted_string)), />/),
    _report_block_end: $ => /<\/report>/,
  }
});
