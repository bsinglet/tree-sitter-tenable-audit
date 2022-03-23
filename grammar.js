module.exports = grammar({
  name: 'tenableAudit',

  rules: {
    // TODO: Modify this so you can have comments at the beginning or the end.
    source_file: $ => repeat1($._check_type_block),

    double_quoted_string: $ => seq(/"/, /([A-Z]|[a-z]|\-|\$|\^|\[|\]|\(|\)|\\|\*|\?|\!|\s|(\r)?\n|\d)*/, /"/),

    _check_type_block: $ => seq($._check_type_start, repeat($.contents), $._check_type_end),

    _check_type_start: $ => /<\s*check_type\s*:\s*"Windows"\s*version\s*:\s*"2"\s*>/,

    _check_type_end: $ => /<\/check_type>/,

    // removed $.comment,
    contents: $ => choice($._if_block, $.item_block, $.custom_item_block, $.acl_block, $.report),

    comment: $ => repeat1($.single_line_comment),

    single_line_comment: $ => /#.*/,

    _if_block: $ => seq($.if_block_start, $.condition_block, $.then_block, optional($.else_block), $.if_block_end),

    if_block_start: $ => /<\s*if\s*>/,

    // TODO - Verify that $.contents is the correct value inside of the condition block, or if it's just `item`s and `custom_item`s
    condition_block: $ => seq($.condition_block_start, repeat($.contents), $.condition_block_end),

    condition_block_start: $ => seq(/<condition type\s*:\s*/, choice(/"or"/, /"and"/), />/),

    condition_block_end: $ => /<\/condition>/,

    then_block: $ => seq($.then_block_start, $.contents, $.then_block_end),

    then_block_start: $ => /<then>/,

    then_block_end: $ => /<\/then>/,

    else_block: $ => seq($.else_block_start, $.contents, $.else_block_end),

    else_block_start: $ => /<else>/,

    else_block_end: $ => /<\/else>/,

    if_block_end: $ => seq(/<\/if>/),

    item_block: $ => seq($.item_block_start, $.item_contents, $.item_block_end),

    item_block_start: $ => /<item>/,

    item_contents: $ => repeat1($.generic_tag_value_pair),

    generic_tag_value_pair: $ => seq(/([a-z]|[A-Z]||_)+\s*:\s*/, $.generic_tag_value),

    generic_tag_value: $ => choice($.unquoted_keyword, $.value_data_dword, $.value_data_range, $.double_quoted_string),

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

    item_block_end: $ => /<\/item>/,

    custom_item_block: $ => seq($.custom_item_block_start, $.item_contents, $.custom_item_block_end),
    custom_item_block_start: $ => /<custom_item>/,
    custom_item_block_end: $ => /<\/custom_item>/,


    //custom_item_tag_value_pairs: $ => choice($.custom_item_type, $.custom_item_description, $.custom_item_value_type, $.custom_item_value_data, $.custom_item_check_type, $.custom_item_x_policy, $.generic_tag_value_pair),

    //custom_item_type: $ => seq(/type\s*:\s*/, /[A-Z][A-Z/|_]*/),

    // e.g., "password_policy: ENFORCE_PASSWORD_HISTORY",
    // "audit_policy: AUDIT_ACCOUNT_LOGON", etc
    //custom_item_x_policy: $ => seq(/[a-z]+_policy\s*:\s*[A-Z][A-Z/|_]*/),

    acl_block: $ => seq(/<acl>/),

    report: $ => seq(/<report>/)
  }
});
