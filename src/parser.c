#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 43
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  sym_integer = 11,
  sym__identifier = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_BSLASH = 14,
  aux_sym__escape_token1 = 15,
  anon_sym_TILDE = 16,
  sym_workflow_file = 17,
  sym_version = 18,
  sym_workflow = 19,
  sym_on_kvp = 20,
  sym_resolves_kvp = 21,
  sym_string_or_array = 22,
  sym_string_array = 23,
  sym_event_string = 24,
  sym_string = 25,
  sym__quoted_identifier = 26,
  sym__string = 27,
  sym__escape = 28,
  aux_sym_workflow_repeat1 = 29,
  aux_sym_string_array_repeat1 = 30,
  aux_sym__string_repeat1 = 31,
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
  [sym_integer] = "integer",
  [sym__identifier] = "_identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__escape_token1] = "_escape_token1",
  [anon_sym_TILDE] = "~",
  [sym_workflow_file] = "workflow_file",
  [sym_version] = "version",
  [sym_workflow] = "workflow",
  [sym_on_kvp] = "on_kvp",
  [sym_resolves_kvp] = "resolves_kvp",
  [sym_string_or_array] = "string_or_array",
  [sym_string_array] = "string_array",
  [sym_event_string] = "event_string",
  [sym_string] = "string",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__string] = "_string",
  [sym__escape] = "_escape",
  [aux_sym_workflow_repeat1] = "workflow_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
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
  [sym_string_or_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
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
  [aux_sym_workflow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
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
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == 'o')
        ADVANCE(9);
      if (lookahead == 'r')
        ADVANCE(10);
      if (lookahead == 'v')
        ADVANCE(11);
      if (lookahead == 'w')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '~')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 't')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_resolves);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 'v')
        ADVANCE(41);
      if (lookahead == 'w')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'o')
        ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 's')
        ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'k')
        ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'i')
        ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'f')
        ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'o')
        ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'l')
        ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'o')
        ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 54:
      if (lookahead == 'w')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 56:
      if (lookahead == '=')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == 'o')
        ADVANCE(61);
      if (lookahead == 'r')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 64:
      if (lookahead == 's')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'l')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'v')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'e')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 's')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_resolves);
      END_STATE();
    case 71:
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(4);
      END_STATE();
    case 73:
      if (lookahead == 'o')
        ADVANCE(61);
      if (lookahead == 'r')
        ADVANCE(62);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 75},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 73},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__escape_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_resolves] = ACTIONS(1),
  },
  [1] = {
    [sym_workflow] = STATE(4),
    [sym_workflow_file] = STATE(5),
    [sym_version] = STATE(6),
    [anon_sym_version] = ACTIONS(3),
    [anon_sym_workflow] = ACTIONS(5),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(7),
  },
  [3] = {
    [sym__quoted_identifier] = STATE(9),
    [sym__string] = STATE(9),
    [sym_string] = STATE(10),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [6] = {
    [sym_workflow] = STATE(11),
    [anon_sym_workflow] = ACTIONS(5),
  },
  [7] = {
    [sym_integer] = ACTIONS(15),
  },
  [8] = {
    [sym__escape] = STATE(15),
    [aux_sym__string_repeat1] = STATE(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
  },
  [9] = {
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_resolves] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
  },
  [10] = {
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [12] = {
    [anon_sym_workflow] = ACTIONS(27),
  },
  [13] = {
    [aux_sym__escape_token1] = ACTIONS(29),
  },
  [14] = {
    [anon_sym_DQUOTE] = ACTIONS(31),
  },
  [15] = {
    [sym__escape] = STATE(20),
    [aux_sym__string_repeat1] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(17),
  },
  [16] = {
    [aux_sym_workflow_repeat1] = STATE(23),
    [sym_on_kvp] = STATE(23),
    [sym_resolves_kvp] = STATE(23),
    [anon_sym_on] = ACTIONS(35),
    [anon_sym_resolves] = ACTIONS(37),
  },
  [17] = {
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(39),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_resolves] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_on] = ACTIONS(41),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_resolves] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_on] = ACTIONS(43),
  },
  [20] = {
    [sym__escape] = STATE(20),
    [aux_sym__string_repeat1] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(50),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(52),
  },
  [23] = {
    [aux_sym_workflow_repeat1] = STATE(27),
    [sym_on_kvp] = STATE(27),
    [sym_resolves_kvp] = STATE(27),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_on] = ACTIONS(35),
    [anon_sym_resolves] = ACTIONS(37),
  },
  [24] = {
    [sym__quoted_identifier] = STATE(29),
    [sym_event_string] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(56),
  },
  [25] = {
    [sym_string_array] = STATE(32),
    [sym__string] = STATE(9),
    [sym_string] = STATE(32),
    [sym__quoted_identifier] = STATE(9),
    [sym_string_or_array] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(58),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(60),
  },
  [27] = {
    [aux_sym_workflow_repeat1] = STATE(27),
    [sym_on_kvp] = STATE(27),
    [sym_resolves_kvp] = STATE(27),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_on] = ACTIONS(64),
    [anon_sym_resolves] = ACTIONS(67),
  },
  [28] = {
    [sym__identifier] = ACTIONS(19),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_on] = ACTIONS(70),
    [anon_sym_resolves] = ACTIONS(70),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_on] = ACTIONS(72),
    [anon_sym_resolves] = ACTIONS(72),
  },
  [31] = {
    [sym__string] = STATE(9),
    [sym_string] = STATE(36),
    [sym__quoted_identifier] = STATE(9),
    [aux_sym_string_array_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(76),
  },
  [32] = {
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_on] = ACTIONS(78),
    [anon_sym_resolves] = ACTIONS(78),
  },
  [33] = {
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_on] = ACTIONS(80),
    [anon_sym_resolves] = ACTIONS(80),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_on] = ACTIONS(82),
    [anon_sym_resolves] = ACTIONS(82),
  },
  [35] = {
    [anon_sym_RBRACK] = ACTIONS(84),
  },
  [36] = {
    [anon_sym_COMMA] = ACTIONS(86),
  },
  [37] = {
    [sym__string] = STATE(9),
    [sym_string] = STATE(36),
    [sym__quoted_identifier] = STATE(9),
    [aux_sym_string_array_repeat1] = STATE(41),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(88),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_on] = ACTIONS(90),
    [anon_sym_resolves] = ACTIONS(90),
  },
  [39] = {
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(94),
  },
  [41] = {
    [sym__string] = STATE(9),
    [sym_string] = STATE(36),
    [sym__quoted_identifier] = STATE(9),
    [aux_sym_string_array_repeat1] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(96),
  },
  [42] = {
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_on] = ACTIONS(99),
    [anon_sym_resolves] = ACTIONS(99),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_file, 1),
  [13] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_file, 2),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_version, 3),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__escape, 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_identifier, 3),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym__string_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(13),
  [50] = {.count = 1, .reusable = true}, SHIFT(24),
  [52] = {.count = 1, .reusable = true}, SHIFT(25),
  [54] = {.count = 1, .reusable = true}, SHIFT(26),
  [56] = {.count = 1, .reusable = true}, SHIFT(28),
  [58] = {.count = 1, .reusable = true}, SHIFT(31),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(21),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(22),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_event_string, 1),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_on_kvp, 3),
  [74] = {.count = 1, .reusable = true}, SHIFT(34),
  [76] = {.count = 1, .reusable = true}, SHIFT(35),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_string_or_array, 1),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_resolves_kvp, 3),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_string_array, 2),
  [84] = {.count = 1, .reusable = true}, SHIFT(38),
  [86] = {.count = 1, .reusable = true}, SHIFT(39),
  [88] = {.count = 1, .reusable = true}, SHIFT(40),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_string_array, 3),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_array_repeat1, 2),
  [94] = {.count = 1, .reusable = true}, SHIFT(42),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(8),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_string_array, 4),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
