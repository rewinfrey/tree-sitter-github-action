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

    workflow: $ => seq(
      'workflow',
      $.string,
      '{',
      repeat1(choice($.on_kvp, $.resolves_kvp)),
      '}'
    ),

    on_kvp: $ => seq(
      'on',
      '=',
      $.event_string
    ),

    resolves_kvp: $ => seq(
      'resolves',
      '=',
      $.string_or_array
    ),

    string_or_array: $ => choice(
      $.string,
      $.string_array
    ),

    string_array: $ => seq(
      '[',
      repeat(seq($.string, ',')),
      optional(','),
      ']'
    ),

    integer: $ => /[0-9]+/,

    identifier: $ => $._identifier,

    _identifier: $ => /[a-zA-Z_][\sa-zA-Z0-9]*/,

    event_string: $ => $._quoted_identifier,

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
