module.exports = grammar({
  name: 'github_action',

  rules: {

    workflow_file: $ => seq(
      optional($.version),
      $.workflow
    ),

    version: $ => seq(
      'version',
      '=',
      $.integer
    ),

    integer: $ => /[0-9]+/
    workflow: $ => seq(
      'workflow',
      $.string,
      '{',
      '}'
    ),

    integer: $ => /[0-9]+/,

    identifier: $ => $._identifier,

    _identifier: $ => /[a-zA-Z_][a-zA-Z0-9]*/,

    string: $ => choice(
      $._quoted_identifier,
      $._string
    ),

    _quoted_identifier: $ => seq(
      '"',
      $._identifier,
      '"'
    ),

    _string: $ => seq(
      '"',
      repeat1($._escape, $._safecodepoint),
      '"'
    ),

    _escape: $ => seq(
      '\\',
      /["\\/bfnrt]/
    ),

    _safecodepoint: $ => seq(
      '~',
      /["\\\u0000-\u001F\u007F]/
    ),
  }
});
