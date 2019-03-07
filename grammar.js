module.exports = grammar({
  name: 'github_action',

  rules: {

    workflow_file: $ => seq(
      $.version
    ),

    version: $ => seq(
      'version',
      '=',
      $.integer
    ),

    integer: $ => /[0-9]+/
  }
});
