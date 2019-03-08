module.exports = grammar({
  name: 'github_action',

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  rules: {

    workflow_file: $ => seq(
      optional($.version),
      repeat1(choice($.workflow, $.action))
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
      repeat(choice($.on_kvp, $.resolves_kvp)),
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
      $._string_or_array
    ),

    _string_or_array: $ => choice(
      $.string,
      $.string_array
    ),

    string_array: $ => seq(
      '[',
      repeat(seq($.string, optional(','))),
      ']'
    ),

    action: $ => seq(
      'action',
      $.string,
      '{',
      repeat($._action_kvps),
      '}'
    ),

    _action_kvps: $ => choice(
      $.uses_kvp,
      $.needs_kvp,
      $.runs_kvp,
      $.args_kvp,
      $.env_kvp,
      $.secrets_kvp
    ),

    uses_kvp: $ => seq(
      'uses',
      '=',
      choice(
        $.docker_uses,
        $.local_uses,
        $.remote_uses
      )
    ),

    docker_uses: $ => seq(
      '"docker://',
      optional($.docker_registry),
      $.docker_path_component,
      repeat(seq('/', $.docker_path_component)),
      optional(
        choice(
          $.docker_tag,
          $.docker_digest
        )
      ),
      '"'
    ),

    docker_registry: $ => seq(
      $.host_component,
      repeat(seq('.', $.host_component)),
      optional(seq(':', $.integer))
    ),

    docker_path_component: $ => seq(
      /[a-zA-Z0-9]+/,
      repeat(/[._-][a-zA-Z0-9]+/)
    ),

    docker_tag: $ => seq(
      ':',
      /a-zA-Z0-9_]+/
    ),

    docker_digest: $ => seq(
      '@',
      $._digest_algorithm,
      ':',
      $._hex
    ),

    _digest_algorithm: $ => seq(
      /[A-Za-z]/,
      /[a-zA-Z0-9]*/,
      repeat(/[+.-_][A-Za-z][a-zA-Z0-9]*/)
    ),

    host_component: $ => choice(
      /[a-zA-Z0-9]/,
      /[a-zA-Z0-9][a-zA-Z0-9-]*[a-zA-Z0-9]/
    ),

    local_uses: $ => seq(
      '"./',
      repeat($._safecodepoint),
      '"'
    ),

    remote_uses: $ => seq(
      '"',
      $.github_owner,
      '/',
      $.github_repo,
      optional(seq('/', /[^\\"]*/)),
      /[\/]*/,
      '@',
      /[^"]*/,
      '"'
    ),

    github_owner: $ => seq(
      /[a-zA-Z0-9]+/,
      optional(/[a-zA-Z0-9\-]*[a-zA-Z0-9]+/)
    ),

    github_repo: $ => /[a-zA-Z0-9\-_.]+/,

    needs_kvp: $ => seq(
      'needs',
      '=',
      $._string_or_array
    ),

    runs_kvp: $ => seq(
      'runs',
      '=',
      $._string_or_array
    ),

    args_kvp: $ => seq(
      'args',
      '=',
      $._string_or_array
    ),

    env_kvp: $ => seq(
      'env',
      '=',
      '{',
      repeat($.env_var),
      '}'
    ),

    env_var: $ => seq(
      $.identifier,
      '=',
      $.string
    ),

    secrets_kvp: $ => seq(
      'secrets',
      '=',
      $.identity_array
    ),

    identity_array: $ => seq(
      '[',
      repeat(seq(alias($._quoted_identifier, $.quoted_identifier), optional(','))),
      ']'
    ),

    integer: $ => /[0-9]+/,

    _hex: $ => /[0-9a-fA-F]+/,

    identifier: $ => $._identifier,

    // `-` is not accurate to the workflow language specification.
    _identifier: $ => /[a-zA-Z_-][\sa-zA-Z0-9]*/,

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
      repeat($._escape, $._safecodepoint),
      '"'
    ),

    _escape: $ => seq(
      '\\',
      /["\\/bfnrt]/
    ),

    _safecodepoint: $ => /[^"\\\u0000-\u001F\u007F]/,

    comment: $ => token(
      choice(
        seq('#', /.*/),
        seq('\/\/', /.*/)
      )
    )
  }
})
