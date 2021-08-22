module.exports = grammar({
  name: 'tenable_audit',

  rules: {
    // TODO: Modify this so you can have comments at the beginning or the end.
    source_file: $ => repeat1($._check_type_block),

    _check_type_block: $ => seq($._check_type_start, repeat($.contents), $._check_type_end),

    _check_type_start: $ => /<\s*check_type\s*:\s*"Windows"\s*version\s*:\s*"2"\s*>/,

    _check_type_end: $ => /<\/check_type>/,

    // removed $.comment,
    contents: $ => choice($._if_block, $.item, $.custom_item, $.acl_block, $.report),

    comment: $ => repeat1($.single_line_comment),

    single_line_comment: $ => /#.*/,

    _if_block: $ => seq($.if_block_start, $.condition_block, $.then_block, optional($.else_block), $.if_block_end),

    if_block_start: $ => /<\s*if\s*>/,
    condition_block: $ => seq(/<condition>/),
    then_block: $ => seq(/<then>/),
    else_block: $ => seq(/else>/),
    if_block_end: $ => seq(/<\/if>/),

    item: $ => seq(/<item>/),

    custom_item: $ => seq(/<custom_item>/),

    acl_block: $ => seq(/<acl>/),

    report: $ => seq(/<report>/)
  }
});
