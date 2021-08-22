#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__check_type_start = 1,
  sym__check_type_end = 2,
  sym_single_line_comment = 3,
  sym_if_block_start = 4,
  aux_sym_condition_block_start_token1 = 5,
  aux_sym_condition_block_start_token2 = 6,
  aux_sym_condition_block_start_token3 = 7,
  aux_sym_condition_block_start_token4 = 8,
  sym_condition_block_end = 9,
  sym_then_block_start = 10,
  sym_then_block_end = 11,
  sym_else_block_start = 12,
  sym_else_block_end = 13,
  aux_sym_if_block_end_token1 = 14,
  sym_item_block_start = 15,
  aux_sym_item_contents_token1 = 16,
  sym_item_block_end = 17,
  aux_sym_custom_item_block_token1 = 18,
  aux_sym_acl_block_token1 = 19,
  aux_sym_report_token1 = 20,
  sym_source_file = 21,
  sym__check_type_block = 22,
  sym_contents = 23,
  sym__if_block = 24,
  sym_condition_block = 25,
  sym_condition_block_start = 26,
  sym_then_block = 27,
  sym_else_block = 28,
  sym_if_block_end = 29,
  sym_item_block = 30,
  sym_item_contents = 31,
  sym_custom_item_block = 32,
  sym_acl_block = 33,
  sym_report = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym__check_type_block_repeat1 = 36,
  aux_sym_item_block_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__check_type_start] = "_check_type_start",
  [sym__check_type_end] = "_check_type_end",
  [sym_single_line_comment] = "single_line_comment",
  [sym_if_block_start] = "if_block_start",
  [aux_sym_condition_block_start_token1] = "condition_block_start_token1",
  [aux_sym_condition_block_start_token2] = "condition_block_start_token2",
  [aux_sym_condition_block_start_token3] = "condition_block_start_token3",
  [aux_sym_condition_block_start_token4] = "condition_block_start_token4",
  [sym_condition_block_end] = "condition_block_end",
  [sym_then_block_start] = "then_block_start",
  [sym_then_block_end] = "then_block_end",
  [sym_else_block_start] = "else_block_start",
  [sym_else_block_end] = "else_block_end",
  [aux_sym_if_block_end_token1] = "if_block_end_token1",
  [sym_item_block_start] = "item_block_start",
  [aux_sym_item_contents_token1] = "item_contents_token1",
  [sym_item_block_end] = "item_block_end",
  [aux_sym_custom_item_block_token1] = "custom_item_block_token1",
  [aux_sym_acl_block_token1] = "acl_block_token1",
  [aux_sym_report_token1] = "report_token1",
  [sym_source_file] = "source_file",
  [sym__check_type_block] = "_check_type_block",
  [sym_contents] = "contents",
  [sym__if_block] = "_if_block",
  [sym_condition_block] = "condition_block",
  [sym_condition_block_start] = "condition_block_start",
  [sym_then_block] = "then_block",
  [sym_else_block] = "else_block",
  [sym_if_block_end] = "if_block_end",
  [sym_item_block] = "item_block",
  [sym_item_contents] = "item_contents",
  [sym_custom_item_block] = "custom_item_block",
  [sym_acl_block] = "acl_block",
  [sym_report] = "report",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__check_type_block_repeat1] = "_check_type_block_repeat1",
  [aux_sym_item_block_repeat1] = "item_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__check_type_start] = sym__check_type_start,
  [sym__check_type_end] = sym__check_type_end,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_if_block_start] = sym_if_block_start,
  [aux_sym_condition_block_start_token1] = aux_sym_condition_block_start_token1,
  [aux_sym_condition_block_start_token2] = aux_sym_condition_block_start_token2,
  [aux_sym_condition_block_start_token3] = aux_sym_condition_block_start_token3,
  [aux_sym_condition_block_start_token4] = aux_sym_condition_block_start_token4,
  [sym_condition_block_end] = sym_condition_block_end,
  [sym_then_block_start] = sym_then_block_start,
  [sym_then_block_end] = sym_then_block_end,
  [sym_else_block_start] = sym_else_block_start,
  [sym_else_block_end] = sym_else_block_end,
  [aux_sym_if_block_end_token1] = aux_sym_if_block_end_token1,
  [sym_item_block_start] = sym_item_block_start,
  [aux_sym_item_contents_token1] = aux_sym_item_contents_token1,
  [sym_item_block_end] = sym_item_block_end,
  [aux_sym_custom_item_block_token1] = aux_sym_custom_item_block_token1,
  [aux_sym_acl_block_token1] = aux_sym_acl_block_token1,
  [aux_sym_report_token1] = aux_sym_report_token1,
  [sym_source_file] = sym_source_file,
  [sym__check_type_block] = sym__check_type_block,
  [sym_contents] = sym_contents,
  [sym__if_block] = sym__if_block,
  [sym_condition_block] = sym_condition_block,
  [sym_condition_block_start] = sym_condition_block_start,
  [sym_then_block] = sym_then_block,
  [sym_else_block] = sym_else_block,
  [sym_if_block_end] = sym_if_block_end,
  [sym_item_block] = sym_item_block,
  [sym_item_contents] = sym_item_contents,
  [sym_custom_item_block] = sym_custom_item_block,
  [sym_acl_block] = sym_acl_block,
  [sym_report] = sym_report,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__check_type_block_repeat1] = aux_sym__check_type_block_repeat1,
  [aux_sym_item_block_repeat1] = aux_sym_item_block_repeat1,
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
  [aux_sym_condition_block_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_block_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_block_start_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_block_start_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_condition_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_then_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_then_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_if_block_end_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_item_block_start] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_item_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_item_block_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_custom_item_block_token1] = {
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
  [sym_condition_block_start] = {
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
  [sym_item_block] = {
    .visible = true,
    .named = true,
  },
  [sym_item_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_item_block] = {
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
  [aux_sym_item_block_repeat1] = {
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
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'W') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__check_type_start);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__check_type_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_if_block_start);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token3);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token4);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_condition_block_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_then_block_start);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_then_block_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_else_block_start);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_else_block_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_if_block_end_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_item_block_start);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_item_contents_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_item_block_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_custom_item_block_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_acl_block_token1);
      END_STATE();
    case 143:
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__check_type_start] = ACTIONS(1),
    [sym__check_type_end] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym_if_block_start] = ACTIONS(1),
    [aux_sym_condition_block_start_token1] = ACTIONS(1),
    [aux_sym_condition_block_start_token2] = ACTIONS(1),
    [aux_sym_condition_block_start_token3] = ACTIONS(1),
    [aux_sym_condition_block_start_token4] = ACTIONS(1),
    [sym_condition_block_end] = ACTIONS(1),
    [sym_then_block_start] = ACTIONS(1),
    [sym_then_block_end] = ACTIONS(1),
    [sym_else_block_start] = ACTIONS(1),
    [sym_else_block_end] = ACTIONS(1),
    [aux_sym_if_block_end_token1] = ACTIONS(1),
    [sym_item_block_start] = ACTIONS(1),
    [aux_sym_item_contents_token1] = ACTIONS(1),
    [sym_item_block_end] = ACTIONS(1),
    [aux_sym_custom_item_block_token1] = ACTIONS(1),
    [aux_sym_acl_block_token1] = ACTIONS(1),
    [aux_sym_report_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__check_type_block] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [sym__check_type_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym_if_block_start,
    ACTIONS(10), 1,
      sym_item_block_start,
    ACTIONS(13), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(16), 1,
      aux_sym_acl_block_token1,
    ACTIONS(19), 1,
      aux_sym_report_token1,
    ACTIONS(5), 2,
      sym__check_type_end,
      sym_condition_block_end,
    STATE(2), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [31] = 8,
    ACTIONS(22), 1,
      sym__check_type_end,
    ACTIONS(24), 1,
      sym_if_block_start,
    ACTIONS(26), 1,
      sym_item_block_start,
    ACTIONS(28), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(4), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [61] = 8,
    ACTIONS(24), 1,
      sym_if_block_start,
    ACTIONS(26), 1,
      sym_item_block_start,
    ACTIONS(28), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(34), 1,
      sym__check_type_end,
    STATE(2), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [91] = 8,
    ACTIONS(24), 1,
      sym_if_block_start,
    ACTIONS(26), 1,
      sym_item_block_start,
    ACTIONS(28), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(36), 1,
      sym_condition_block_end,
    STATE(2), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [121] = 8,
    ACTIONS(24), 1,
      sym_if_block_start,
    ACTIONS(26), 1,
      sym_item_block_start,
    ACTIONS(28), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(38), 1,
      sym_condition_block_end,
    STATE(5), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [151] = 7,
    ACTIONS(24), 1,
      sym_if_block_start,
    ACTIONS(26), 1,
      sym_item_block_start,
    ACTIONS(28), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(37), 1,
      sym_contents,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [177] = 7,
    ACTIONS(24), 1,
      sym_if_block_start,
    ACTIONS(26), 1,
      sym_item_block_start,
    ACTIONS(28), 1,
      aux_sym_custom_item_block_token1,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(35), 1,
      sym_contents,
    STATE(15), 5,
      sym__if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [203] = 1,
    ACTIONS(40), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [215] = 1,
    ACTIONS(42), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [227] = 1,
    ACTIONS(44), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [239] = 1,
    ACTIONS(46), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [251] = 1,
    ACTIONS(48), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [263] = 1,
    ACTIONS(50), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [275] = 1,
    ACTIONS(52), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [287] = 1,
    ACTIONS(54), 9,
      sym__check_type_end,
      sym_if_block_start,
      sym_condition_block_end,
      sym_then_block_end,
      sym_else_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [299] = 1,
    ACTIONS(56), 6,
      sym_if_block_start,
      sym_condition_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [308] = 3,
    ACTIONS(58), 1,
      aux_sym_item_contents_token1,
    ACTIONS(60), 1,
      sym_item_block_end,
    STATE(20), 2,
      sym_item_contents,
      aux_sym_item_block_repeat1,
  [319] = 4,
    ACTIONS(62), 1,
      sym_else_block_start,
    ACTIONS(64), 1,
      aux_sym_if_block_end_token1,
    STATE(10), 1,
      sym_if_block_end,
    STATE(29), 1,
      sym_else_block,
  [332] = 3,
    ACTIONS(66), 1,
      aux_sym_item_contents_token1,
    ACTIONS(69), 1,
      sym_item_block_end,
    STATE(20), 2,
      sym_item_contents,
      aux_sym_item_block_repeat1,
  [343] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym__check_type_start,
    STATE(21), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [354] = 3,
    ACTIONS(3), 1,
      sym__check_type_start,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [365] = 2,
    ACTIONS(58), 1,
      aux_sym_item_contents_token1,
    STATE(18), 2,
      sym_item_contents,
      aux_sym_item_block_repeat1,
  [373] = 3,
    ACTIONS(78), 1,
      aux_sym_condition_block_start_token1,
    STATE(6), 1,
      sym_condition_block_start,
    STATE(27), 1,
      sym_condition_block,
  [383] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [388] = 1,
    ACTIONS(82), 2,
      aux_sym_item_contents_token1,
      sym_item_block_end,
  [393] = 2,
    ACTIONS(84), 1,
      sym_then_block_start,
    STATE(19), 1,
      sym_then_block,
  [400] = 1,
    ACTIONS(86), 2,
      aux_sym_condition_block_start_token2,
      aux_sym_condition_block_start_token3,
  [405] = 2,
    ACTIONS(64), 1,
      aux_sym_if_block_end_token1,
    STATE(9), 1,
      sym_if_block_end,
  [412] = 1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [417] = 1,
    ACTIONS(90), 2,
      sym_else_block_start,
      aux_sym_if_block_end_token1,
  [422] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [426] = 1,
    ACTIONS(94), 1,
      aux_sym_condition_block_start_token4,
  [430] = 1,
    ACTIONS(96), 1,
      sym_then_block_start,
  [434] = 1,
    ACTIONS(98), 1,
      sym_then_block_end,
  [438] = 1,
    ACTIONS(100), 1,
      sym_then_block_start,
  [442] = 1,
    ACTIONS(102), 1,
      sym_else_block_end,
  [446] = 1,
    ACTIONS(104), 1,
      aux_sym_if_block_end_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 215,
  [SMALL_STATE(11)] = 227,
  [SMALL_STATE(12)] = 239,
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 287,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 332,
  [SMALL_STATE(21)] = 343,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 365,
  [SMALL_STATE(24)] = 373,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 388,
  [SMALL_STATE(27)] = 393,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 412,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 430,
  [SMALL_STATE(35)] = 434,
  [SMALL_STATE(36)] = 438,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 446,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(24),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(23),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(12),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(13),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block_end, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_item_block, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_block, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contents, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block_start, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_block_repeat1, 2), SHIFT_REPEAT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_block_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_contents, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 3),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3),
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
