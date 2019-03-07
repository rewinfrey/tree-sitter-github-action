#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 29
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_version = 1,
  anon_sym_EQ = 2,
  anon_sym_workflow = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_on = 6,
  sym_integer = 7,
  sym__identifier = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_BSLASH = 10,
  aux_sym__escape_token1 = 11,
  anon_sym_TILDE = 12,
  sym_workflow_file = 13,
  sym_version = 14,
  sym_workflow = 15,
  sym_on_kvp = 16,
  sym_event_string = 17,
  sym_string = 18,
  sym__quoted_identifier = 19,
  sym__string = 20,
  sym__escape = 21,
  aux_sym_workflow_repeat1 = 22,
  aux_sym__string_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_version] = "version",
  [anon_sym_EQ] = "=",
  [anon_sym_workflow] = "workflow",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_on] = "on",
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
  [sym_event_string] = "event_string",
  [sym_string] = "string",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__string] = "_string",
  [sym__escape] = "_escape",
  [aux_sym_workflow_repeat1] = "workflow_repeat1",
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
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == 'o')
        ADVANCE(6);
      if (lookahead == 'v')
        ADVANCE(7);
      if (lookahead == 'w')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '~')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'v')
        ADVANCE(30);
      if (lookahead == 'w')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'o')
        ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'r')
        ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'k')
        ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'i')
        ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'f')
        ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'o')
        ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'n')
        ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'o')
        ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 43:
      if (lookahead == 'w')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 45:
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(3);
      END_STATE();
    case 51:
      if (lookahead == 'o')
        ADVANCE(52);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 54:
      if (lookahead == 'o')
        ADVANCE(52);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 51},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [aux_sym__escape_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
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
    [sym_string] = STATE(9),
    [sym__quoted_identifier] = STATE(10),
    [sym__string] = STATE(10),
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
    [aux_sym__string_repeat1] = STATE(15),
    [sym__escape] = STATE(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
  },
  [9] = {
    [anon_sym_LBRACE] = ACTIONS(21),
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
    [aux_sym__string_repeat1] = STATE(20),
    [sym__escape] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(17),
  },
  [16] = {
    [sym_on_kvp] = STATE(22),
    [aux_sym_workflow_repeat1] = STATE(22),
    [anon_sym_on] = ACTIONS(35),
  },
  [17] = {
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(37),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_on] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
  },
  [19] = {
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [20] = {
    [aux_sym__string_repeat1] = STATE(20),
    [sym__escape] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(48),
  },
  [22] = {
    [sym_on_kvp] = STATE(25),
    [aux_sym_workflow_repeat1] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_on] = ACTIONS(35),
  },
  [23] = {
    [sym__quoted_identifier] = STATE(27),
    [sym_event_string] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(52),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(54),
  },
  [25] = {
    [sym_on_kvp] = STATE(25),
    [aux_sym_workflow_repeat1] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_on] = ACTIONS(58),
  },
  [26] = {
    [sym__identifier] = ACTIONS(19),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_on] = ACTIONS(61),
  },
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_on] = ACTIONS(63),
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
  [21] = {.count = 1, .reusable = true}, SHIFT(16),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_file, 2),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_version, 3),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__escape, 2),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_identifier, 3),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym__string_repeat1, 2),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(13),
  [48] = {.count = 1, .reusable = true}, SHIFT(23),
  [50] = {.count = 1, .reusable = true}, SHIFT(24),
  [52] = {.count = 1, .reusable = true}, SHIFT(26),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [56] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workflow_repeat1, 2), SHIFT_REPEAT(21),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_event_string, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_on_kvp, 3),
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
