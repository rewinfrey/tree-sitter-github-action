#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 149
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  anon_sym_version = 1,
  anon_sym_EQ = 2,
  anon_sym_workflow = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_on = 6,
  anon_sym_resolves = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  anon_sym_action = 11,
  anon_sym_uses = 12,
  anon_sym_DQUOTEdocker_COLON_SLASH_SLASH = 13,
  anon_sym_SLASH = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON = 17,
  aux_sym_docker_path_component_token1 = 18,
  aux_sym_docker_path_component_token2 = 19,
  aux_sym_docker_tag_token1 = 20,
  anon_sym_AT = 21,
  aux_sym__digest_algorithm_token1 = 22,
  aux_sym__digest_algorithm_token2 = 23,
  aux_sym__digest_algorithm_token3 = 24,
  aux_sym_host_component_token1 = 25,
  aux_sym_host_component_token2 = 26,
  anon_sym_DQUOTE_DOT_SLASH = 27,
  aux_sym_remote_uses_token1 = 28,
  aux_sym_remote_uses_token2 = 29,
  aux_sym_remote_uses_token3 = 30,
  aux_sym_github_owner_token1 = 31,
  sym_github_repo = 32,
  anon_sym_needs = 33,
  anon_sym_runs = 34,
  anon_sym_args = 35,
  anon_sym_env = 36,
  anon_sym_secrets = 37,
  sym_integer = 38,
  sym__hex = 39,
  sym__identifier = 40,
  anon_sym_BSLASH = 41,
  aux_sym__escape_token1 = 42,
  sym__safecodepoint = 43,
  sym_comment = 44,
  sym_workflow_file = 45,
  sym_version = 46,
  sym_workflow = 47,
  sym_on_kvp = 48,
  sym_resolves_kvp = 49,
  sym__string_or_array = 50,
  sym_string_array = 51,
  sym_action = 52,
  sym__action_kvps = 53,
  sym_uses_kvp = 54,
  sym_docker_uses = 55,
  sym_docker_registry = 56,
  sym_docker_path_component = 57,
  sym_docker_tag = 58,
  sym_docker_digest = 59,
  sym__digest_algorithm = 60,
  sym_host_component = 61,
  sym_local_uses = 62,
  sym_remote_uses = 63,
  sym_github_owner = 64,
  sym_needs_kvp = 65,
  sym_runs_kvp = 66,
  sym_args_kvp = 67,
  sym_env_kvp = 68,
  sym_env_var = 69,
  sym_secrets_kvp = 70,
  sym_identity_array = 71,
  sym_identifier = 72,
  sym_event_string = 73,
  sym_string = 74,
  sym__quoted_identifier = 75,
  sym__string = 76,
  sym__escape = 77,
  aux_sym_workflow_file_repeat1 = 78,
  aux_sym_workflow_repeat1 = 79,
  aux_sym_string_array_repeat1 = 80,
  aux_sym_action_repeat1 = 81,
  aux_sym_docker_uses_repeat1 = 82,
  aux_sym_docker_registry_repeat1 = 83,
  aux_sym_docker_path_component_repeat1 = 84,
  aux_sym__digest_algorithm_repeat1 = 85,
  aux_sym_local_uses_repeat1 = 86,
  aux_sym_env_kvp_repeat1 = 87,
  aux_sym_identity_array_repeat1 = 88,
  aux_sym__string_repeat1 = 89,
  alias_sym_quoted_identifier = 90,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_version] = "version",
  [anon_sym_EQ] = "=",
  [anon_sym_workflow] = "workflow",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_on] = "on",
  [anon_sym_resolves] = "resolves",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_action] = "action",
  [anon_sym_uses] = "uses",
  [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = "\"docker://",
  [anon_sym_SLASH] = "/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [aux_sym_docker_path_component_token1] = "docker_path_component_token1",
  [aux_sym_docker_path_component_token2] = "docker_path_component_token2",
  [aux_sym_docker_tag_token1] = "docker_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym__digest_algorithm_token1] = "_digest_algorithm_token1",
  [aux_sym__digest_algorithm_token2] = "_digest_algorithm_token2",
  [aux_sym__digest_algorithm_token3] = "_digest_algorithm_token3",
  [aux_sym_host_component_token1] = "host_component_token1",
  [aux_sym_host_component_token2] = "host_component_token2",
  [anon_sym_DQUOTE_DOT_SLASH] = "\"./",
  [aux_sym_remote_uses_token1] = "remote_uses_token1",
  [aux_sym_remote_uses_token2] = "remote_uses_token2",
  [aux_sym_remote_uses_token3] = "remote_uses_token3",
  [aux_sym_github_owner_token1] = "github_owner_token1",
  [sym_github_repo] = "github_repo",
  [anon_sym_needs] = "needs",
  [anon_sym_runs] = "runs",
  [anon_sym_args] = "args",
  [anon_sym_env] = "env",
  [anon_sym_secrets] = "secrets",
  [sym_integer] = "integer",
  [sym__hex] = "_hex",
  [sym__identifier] = "_identifier",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__escape_token1] = "_escape_token1",
  [sym__safecodepoint] = "_safecodepoint",
  [sym_comment] = "comment",
  [sym_workflow_file] = "workflow_file",
  [sym_version] = "version",
  [sym_workflow] = "workflow",
  [sym_on_kvp] = "on_kvp",
  [sym_resolves_kvp] = "resolves_kvp",
  [sym__string_or_array] = "_string_or_array",
  [sym_string_array] = "string_array",
  [sym_action] = "action",
  [sym__action_kvps] = "_action_kvps",
  [sym_uses_kvp] = "uses_kvp",
  [sym_docker_uses] = "docker_uses",
  [sym_docker_registry] = "docker_registry",
  [sym_docker_path_component] = "docker_path_component",
  [sym_docker_tag] = "docker_tag",
  [sym_docker_digest] = "docker_digest",
  [sym__digest_algorithm] = "_digest_algorithm",
  [sym_host_component] = "host_component",
  [sym_local_uses] = "local_uses",
  [sym_remote_uses] = "remote_uses",
  [sym_github_owner] = "github_owner",
  [sym_needs_kvp] = "needs_kvp",
  [sym_runs_kvp] = "runs_kvp",
  [sym_args_kvp] = "args_kvp",
  [sym_env_kvp] = "env_kvp",
  [sym_env_var] = "env_var",
  [sym_secrets_kvp] = "secrets_kvp",
  [sym_identity_array] = "identity_array",
  [sym_identifier] = "identifier",
  [sym_event_string] = "event_string",
  [sym_string] = "string",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__string] = "_string",
  [sym__escape] = "_escape",
  [aux_sym_workflow_file_repeat1] = "workflow_file_repeat1",
  [aux_sym_workflow_repeat1] = "workflow_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_docker_uses_repeat1] = "docker_uses_repeat1",
  [aux_sym_docker_registry_repeat1] = "docker_registry_repeat1",
  [aux_sym_docker_path_component_repeat1] = "docker_path_component_repeat1",
  [aux_sym__digest_algorithm_repeat1] = "_digest_algorithm_repeat1",
  [aux_sym_local_uses_repeat1] = "local_uses_repeat1",
  [aux_sym_env_kvp_repeat1] = "env_kvp_repeat1",
  [aux_sym_identity_array_repeat1] = "identity_array_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [alias_sym_quoted_identifier] = "quoted_identifier",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolves] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_docker_path_component_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_path_component_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__digest_algorithm_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__digest_algorithm_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__digest_algorithm_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_component_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_component_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_remote_uses_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remote_uses_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remote_uses_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_github_owner_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_github_repo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_needs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_runs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secrets] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__safecodepoint] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow] = {
    .visible = true,
    .named = true,
  },
  [sym_on_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_resolves_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym__string_or_array] = {
    .visible = false,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__action_kvps] = {
    .visible = false,
    .named = true,
  },
  [sym_uses_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_uses] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_registry] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_path_component] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_digest] = {
    .visible = true,
    .named = true,
  },
  [sym__digest_algorithm] = {
    .visible = false,
    .named = true,
  },
  [sym_host_component] = {
    .visible = true,
    .named = true,
  },
  [sym_local_uses] = {
    .visible = true,
    .named = true,
  },
  [sym_remote_uses] = {
    .visible = true,
    .named = true,
  },
  [sym_github_owner] = {
    .visible = true,
    .named = true,
  },
  [sym_needs_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_runs_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_args_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_env_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_secrets_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_identity_array] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_event_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_workflow_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workflow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_uses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_registry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_path_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__digest_algorithm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_uses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_kvp_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identity_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_quoted_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(13);
      if (lookahead == '_')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(16);
      if (lookahead == 'n')
        ADVANCE(17);
      if (lookahead == 'o')
        ADVANCE(18);
      if (lookahead == 'r')
        ADVANCE(19);
      if (lookahead == 's')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(21);
      if (lookahead == 'u')
        ADVANCE(22);
      if (lookahead == 'v')
        ADVANCE(23);
      if (lookahead == 'w')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == 'b' ||
          lookahead == 'f')
        ADVANCE(27);
      if (lookahead == 'c' ||
          lookahead == 'd')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '+' ||
          (';' <= lookahead && lookahead <= '?') ||
          lookahead == '^')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(33);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == 'c')
        ADVANCE(42);
      if (lookahead == 'r')
        ADVANCE(43);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'n')
        ADVANCE(47);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'n')
        ADVANCE(49);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(50);
      if (lookahead == 'u')
        ADVANCE(51);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(53);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(54);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'o')
        ADVANCE(55);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == '/')
        ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'o')
        ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token2);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'z')
        ADVANCE(62);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(63);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'g')
        ADVANCE(65);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(68);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'n')
        ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'c')
        ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DOT_SLASH);
      END_STATE();
    case 60:
      if (lookahead == 'c')
        ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_github_owner_token1);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'A')
        ADVANCE(75);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(76);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(77);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'd')
        ADVANCE(78);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'o')
        ADVANCE(79);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(80);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'r')
        ADVANCE(81);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(82);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(83);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'k')
        ADVANCE(84);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'k')
        ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(86);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'o')
        ADVANCE(87);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(88);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'l')
        ADVANCE(89);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_runs);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'Z')
        ADVANCE(94);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'n')
        ADVANCE(95);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_needs);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'v')
        ADVANCE(96);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(97);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'o')
        ADVANCE(98);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'l')
        ADVANCE(99);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 93:
      if (lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '0')
        ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(103);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'n')
        ADVANCE(104);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'o')
        ADVANCE(105);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == ':')
        ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 's')
        ADVANCE(108);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_secrets);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == 'w')
        ADVANCE(109);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == '/')
        ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '9')
        ADVANCE(111);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_resolves);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 110:
      if (lookahead == '/')
        ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTEdocker_COLON_SLASH_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == ']')
        ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_docker_tag_token1);
      if (lookahead == ']')
        ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(117);
      if (lookahead == 'a')
        ADVANCE(118);
      if (lookahead == 'v')
        ADVANCE(119);
      if (lookahead == 'w')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 117:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(115);
      END_STATE();
    case 118:
      if (lookahead == 'c')
        ADVANCE(121);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 120:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 'i')
        ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 's')
        ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'k')
        ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == 'o')
        ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 'f')
        ADVANCE(132);
      END_STATE();
    case 130:
      if (lookahead == 'n')
        ADVANCE(133);
      END_STATE();
    case 131:
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 132:
      if (lookahead == 'l')
        ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 137:
      if (lookahead == 'w')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 139:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '=')
        ADVANCE(140);
      if (lookahead == '\\')
        SKIP(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        SKIP(139);
      END_STATE();
    case 142:
      if (lookahead == '"')
        ADVANCE(143);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 144:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == '"')
        ADVANCE(143);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(148);
      if (lookahead == ']')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(150);
      if (lookahead == 'e')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(153);
      if (lookahead == 'r')
        ADVANCE(154);
      if (lookahead == 's')
        ADVANCE(155);
      if (lookahead == 'u')
        ADVANCE(156);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      END_STATE();
    case 148:
      if (lookahead == '\n')
        SKIP(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 150:
      if (lookahead == 'r')
        ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == 'n')
        ADVANCE(158);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == 'u')
        ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 's')
        ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'g')
        ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'v')
        ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 161:
      if (lookahead == 's')
        ADVANCE(168);
      END_STATE();
    case 162:
      if (lookahead == 'n')
        ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'c')
        ADVANCE(170);
      END_STATE();
    case 164:
      if (lookahead == 'e')
        ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 's')
        ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 167:
      if (lookahead == 'd')
        ADVANCE(173);
      END_STATE();
    case 168:
      if (lookahead == 'o')
        ADVANCE(174);
      END_STATE();
    case 169:
      if (lookahead == 's')
        ADVANCE(175);
      END_STATE();
    case 170:
      if (lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 171:
      if (lookahead == 's')
        ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 173:
      if (lookahead == 's')
        ADVANCE(178);
      END_STATE();
    case 174:
      if (lookahead == 'l')
        ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_runs);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_needs);
      END_STATE();
    case 179:
      if (lookahead == 'v')
        ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 181:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 182:
      if (lookahead == 's')
        ADVANCE(184);
      END_STATE();
    case 183:
      if (lookahead == 's')
        ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_secrets);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_resolves);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(187);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      END_STATE();
    case 187:
      if (lookahead == '\n')
        SKIP(186);
      END_STATE();
    case 188:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(189);
      if (lookahead == '\\')
        ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(188);
      if (lookahead == '"' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 191:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(192);
      if (lookahead == 'o')
        ADVANCE(153);
      if (lookahead == 'r')
        ADVANCE(193);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      END_STATE();
    case 192:
      if (lookahead == '\n')
        SKIP(191);
      END_STATE();
    case 193:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 194:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(195);
      if (lookahead == 'a')
        ADVANCE(150);
      if (lookahead == 'e')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'r')
        ADVANCE(196);
      if (lookahead == 's')
        ADVANCE(155);
      if (lookahead == 'u')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        SKIP(194);
      END_STATE();
    case 196:
      if (lookahead == 'u')
        ADVANCE(162);
      END_STATE();
    case 197:
      if (lookahead == '"')
        ADVANCE(143);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(198);
      if (lookahead == '\\')
        SKIP(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        SKIP(197);
      END_STATE();
    case 200:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        SKIP(200);
      END_STATE();
    case 202:
      if (lookahead == '"')
        ADVANCE(143);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == ']')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        SKIP(202);
      END_STATE();
    case 204:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        SKIP(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == '-')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 210:
      if (lookahead == ' ')
        ADVANCE(211);
      if (lookahead == '"')
        ADVANCE(143);
      if (lookahead == '#')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == '\\')
        SKIP(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(210);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '')
        ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__safecodepoint);
      if (lookahead == ' ')
        ADVANCE(211);
      if (lookahead == '#')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '')
        ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__safecodepoint);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__safecodepoint);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        SKIP(210);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__safecodepoint);
      END_STATE();
    case 216:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(217);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == '\\')
        SKIP(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 219:
      if (lookahead == '\n')
        SKIP(216);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(220);
      END_STATE();
    case 221:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(222);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        SKIP(221);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(224);
      if (lookahead == 'a')
        ADVANCE(150);
      if (lookahead == 'e')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(153);
      if (lookahead == 'r')
        ADVANCE(154);
      if (lookahead == 's')
        ADVANCE(155);
      if (lookahead == 'u')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      END_STATE();
    case 224:
      if (lookahead == '\n')
        SKIP(223);
      END_STATE();
    case 225:
      if (lookahead == '"')
        ADVANCE(143);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(226);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == '@')
        ADVANCE(227);
      if (lookahead == '\\')
        SKIP(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 228:
      if (lookahead == '\n')
        SKIP(225);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(230);
      END_STATE();
    case 231:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(232);
      if (lookahead == '/')
        ADVANCE(226);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 232:
      if (lookahead == '-')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        SKIP(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_github_owner_token1);
      if (lookahead == '-')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(237);
      END_STATE();
    case 236:
      if (lookahead == '\n')
        SKIP(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_host_component_token1);
      if (lookahead == '-')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 238:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      END_STATE();
    case 239:
      if (lookahead == '\n')
        SKIP(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token1);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(242);
      if (lookahead == 'a')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        SKIP(241);
      END_STATE();
    case 243:
      if (lookahead == '-')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'z')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'A')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == '-')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'Z')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == '0')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == '-')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == '9')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == '_')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == ']')
        ADVANCE(114);
      END_STATE();
    case 253:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        SKIP(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 260:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\\')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '_'))
        ADVANCE(28);
      END_STATE();
    case 261:
      if (lookahead == '/')
        ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 262:
      if (lookahead == '\n')
        SKIP(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 263:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(116);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == '\n')
        SKIP(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead == '#')
        ADVANCE(267);
      if (lookahead == '/')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead == '\n')
        ADVANCE(269);
      if (lookahead == '"' ||
          lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead == '/')
        ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '#')
        ADVANCE(271);
      if (lookahead == '/')
        ADVANCE(272);
      if (lookahead == '\\')
        ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '/')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '\n')
        ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/')
        ADVANCE(259);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 139},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 115},
  [6] = {.lex_state = 115},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 144},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 147},
  [11] = {.lex_state = 186},
  [12] = {.lex_state = 186},
  [13] = {.lex_state = 115},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 115},
  [16] = {.lex_state = 188},
  [17] = {.lex_state = 147},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 191},
  [21] = {.lex_state = 194},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 147},
  [24] = {.lex_state = 147},
  [25] = {.lex_state = 142},
  [26] = {.lex_state = 115},
  [27] = {.lex_state = 139},
  [28] = {.lex_state = 139},
  [29] = {.lex_state = 191},
  [30] = {.lex_state = 139},
  [31] = {.lex_state = 139},
  [32] = {.lex_state = 115},
  [33] = {.lex_state = 139},
  [34] = {.lex_state = 139},
  [35] = {.lex_state = 139},
  [36] = {.lex_state = 139},
  [37] = {.lex_state = 194},
  [38] = {.lex_state = 142},
  [39] = {.lex_state = 197},
  [40] = {.lex_state = 115},
  [41] = {.lex_state = 191},
  [42] = {.lex_state = 197},
  [43] = {.lex_state = 197},
  [44] = {.lex_state = 200},
  [45] = {.lex_state = 197},
  [46] = {.lex_state = 186},
  [47] = {.lex_state = 197},
  [48] = {.lex_state = 115},
  [49] = {.lex_state = 194},
  [50] = {.lex_state = 142},
  [51] = {.lex_state = 191},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 202},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 202},
  [56] = {.lex_state = 194},
  [57] = {.lex_state = 194},
  [58] = {.lex_state = 204},
  [59] = {.lex_state = 210},
  [60] = {.lex_state = 216},
  [61] = {.lex_state = 194},
  [62] = {.lex_state = 194},
  [63] = {.lex_state = 221},
  [64] = {.lex_state = 194},
  [65] = {.lex_state = 223},
  [66] = {.lex_state = 202},
  [67] = {.lex_state = 202},
  [68] = {.lex_state = 194},
  [69] = {.lex_state = 202},
  [70] = {.lex_state = 202},
  [71] = {.lex_state = 216},
  [72] = {.lex_state = 225},
  [73] = {.lex_state = 216},
  [74] = {.lex_state = 216},
  [75] = {.lex_state = 225},
  [76] = {.lex_state = 194},
  [77] = {.lex_state = 210},
  [78] = {.lex_state = 231},
  [79] = {.lex_state = 225},
  [80] = {.lex_state = 194},
  [81] = {.lex_state = 139},
  [82] = {.lex_state = 221},
  [83] = {.lex_state = 139},
  [84] = {.lex_state = 223},
  [85] = {.lex_state = 202},
  [86] = {.lex_state = 202},
  [87] = {.lex_state = 202},
  [88] = {.lex_state = 194},
  [89] = {.lex_state = 202},
  [90] = {.lex_state = 225},
  [91] = {.lex_state = 225},
  [92] = {.lex_state = 144},
  [93] = {.lex_state = 235},
  [94] = {.lex_state = 216},
  [95] = {.lex_state = 238},
  [96] = {.lex_state = 194},
  [97] = {.lex_state = 241},
  [98] = {.lex_state = 216},
  [99] = {.lex_state = 142},
  [100] = {.lex_state = 225},
  [101] = {.lex_state = 194},
  [102] = {.lex_state = 210},
  [103] = {.lex_state = 225},
  [104] = {.lex_state = 253},
  [105] = {.lex_state = 194},
  [106] = {.lex_state = 221},
  [107] = {.lex_state = 142},
  [108] = {.lex_state = 225},
  [109] = {.lex_state = 194},
  [110] = {.lex_state = 142},
  [111] = {.lex_state = 225},
  [112] = {.lex_state = 216},
  [113] = {.lex_state = 216},
  [114] = {.lex_state = 144},
  [115] = {.lex_state = 216},
  [116] = {.lex_state = 255},
  [117] = {.lex_state = 216},
  [118] = {.lex_state = 142},
  [119] = {.lex_state = 225},
  [120] = {.lex_state = 225},
  [121] = {.lex_state = 257},
  [122] = {.lex_state = 142},
  [123] = {.lex_state = 221},
  [124] = {.lex_state = 221},
  [125] = {.lex_state = 194},
  [126] = {.lex_state = 142},
  [127] = {.lex_state = 216},
  [128] = {.lex_state = 260},
  [129] = {.lex_state = 263},
  [130] = {.lex_state = 225},
  [131] = {.lex_state = 266},
  [132] = {.lex_state = 221},
  [133] = {.lex_state = 142},
  [134] = {.lex_state = 142},
  [135] = {.lex_state = 194},
  [136] = {.lex_state = 260},
  [137] = {.lex_state = 142},
  [138] = {.lex_state = 270},
  [139] = {.lex_state = 275},
  [140] = {.lex_state = 221},
  [141] = {.lex_state = 221},
  [142] = {.lex_state = 260},
  [143] = {.lex_state = 142},
  [144] = {.lex_state = 225},
  [145] = {.lex_state = 194},
  [146] = {.lex_state = 270},
  [147] = {.lex_state = 142},
  [148] = {.lex_state = 194},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__escape_token1] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_needs] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_host_component_token2] = ACTIONS(1),
    [aux_sym_github_owner_token1] = ACTIONS(1),
    [aux_sym_docker_tag_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__digest_algorithm_token1] = ACTIONS(1),
    [anon_sym_runs] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_DQUOTE_DOT_SLASH] = ACTIONS(1),
    [sym_github_repo] = ACTIONS(1),
    [aux_sym_docker_path_component_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_secrets] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_resolves] = ACTIONS(1),
    [aux_sym_host_component_token1] = ACTIONS(1),
    [aux_sym_docker_path_component_token2] = ACTIONS(1),
    [aux_sym__digest_algorithm_token3] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_workflow_file_repeat1] = STATE(6),
    [sym_workflow] = STATE(6),
    [sym_version] = STATE(5),
    [sym_action] = STATE(6),
    [sym_workflow_file] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_version] = ACTIONS(5),
    [anon_sym_workflow] = ACTIONS(7),
    [anon_sym_action] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__quoted_identifier] = STATE(10),
    [sym__string] = STATE(10),
    [sym_string] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__quoted_identifier] = STATE(10),
    [sym__string] = STATE(10),
    [sym_string] = STATE(12),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_workflow] = STATE(13),
    [sym_action] = STATE(13),
    [aux_sym_workflow_file_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(7),
    [anon_sym_action] = ACTIONS(9),
  },
  [6] = {
    [sym_workflow] = STATE(14),
    [sym_action] = STATE(14),
    [aux_sym_workflow_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_workflow] = ACTIONS(7),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_integer] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__escape] = STATE(19),
    [aux_sym__string_repeat1] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym__identifier] = ACTIONS(25),
  },
  [10] = {
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_secrets] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_env] = ACTIONS(27),
    [anon_sym_on] = ACTIONS(27),
    [anon_sym_needs] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_runs] = ACTIONS(27),
    [anon_sym_resolves] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_args] = ACTIONS(27),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(29),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [13] = {
    [sym_workflow] = STATE(14),
    [sym_action] = STATE(14),
    [aux_sym_workflow_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_workflow] = ACTIONS(7),
  },
  [14] = {
    [sym_workflow] = STATE(14),
    [sym_action] = STATE(14),
    [aux_sym_workflow_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(37),
    [anon_sym_action] = ACTIONS(40),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(43),
    [anon_sym_action] = ACTIONS(43),
  },
  [16] = {
    [aux_sym__escape_token1] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_secrets] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_on] = ACTIONS(47),
    [anon_sym_needs] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_runs] = ACTIONS(47),
    [anon_sym_resolves] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_args] = ACTIONS(47),
  },
  [18] = {
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__escape] = STATE(25),
    [aux_sym__string_repeat1] = STATE(25),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [aux_sym_workflow_repeat1] = STATE(29),
    [sym_on_kvp] = STATE(29),
    [sym_resolves_kvp] = STATE(29),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_resolves] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(57),
  },
  [21] = {
    [sym_needs_kvp] = STATE(37),
    [sym_secrets_kvp] = STATE(37),
    [sym_uses_kvp] = STATE(37),
    [aux_sym_action_repeat1] = STATE(37),
    [sym_runs_kvp] = STATE(37),
    [sym_args_kvp] = STATE(37),
    [sym_env_kvp] = STATE(37),
    [sym__action_kvps] = STATE(37),
    [anon_sym_secrets] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_needs] = ACTIONS(65),
    [anon_sym_runs] = ACTIONS(67),
    [anon_sym_uses] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(71),
  },
  [22] = {
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_secrets] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_env] = ACTIONS(75),
    [anon_sym_on] = ACTIONS(75),
    [anon_sym_needs] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_runs] = ACTIONS(75),
    [anon_sym_resolves] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_args] = ACTIONS(75),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_secrets] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_env] = ACTIONS(77),
    [anon_sym_on] = ACTIONS(77),
    [anon_sym_needs] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_runs] = ACTIONS(77),
    [anon_sym_resolves] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_args] = ACTIONS(77),
  },
  [25] = {
    [sym__escape] = STATE(25),
    [aux_sym__string_repeat1] = STATE(25),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(84),
    [anon_sym_action] = ACTIONS(84),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_EQ] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [aux_sym_workflow_repeat1] = STATE(41),
    [sym_on_kvp] = STATE(41),
    [sym_resolves_kvp] = STATE(41),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_resolves] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(57),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(96),
    [anon_sym_action] = ACTIONS(96),
  },
  [33] = {
    [anon_sym_EQ] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_EQ] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_EQ] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_needs_kvp] = STATE(49),
    [sym_secrets_kvp] = STATE(49),
    [sym_uses_kvp] = STATE(49),
    [aux_sym_action_repeat1] = STATE(49),
    [sym_runs_kvp] = STATE(49),
    [sym_args_kvp] = STATE(49),
    [sym_env_kvp] = STATE(49),
    [sym__action_kvps] = STATE(49),
    [anon_sym_secrets] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_needs] = ACTIONS(65),
    [anon_sym_runs] = ACTIONS(67),
    [anon_sym_uses] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(71),
  },
  [38] = {
    [sym__quoted_identifier] = STATE(51),
    [sym_event_string] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_string_array] = STATE(54),
    [sym__quoted_identifier] = STATE(10),
    [sym_string] = STATE(54),
    [sym__string] = STATE(10),
    [sym__string_or_array] = STATE(54),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(110),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(112),
    [anon_sym_action] = ACTIONS(112),
  },
  [41] = {
    [aux_sym_workflow_repeat1] = STATE(41),
    [sym_on_kvp] = STATE(41),
    [sym_resolves_kvp] = STATE(41),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_resolves] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(119),
  },
  [42] = {
    [sym_identity_array] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(122),
  },
  [43] = {
    [sym_string_array] = STATE(57),
    [sym__quoted_identifier] = STATE(10),
    [sym_string] = STATE(57),
    [sym__string] = STATE(10),
    [sym__string_or_array] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(110),
  },
  [44] = {
    [sym_docker_uses] = STATE(61),
    [sym_remote_uses] = STATE(61),
    [sym_local_uses] = STATE(61),
    [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DOT_SLASH] = ACTIONS(128),
  },
  [45] = {
    [sym_string_array] = STATE(62),
    [sym__quoted_identifier] = STATE(10),
    [sym_string] = STATE(62),
    [sym__string] = STATE(10),
    [sym__string_or_array] = STATE(62),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(110),
  },
  [46] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(130),
  },
  [47] = {
    [sym_string_array] = STATE(64),
    [sym__quoted_identifier] = STATE(10),
    [sym_string] = STATE(64),
    [sym__string] = STATE(10),
    [sym__string_or_array] = STATE(64),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(110),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(132),
    [anon_sym_action] = ACTIONS(132),
  },
  [49] = {
    [sym_needs_kvp] = STATE(49),
    [sym_secrets_kvp] = STATE(49),
    [sym_uses_kvp] = STATE(49),
    [aux_sym_action_repeat1] = STATE(49),
    [sym_runs_kvp] = STATE(49),
    [sym_args_kvp] = STATE(49),
    [sym_env_kvp] = STATE(49),
    [sym__action_kvps] = STATE(49),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_secrets] = ACTIONS(136),
    [anon_sym_env] = ACTIONS(139),
    [anon_sym_needs] = ACTIONS(142),
    [anon_sym_runs] = ACTIONS(145),
    [anon_sym_uses] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(151),
  },
  [50] = {
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(25),
  },
  [51] = {
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_resolves] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(154),
  },
  [52] = {
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_resolves] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(156),
  },
  [53] = {
    [sym__quoted_identifier] = STATE(10),
    [aux_sym_string_array_repeat1] = STATE(66),
    [sym__string] = STATE(10),
    [sym_string] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_resolves] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(160),
  },
  [55] = {
    [sym__quoted_identifier] = STATE(69),
    [aux_sym_identity_array_repeat1] = STATE(70),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_secrets] = ACTIONS(164),
    [anon_sym_env] = ACTIONS(164),
    [anon_sym_needs] = ACTIONS(164),
    [anon_sym_runs] = ACTIONS(164),
    [anon_sym_uses] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(164),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_secrets] = ACTIONS(166),
    [anon_sym_env] = ACTIONS(166),
    [anon_sym_needs] = ACTIONS(166),
    [anon_sym_runs] = ACTIONS(166),
    [anon_sym_uses] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(166),
  },
  [58] = {
    [sym_docker_registry] = STATE(73),
    [sym_host_component] = STATE(74),
    [sym_docker_path_component] = STATE(75),
    [aux_sym_docker_path_component_token1] = ACTIONS(168),
    [aux_sym_host_component_token2] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [aux_sym_host_component_token1] = ACTIONS(170),
  },
  [59] = {
    [aux_sym_local_uses_repeat1] = STATE(77),
    [sym_comment] = ACTIONS(172),
    [sym__safecodepoint] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
  },
  [60] = {
    [sym_github_owner] = STATE(79),
    [aux_sym_docker_path_component_token1] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_secrets] = ACTIONS(180),
    [anon_sym_env] = ACTIONS(180),
    [anon_sym_needs] = ACTIONS(180),
    [anon_sym_runs] = ACTIONS(180),
    [anon_sym_uses] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(180),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_secrets] = ACTIONS(182),
    [anon_sym_env] = ACTIONS(182),
    [anon_sym_needs] = ACTIONS(182),
    [anon_sym_runs] = ACTIONS(182),
    [anon_sym_uses] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(182),
  },
  [63] = {
    [aux_sym_env_kvp_repeat1] = STATE(82),
    [sym_identifier] = STATE(83),
    [sym_env_var] = STATE(82),
    [anon_sym_RBRACE] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(186),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_secrets] = ACTIONS(188),
    [anon_sym_env] = ACTIONS(188),
    [anon_sym_needs] = ACTIONS(188),
    [anon_sym_runs] = ACTIONS(188),
    [anon_sym_uses] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(188),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_secrets] = ACTIONS(190),
    [anon_sym_env] = ACTIONS(190),
    [anon_sym_needs] = ACTIONS(190),
    [anon_sym_on] = ACTIONS(190),
    [anon_sym_runs] = ACTIONS(190),
    [anon_sym_resolves] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(190),
    [anon_sym_args] = ACTIONS(190),
  },
  [66] = {
    [sym__quoted_identifier] = STATE(10),
    [aux_sym_string_array_repeat1] = STATE(85),
    [sym__string] = STATE(10),
    [sym_string] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(196),
  },
  [68] = {
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_secrets] = ACTIONS(198),
    [anon_sym_env] = ACTIONS(198),
    [anon_sym_needs] = ACTIONS(198),
    [anon_sym_runs] = ACTIONS(198),
    [anon_sym_uses] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(198),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(202),
  },
  [70] = {
    [sym__quoted_identifier] = STATE(69),
    [aux_sym_identity_array_repeat1] = STATE(89),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym_docker_path_component_token1] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
  },
  [72] = {
    [aux_sym_docker_path_component_repeat1] = STATE(90),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(210),
    [aux_sym_docker_path_component_token2] = ACTIONS(212),
  },
  [73] = {
    [sym_docker_path_component] = STATE(91),
    [aux_sym_docker_path_component_token1] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [aux_sym_docker_registry_repeat1] = STATE(94),
    [aux_sym_docker_path_component_token1] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(220),
  },
  [75] = {
    [sym_docker_digest] = STATE(99),
    [aux_sym_docker_uses_repeat1] = STATE(100),
    [sym_docker_tag] = STATE(99),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(228),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_secrets] = ACTIONS(230),
    [anon_sym_env] = ACTIONS(230),
    [anon_sym_needs] = ACTIONS(230),
    [anon_sym_runs] = ACTIONS(230),
    [anon_sym_uses] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(230),
  },
  [77] = {
    [aux_sym_local_uses_repeat1] = STATE(102),
    [sym_comment] = ACTIONS(172),
    [sym__safecodepoint] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
  },
  [78] = {
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym_github_owner_token1] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_SLASH] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_secrets] = ACTIONS(242),
    [anon_sym_env] = ACTIONS(242),
    [anon_sym_needs] = ACTIONS(242),
    [anon_sym_runs] = ACTIONS(242),
    [anon_sym_uses] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(242),
  },
  [81] = {
    [anon_sym_EQ] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [aux_sym_env_kvp_repeat1] = STATE(106),
    [sym_identifier] = STATE(83),
    [sym_env_var] = STATE(106),
    [anon_sym_RBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(186),
  },
  [83] = {
    [anon_sym_EQ] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_secrets] = ACTIONS(250),
    [anon_sym_env] = ACTIONS(250),
    [anon_sym_needs] = ACTIONS(250),
    [anon_sym_on] = ACTIONS(250),
    [anon_sym_runs] = ACTIONS(250),
    [anon_sym_resolves] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(250),
    [anon_sym_args] = ACTIONS(250),
  },
  [85] = {
    [sym__quoted_identifier] = STATE(10),
    [aux_sym_string_array_repeat1] = STATE(85),
    [sym__string] = STATE(10),
    [sym_string] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_secrets] = ACTIONS(259),
    [anon_sym_env] = ACTIONS(259),
    [anon_sym_needs] = ACTIONS(259),
    [anon_sym_runs] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(259),
  },
  [89] = {
    [sym__quoted_identifier] = STATE(69),
    [aux_sym_identity_array_repeat1] = STATE(89),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [aux_sym_docker_path_component_repeat1] = STATE(108),
    [anon_sym_AT] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(268),
    [aux_sym_docker_path_component_token2] = ACTIONS(270),
  },
  [91] = {
    [sym_docker_digest] = STATE(110),
    [aux_sym_docker_uses_repeat1] = STATE(111),
    [sym_docker_tag] = STATE(110),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(228),
  },
  [92] = {
    [sym_integer] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym_host_component] = STATE(113),
    [aux_sym_host_component_token1] = ACTIONS(170),
    [aux_sym_host_component_token2] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [aux_sym_docker_registry_repeat1] = STATE(115),
    [aux_sym_docker_path_component_token1] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(220),
  },
  [95] = {
    [sym__digest_algorithm] = STATE(117),
    [aux_sym__digest_algorithm_token1] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_secrets] = ACTIONS(284),
    [anon_sym_env] = ACTIONS(284),
    [anon_sym_needs] = ACTIONS(284),
    [anon_sym_runs] = ACTIONS(284),
    [anon_sym_uses] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(284),
  },
  [97] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_docker_tag_token1] = ACTIONS(286),
  },
  [98] = {
    [sym_docker_path_component] = STATE(119),
    [aux_sym_docker_path_component_token1] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_docker_digest] = STATE(110),
    [aux_sym_docker_uses_repeat1] = STATE(120),
    [sym_docker_tag] = STATE(110),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(228),
  },
  [101] = {
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_secrets] = ACTIONS(288),
    [anon_sym_env] = ACTIONS(288),
    [anon_sym_needs] = ACTIONS(288),
    [anon_sym_runs] = ACTIONS(288),
    [anon_sym_uses] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(288),
  },
  [102] = {
    [aux_sym_local_uses_repeat1] = STATE(102),
    [sym_comment] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [sym__safecodepoint] = ACTIONS(292),
  },
  [103] = {
    [anon_sym_SLASH] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym_comment] = ACTIONS(3),
    [sym_github_repo] = ACTIONS(297),
  },
  [105] = {
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_secrets] = ACTIONS(299),
    [anon_sym_env] = ACTIONS(299),
    [anon_sym_needs] = ACTIONS(299),
    [anon_sym_runs] = ACTIONS(299),
    [anon_sym_uses] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(299),
  },
  [106] = {
    [aux_sym_env_kvp_repeat1] = STATE(106),
    [sym_identifier] = STATE(83),
    [sym_env_var] = STATE(106),
    [anon_sym_RBRACE] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(303),
  },
  [107] = {
    [sym__quoted_identifier] = STATE(123),
    [sym__string] = STATE(123),
    [sym_string] = STATE(124),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [aux_sym_docker_path_component_repeat1] = STATE(108),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(310),
    [aux_sym_docker_path_component_token2] = ACTIONS(312),
  },
  [109] = {
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_secrets] = ACTIONS(315),
    [anon_sym_env] = ACTIONS(315),
    [anon_sym_needs] = ACTIONS(315),
    [anon_sym_runs] = ACTIONS(315),
    [anon_sym_uses] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(315),
  },
  [110] = {
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [sym_docker_digest] = STATE(126),
    [aux_sym_docker_uses_repeat1] = STATE(120),
    [sym_docker_tag] = STATE(126),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(228),
  },
  [112] = {
    [aux_sym_docker_path_component_token1] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [aux_sym_docker_path_component_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(321),
  },
  [114] = {
    [sym_integer] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [aux_sym_docker_registry_repeat1] = STATE(115),
    [aux_sym_docker_path_component_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(325),
  },
  [116] = {
    [aux_sym__digest_algorithm_token2] = ACTIONS(328),
    [sym_comment] = ACTIONS(172),
  },
  [117] = {
    [anon_sym_COLON] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [anon_sym_AT] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(336),
  },
  [120] = {
    [aux_sym_docker_uses_repeat1] = STATE(120),
    [anon_sym_AT] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(338),
  },
  [121] = {
    [aux_sym_remote_uses_token2] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(343),
    [sym_comment] = ACTIONS(172),
  },
  [122] = {
    [sym__escape] = STATE(134),
    [aux_sym__string_repeat1] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym__identifier] = ACTIONS(347),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(27),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(349),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_secrets] = ACTIONS(351),
    [anon_sym_env] = ACTIONS(351),
    [anon_sym_needs] = ACTIONS(351),
    [anon_sym_runs] = ACTIONS(351),
    [anon_sym_uses] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(351),
  },
  [126] = {
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [aux_sym_docker_path_component_token1] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [aux_sym__digest_algorithm_repeat1] = STATE(136),
    [anon_sym_COLON] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [aux_sym__digest_algorithm_token3] = ACTIONS(359),
  },
  [129] = {
    [sym__hex] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [anon_sym_AT] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [sym_comment] = ACTIONS(172),
    [aux_sym_remote_uses_token1] = ACTIONS(365),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(47),
  },
  [133] = {
    [anon_sym_DQUOTE] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [sym__escape] = STATE(25),
    [aux_sym__string_repeat1] = STATE(25),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_secrets] = ACTIONS(371),
    [anon_sym_env] = ACTIONS(371),
    [anon_sym_needs] = ACTIONS(371),
    [anon_sym_runs] = ACTIONS(371),
    [anon_sym_uses] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(371),
  },
  [136] = {
    [aux_sym__digest_algorithm_repeat1] = STATE(142),
    [anon_sym_COLON] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [aux_sym__digest_algorithm_token3] = ACTIONS(375),
  },
  [137] = {
    [anon_sym_DQUOTE] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [aux_sym_remote_uses_token3] = ACTIONS(379),
    [sym_comment] = ACTIONS(172),
  },
  [139] = {
    [aux_sym_remote_uses_token2] = ACTIONS(381),
    [sym_comment] = ACTIONS(172),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(75),
  },
  [141] = {
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(77),
  },
  [142] = {
    [aux_sym__digest_algorithm_repeat1] = STATE(142),
    [anon_sym_COLON] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
    [aux_sym__digest_algorithm_token3] = ACTIONS(385),
  },
  [143] = {
    [anon_sym_DQUOTE] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
  },
  [144] = {
    [anon_sym_AT] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [anon_sym_RBRACE] = ACTIONS(392),
    [anon_sym_secrets] = ACTIONS(392),
    [anon_sym_env] = ACTIONS(392),
    [anon_sym_needs] = ACTIONS(392),
    [anon_sym_runs] = ACTIONS(392),
    [anon_sym_uses] = ACTIONS(392),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(392),
  },
  [146] = {
    [aux_sym_remote_uses_token3] = ACTIONS(394),
    [sym_comment] = ACTIONS(172),
  },
  [147] = {
    [anon_sym_DQUOTE] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym_secrets] = ACTIONS(398),
    [anon_sym_env] = ACTIONS(398),
    [anon_sym_needs] = ACTIONS(398),
    [anon_sym_runs] = ACTIONS(398),
    [anon_sym_uses] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [anon_sym_args] = ACTIONS(398),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_file, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(15),
  [21] = {.count = 1, .reusable = true}, SHIFT(17),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, SHIFT(18),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, SHIFT(21),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_file, 2),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workflow_file_repeat1, 2),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_file_repeat1, 2), SHIFT_REPEAT(4),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_version, 3),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = true}, SHIFT(32),
  [63] = {.count = 1, .reusable = true}, SHIFT(35),
  [65] = {.count = 1, .reusable = true}, SHIFT(34),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(33),
  [71] = {.count = 1, .reusable = true}, SHIFT(36),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__escape, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_identifier, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(16),
  [82] = {.count = 1, .reusable = true}, REDUCE(aux_sym__string_repeat1, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [86] = {.count = 1, .reusable = true}, SHIFT(38),
  [88] = {.count = 1, .reusable = true}, SHIFT(39),
  [90] = {.count = 1, .reusable = true}, SHIFT(40),
  [92] = {.count = 1, .reusable = true}, SHIFT(42),
  [94] = {.count = 1, .reusable = true}, SHIFT(43),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_action, 4),
  [98] = {.count = 1, .reusable = true}, SHIFT(44),
  [100] = {.count = 1, .reusable = true}, SHIFT(45),
  [102] = {.count = 1, .reusable = true}, SHIFT(46),
  [104] = {.count = 1, .reusable = true}, SHIFT(47),
  [106] = {.count = 1, .reusable = true}, SHIFT(48),
  [108] = {.count = 1, .reusable = true}, SHIFT(50),
  [110] = {.count = 1, .reusable = true}, SHIFT(53),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(27),
  [122] = {.count = 1, .reusable = true}, SHIFT(55),
  [124] = {.count = 1, .reusable = true}, SHIFT(58),
  [126] = {.count = 1, .reusable = false}, SHIFT(60),
  [128] = {.count = 1, .reusable = true}, SHIFT(59),
  [130] = {.count = 1, .reusable = true}, SHIFT(63),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_action, 5),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(30),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(35),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(34),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(31),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(33),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(36),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_event_string, 1),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_on_kvp, 3),
  [158] = {.count = 1, .reusable = true}, SHIFT(65),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_resolves_kvp, 3),
  [162] = {.count = 1, .reusable = true}, SHIFT(68),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_secrets_kvp, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_runs_kvp, 3),
  [168] = {.count = 1, .reusable = false}, SHIFT(72),
  [170] = {.count = 1, .reusable = false}, SHIFT(71),
  [172] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [174] = {.count = 1, .reusable = false}, SHIFT(77),
  [176] = {.count = 1, .reusable = false}, SHIFT(76),
  [178] = {.count = 1, .reusable = true}, SHIFT(78),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_uses_kvp, 3),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_needs_kvp, 3),
  [184] = {.count = 1, .reusable = true}, SHIFT(80),
  [186] = {.count = 1, .reusable = true}, SHIFT(81),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_args_kvp, 3),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_string_array, 2),
  [192] = {.count = 1, .reusable = true}, SHIFT(84),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_array_repeat1, 1),
  [196] = {.count = 1, .reusable = true}, SHIFT(86),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_identity_array, 2),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identity_array_repeat1, 1, .alias_sequence_id = 1),
  [202] = {.count = 1, .reusable = true}, SHIFT(87),
  [204] = {.count = 1, .reusable = true}, SHIFT(88),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_host_component, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_docker_path_component, 1),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_docker_path_component, 1),
  [212] = {.count = 1, .reusable = true}, SHIFT(90),
  [214] = {.count = 1, .reusable = true}, SHIFT(72),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_docker_registry, 1),
  [218] = {.count = 1, .reusable = true}, SHIFT(92),
  [220] = {.count = 1, .reusable = true}, SHIFT(93),
  [222] = {.count = 1, .reusable = true}, SHIFT(95),
  [224] = {.count = 1, .reusable = true}, SHIFT(96),
  [226] = {.count = 1, .reusable = true}, SHIFT(97),
  [228] = {.count = 1, .reusable = false}, SHIFT(98),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_local_uses, 2),
  [232] = {.count = 1, .reusable = false}, SHIFT(102),
  [234] = {.count = 1, .reusable = false}, SHIFT(101),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_github_owner, 1),
  [238] = {.count = 1, .reusable = true}, SHIFT(103),
  [240] = {.count = 1, .reusable = false}, SHIFT(104),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_env_kvp, 4),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(105),
  [248] = {.count = 1, .reusable = true}, SHIFT(107),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_string_array, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_array_repeat1, 2),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(9),
  [257] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identity_array_repeat1, 2, .alias_sequence_id = 1),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_identity_array, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identity_array_repeat1, 2),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identity_array_repeat1, 2), SHIFT_REPEAT(50),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_docker_path_component, 2),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_docker_path_component, 2),
  [270] = {.count = 1, .reusable = true}, SHIFT(108),
  [272] = {.count = 1, .reusable = true}, SHIFT(109),
  [274] = {.count = 1, .reusable = true}, SHIFT(112),
  [276] = {.count = 1, .reusable = true}, SHIFT(71),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_docker_registry, 2),
  [280] = {.count = 1, .reusable = true}, SHIFT(114),
  [282] = {.count = 1, .reusable = true}, SHIFT(116),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_docker_uses, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(118),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_local_uses, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(aux_sym_local_uses_repeat1, 2),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym_local_uses_repeat1, 2), SHIFT_REPEAT(102),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_github_owner, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(121),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_env_kvp, 5),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_env_kvp_repeat1, 2),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_env_kvp_repeat1, 2), SHIFT_REPEAT(81),
  [306] = {.count = 1, .reusable = true}, SHIFT(122),
  [308] = {.count = 1, .reusable = true}, REDUCE(aux_sym_docker_path_component_repeat1, 2),
  [310] = {.count = 1, .reusable = false}, REDUCE(aux_sym_docker_path_component_repeat1, 2),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_path_component_repeat1, 2), SHIFT_REPEAT(108),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_docker_uses, 4),
  [317] = {.count = 1, .reusable = true}, SHIFT(125),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_docker_registry, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_docker_registry_repeat1, 2),
  [323] = {.count = 1, .reusable = true}, SHIFT(127),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_docker_registry_repeat1, 2), SHIFT_REPEAT(93),
  [328] = {.count = 1, .reusable = true}, SHIFT(128),
  [330] = {.count = 1, .reusable = true}, SHIFT(129),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_docker_tag, 2),
  [334] = {.count = 1, .reusable = true}, REDUCE(aux_sym_docker_uses_repeat1, 2),
  [336] = {.count = 1, .reusable = false}, REDUCE(aux_sym_docker_uses_repeat1, 2),
  [338] = {.count = 2, .reusable = false}, REDUCE(aux_sym_docker_uses_repeat1, 2), SHIFT_REPEAT(98),
  [341] = {.count = 1, .reusable = false}, SHIFT(130),
  [343] = {.count = 1, .reusable = false}, SHIFT(131),
  [345] = {.count = 1, .reusable = true}, SHIFT(132),
  [347] = {.count = 1, .reusable = true}, SHIFT(133),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_env_var, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_docker_uses, 5),
  [353] = {.count = 1, .reusable = true}, SHIFT(135),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_docker_registry, 4),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym__digest_algorithm, 2),
  [359] = {.count = 1, .reusable = true}, SHIFT(136),
  [361] = {.count = 1, .reusable = true}, SHIFT(137),
  [363] = {.count = 1, .reusable = true}, SHIFT(138),
  [365] = {.count = 1, .reusable = false}, SHIFT(139),
  [367] = {.count = 1, .reusable = true}, SHIFT(140),
  [369] = {.count = 1, .reusable = true}, SHIFT(141),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_docker_uses, 6),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym__digest_algorithm, 3),
  [375] = {.count = 1, .reusable = true}, SHIFT(142),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_docker_digest, 4),
  [379] = {.count = 1, .reusable = false}, SHIFT(143),
  [381] = {.count = 1, .reusable = false}, SHIFT(144),
  [383] = {.count = 1, .reusable = false}, REDUCE(aux_sym__digest_algorithm_repeat1, 2),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym__digest_algorithm_repeat1, 2), SHIFT_REPEAT(142),
  [388] = {.count = 1, .reusable = true}, SHIFT(145),
  [390] = {.count = 1, .reusable = true}, SHIFT(146),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_remote_uses, 8),
  [394] = {.count = 1, .reusable = false}, SHIFT(147),
  [396] = {.count = 1, .reusable = true}, SHIFT(148),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_remote_uses, 10),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_github_action() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
