module.exports = grammar({
  name: 'tenable_audit',

  rules: {
    // TODO: Modify this so you can have comments at the beginning or the end.
    source_file: $ => repeat1($._check_type_block),

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

    item_block: $ => seq($.item_block_start, repeat1($.item_contents), $.item_block_end),

    item_block_start: $ => /<item>/,

    item_contents: $ => choice(/value/),

    item_block_end: $ => /<\/item>/,

    custom_item_block: $ => seq(/<custom_item>/),

    acl_block: $ => seq(/<acl>/),

    report: $ => seq(/<report>/)
  }
});
