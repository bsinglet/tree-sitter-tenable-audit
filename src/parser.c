#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__check_type_start = 1,
  sym__check_type_end = 2,
  sym_single_line_comment = 3,
  sym_if_block_start = 4,
  aux_sym_condition_block_token1 = 5,
  aux_sym_then_block_token1 = 6,
  aux_sym_else_block_token1 = 7,
  aux_sym_if_block_end_token1 = 8,
  aux_sym_item_token1 = 9,
  aux_sym_custom_item_token1 = 10,
  aux_sym_acl_block_token1 = 11,
  aux_sym_report_token1 = 12,
  sym_source_file = 13,
  sym__check_type_block = 14,
  sym_contents = 15,
  sym__if_block = 16,
  sym_condition_block = 17,
  sym_then_block = 18,
  sym_else_block = 19,
  sym_if_block_end = 20,
  sym_item = 21,
  sym_custom_item = 22,
  sym_acl_block = 23,
  sym_report = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym__check_type_block_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__check_type_start] = "_check_type_start",
  [sym__check_type_end] = "_check_type_end",
  [sym_single_line_comment] = "single_line_comment",
  [sym_if_block_start] = "if_block_start",
  [aux_sym_condition_block_token1] = "condition_block_token1",
  [aux_sym_then_block_token1] = "then_block_token1",
  [aux_sym_else_block_token1] = "else_block_token1",
  [aux_sym_if_block_end_token1] = "if_block_end_token1",
  [aux_sym_item_token1] = "item_token1",
  [aux_sym_custom_item_token1] = "custom_item_token1",
  [aux_sym_acl_block_token1] = "acl_block_token1",
  [aux_sym_report_token1] = "report_token1",
  [sym_source_file] = "source_file",
  [sym__check_type_block] = "_check_type_block",
  [sym_contents] = "contents",
  [sym__if_block] = "_if_block",
  [sym_condition_block] = "condition_block",
  [sym_then_block] = "then_block",
  [sym_else_block] = "else_block",
  [sym_if_block_end] = "if_block_end",
  [sym_item] = "item",
  [sym_custom_item] = "custom_item",
  [sym_acl_block] = "acl_block",
  [sym_report] = "report",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__check_type_block_repeat1] = "_check_type_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__check_type_start] = sym__check_type_start,
  [sym__check_type_end] = sym__check_type_end,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_if_block_start] = sym_if_block_start,
  [aux_sym_condition_block_token1] = aux_sym_condition_block_token1,
  [aux_sym_then_block_token1] = aux_sym_then_block_token1,
  [aux_sym_else_block_token1] = aux_sym_else_block_token1,
  [aux_sym_if_block_end_token1] = aux_sym_if_block_end_token1,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [aux_sym_custom_item_token1] = aux_sym_custom_item_token1,
  [aux_sym_acl_block_token1] = aux_sym_acl_block_token1,
  [aux_sym_report_token1] = aux_sym_report_token1,
  [sym_source_file] = sym_source_file,
  [sym__check_type_block] = sym__check_type_block,
  [sym_contents] = sym_contents,
  [sym__if_block] = sym__if_block,
  [sym_condition_block] = sym_condition_block,
  [sym_then_block] = sym_then_block,
  [sym_else_block] = sym_else_block,
  [sym_if_block_end] = sym_if_block_end,
  [sym_item] = sym_item,
  [sym_custom_item] = sym_custom_item,
  [sym_acl_block] = sym_acl_block,
  [sym_report] = sym_report,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__check_type_block_repeat1] = aux_sym__check_type_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__check_type_start] = {
    .visible = false,
    .named = true,
  },
  [sym__check_type_end] = {
    .visible = false,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block_start] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_condition_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_then_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_block_end_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_acl_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_report_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__check_type_block] = {
    .visible = false,
    .named = true,
  },
  [sym_contents] = {
    .visible = true,
    .named = true,
  },
  [sym__if_block] = {
    .visible = false,
    .named = true,
  },
  [sym_condition_block] = {
    .visible = true,
    .named = true,
  },
  [sym_then_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_item] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_block] = {
    .visible = true,
    .named = true,
  },
  [sym_report] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__check_type_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'W') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__check_type_start);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__check_type_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_if_block_start);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_condition_block_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_then_block_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_else_block_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_if_block_end_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_custom_item_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_acl_block_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_report_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__check_type_start] = ACTIONS(1),
    [sym__check_type_end] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym_if_block_start] = ACTIONS(1),
    [aux_sym_condition_block_token1] = ACTIONS(1),
    [aux_sym_then_block_token1] = ACTIONS(1),
    [aux_sym_else_block_token1] = ACTIONS(1),
    [aux_sym_if_block_end_token1] = ACTIONS(1),
    [aux_sym_item_token1] = ACTIONS(1),
    [aux_sym_custom_item_token1] = ACTIONS(1),
    [aux_sym_acl_block_token1] = ACTIONS(1),
    [aux_sym_report_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__check_type_block] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym__check_type_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      sym__check_type_end,
    ACTIONS(7), 1,
      sym_if_block_start,
    ACTIONS(9), 1,
      aux_sym_item_token1,
    ACTIONS(11), 1,
      aux_sym_custom_item_token1,
    ACTIONS(13), 1,
      aux_sym_acl_block_token1,
    ACTIONS(15), 1,
      aux_sym_report_token1,
    STATE(3), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(12), 5,
      sym__if_block,
      sym_item,
      sym_custom_item,
      sym_acl_block,
      sym_report,
  [30] = 8,
    ACTIONS(7), 1,
      sym_if_block_start,
    ACTIONS(9), 1,
      aux_sym_item_token1,
    ACTIONS(11), 1,
      aux_sym_custom_item_token1,
    ACTIONS(13), 1,
      aux_sym_acl_block_token1,
    ACTIONS(15), 1,
      aux_sym_report_token1,
    ACTIONS(17), 1,
      sym__check_type_end,
    STATE(4), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(12), 5,
      sym__if_block,
      sym_item,
      sym_custom_item,
      sym_acl_block,
      sym_report,
  [60] = 8,
    ACTIONS(19), 1,
      sym__check_type_end,
    ACTIONS(21), 1,
      sym_if_block_start,
    ACTIONS(24), 1,
      aux_sym_item_token1,
    ACTIONS(27), 1,
      aux_sym_custom_item_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(33), 1,
      aux_sym_report_token1,
    STATE(4), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(12), 5,
      sym__if_block,
      sym_item,
      sym_custom_item,
      sym_acl_block,
      sym_report,
  [90] = 1,
    ACTIONS(36), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [99] = 1,
    ACTIONS(38), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [108] = 1,
    ACTIONS(40), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [117] = 1,
    ACTIONS(42), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [126] = 1,
    ACTIONS(44), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [135] = 1,
    ACTIONS(46), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [144] = 1,
    ACTIONS(48), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [153] = 1,
    ACTIONS(50), 6,
      sym__check_type_end,
      sym_if_block_start,
      aux_sym_item_token1,
      aux_sym_custom_item_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [162] = 3,
    ACTIONS(3), 1,
      sym__check_type_start,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [173] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym__check_type_start,
    STATE(14), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [184] = 4,
    ACTIONS(59), 1,
      aux_sym_else_block_token1,
    ACTIONS(61), 1,
      aux_sym_if_block_end_token1,
    STATE(7), 1,
      sym_if_block_end,
    STATE(20), 1,
      sym_else_block,
  [197] = 2,
    ACTIONS(63), 1,
      aux_sym_condition_block_token1,
    STATE(18), 1,
      sym_condition_block,
  [204] = 1,
    ACTIONS(65), 2,
      aux_sym_else_block_token1,
      aux_sym_if_block_end_token1,
  [209] = 2,
    ACTIONS(67), 1,
      aux_sym_then_block_token1,
    STATE(15), 1,
      sym_then_block,
  [216] = 1,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [221] = 2,
    ACTIONS(61), 1,
      aux_sym_if_block_end_token1,
    STATE(6), 1,
      sym_if_block_end,
  [228] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [233] = 1,
    ACTIONS(73), 1,
      aux_sym_then_block_token1,
  [237] = 1,
    ACTIONS(75), 1,
      aux_sym_if_block_end_token1,
  [241] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 209,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 221,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 233,
  [SMALL_STATE(23)] = 237,
  [SMALL_STATE(24)] = 241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(16),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block_end, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_item, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_block, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contents, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tenable_audit(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
