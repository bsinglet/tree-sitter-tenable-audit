#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_double_quoted_string_token1 = 1,
  aux_sym_double_quoted_string_token2 = 2,
  sym__check_type_start = 3,
  sym__check_type_end = 4,
  sym_single_line_comment = 5,
  sym_if_block_start = 6,
  aux_sym_condition_block_start_token1 = 7,
  aux_sym_condition_block_start_token2 = 8,
  aux_sym_condition_block_start_token3 = 9,
  aux_sym_condition_block_start_token4 = 10,
  sym_condition_block_end = 11,
  sym_then_block_start = 12,
  sym_then_block_end = 13,
  sym_else_block_start = 14,
  sym_else_block_end = 15,
  aux_sym_if_block_end_token1 = 16,
  sym_item_block_start = 17,
  aux_sym_generic_tag_value_pair_token1 = 18,
  sym_value_data_dword = 19,
  aux_sym_value_data_range_token1 = 20,
  aux_sym_value_data_range_token2 = 21,
  aux_sym_value_data_range_token3 = 22,
  aux_sym_value_data_range_token4 = 23,
  aux_sym_value_data_range_token5 = 24,
  sym_unquoted_keyword = 25,
  sym_item_block_end = 26,
  aux_sym_custom_item_block_token1 = 27,
  aux_sym_custom_item_block_token2 = 28,
  aux_sym_acl_block_token1 = 29,
  aux_sym_report_token1 = 30,
  sym_source_file = 31,
  sym_double_quoted_string = 32,
  sym__check_type_block = 33,
  sym_contents = 34,
  sym__if_block = 35,
  sym_condition_block = 36,
  sym_condition_block_start = 37,
  sym_then_block = 38,
  sym_else_block = 39,
  sym_if_block_end = 40,
  sym_item_block = 41,
  sym_item_contents = 42,
  sym_generic_tag_value_pair = 43,
  sym_generic_tag_value = 44,
  sym_value_data_range = 45,
  sym_custom_item_block = 46,
  sym_acl_block = 47,
  sym_report = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym__check_type_block_repeat1 = 50,
  aux_sym_item_contents_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_double_quoted_string_token2] = "double_quoted_string_token2",
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
  [aux_sym_generic_tag_value_pair_token1] = "generic_tag_value_pair_token1",
  [sym_value_data_dword] = "value_data_dword",
  [aux_sym_value_data_range_token1] = "value_data_range_token1",
  [aux_sym_value_data_range_token2] = "value_data_range_token2",
  [aux_sym_value_data_range_token3] = "value_data_range_token3",
  [aux_sym_value_data_range_token4] = "value_data_range_token4",
  [aux_sym_value_data_range_token5] = "value_data_range_token5",
  [sym_unquoted_keyword] = "unquoted_keyword",
  [sym_item_block_end] = "item_block_end",
  [aux_sym_custom_item_block_token1] = "custom_item_block_token1",
  [aux_sym_custom_item_block_token2] = "custom_item_block_token2",
  [aux_sym_acl_block_token1] = "acl_block_token1",
  [aux_sym_report_token1] = "report_token1",
  [sym_source_file] = "source_file",
  [sym_double_quoted_string] = "double_quoted_string",
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
  [sym_generic_tag_value_pair] = "generic_tag_value_pair",
  [sym_generic_tag_value] = "generic_tag_value",
  [sym_value_data_range] = "value_data_range",
  [sym_custom_item_block] = "custom_item_block",
  [sym_acl_block] = "acl_block",
  [sym_report] = "report",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__check_type_block_repeat1] = "_check_type_block_repeat1",
  [aux_sym_item_contents_repeat1] = "item_contents_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_double_quoted_string_token2] = aux_sym_double_quoted_string_token2,
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
  [aux_sym_generic_tag_value_pair_token1] = aux_sym_generic_tag_value_pair_token1,
  [sym_value_data_dword] = sym_value_data_dword,
  [aux_sym_value_data_range_token1] = aux_sym_value_data_range_token1,
  [aux_sym_value_data_range_token2] = aux_sym_value_data_range_token2,
  [aux_sym_value_data_range_token3] = aux_sym_value_data_range_token3,
  [aux_sym_value_data_range_token4] = aux_sym_value_data_range_token4,
  [aux_sym_value_data_range_token5] = aux_sym_value_data_range_token5,
  [sym_unquoted_keyword] = sym_unquoted_keyword,
  [sym_item_block_end] = sym_item_block_end,
  [aux_sym_custom_item_block_token1] = aux_sym_custom_item_block_token1,
  [aux_sym_custom_item_block_token2] = aux_sym_custom_item_block_token2,
  [aux_sym_acl_block_token1] = aux_sym_acl_block_token1,
  [aux_sym_report_token1] = aux_sym_report_token1,
  [sym_source_file] = sym_source_file,
  [sym_double_quoted_string] = sym_double_quoted_string,
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
  [sym_generic_tag_value_pair] = sym_generic_tag_value_pair,
  [sym_generic_tag_value] = sym_generic_tag_value,
  [sym_value_data_range] = sym_value_data_range,
  [sym_custom_item_block] = sym_custom_item_block,
  [sym_acl_block] = sym_acl_block,
  [sym_report] = sym_report,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__check_type_block_repeat1] = aux_sym__check_type_block_repeat1,
  [aux_sym_item_contents_repeat1] = aux_sym_item_contents_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_token2] = {
    .visible = false,
    .named = false,
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
  [aux_sym_generic_tag_value_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_value_data_dword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_data_range_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_data_range_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_data_range_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_data_range_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_data_range_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_item_block_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_custom_item_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_item_block_token2] = {
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
  [sym_double_quoted_string] = {
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
  [sym_generic_tag_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_tag_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value_data_range] = {
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
  [aux_sym_item_contents_repeat1] = {
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
      if (eof) ADVANCE(142);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(151);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(174);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(165);
      END_STATE();
    case 35:
      if (lookahead == 'W') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'X') ADVANCE(167);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(131);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead == '\r') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__check_type_start);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__check_type_end);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_if_block_start);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token3);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token4);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_condition_block_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_then_block_start);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_then_block_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_else_block_start);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_else_block_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_if_block_end_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_item_block_start);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_generic_tag_value_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_value_data_range_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_value_data_range_token2);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_value_data_range_token3);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_value_data_range_token4);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_value_data_range_token5);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_item_block_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_custom_item_block_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_custom_item_block_token2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_acl_block_token1);
      END_STATE();
    case 174:
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
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 144},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_double_quoted_string_token1] = ACTIONS(1),
    [sym__check_type_start] = ACTIONS(1),
    [sym__check_type_end] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym_if_block_start] = ACTIONS(1),
    [aux_sym_condition_block_start_token1] = ACTIONS(1),
    [aux_sym_condition_block_start_token4] = ACTIONS(1),
    [sym_condition_block_end] = ACTIONS(1),
    [sym_then_block_start] = ACTIONS(1),
    [sym_then_block_end] = ACTIONS(1),
    [sym_else_block_start] = ACTIONS(1),
    [sym_else_block_end] = ACTIONS(1),
    [aux_sym_if_block_end_token1] = ACTIONS(1),
    [sym_item_block_start] = ACTIONS(1),
    [sym_value_data_dword] = ACTIONS(1),
    [aux_sym_value_data_range_token1] = ACTIONS(1),
    [aux_sym_value_data_range_token2] = ACTIONS(1),
    [aux_sym_value_data_range_token3] = ACTIONS(1),
    [aux_sym_value_data_range_token4] = ACTIONS(1),
    [aux_sym_value_data_range_token5] = ACTIONS(1),
    [sym_unquoted_keyword] = ACTIONS(1),
    [sym_item_block_end] = ACTIONS(1),
    [aux_sym_custom_item_block_token1] = ACTIONS(1),
    [aux_sym_custom_item_block_token2] = ACTIONS(1),
    [aux_sym_acl_block_token1] = ACTIONS(1),
    [aux_sym_report_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__check_type_block] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
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
    STATE(6), 2,
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
    STATE(2), 2,
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
    STATE(45), 1,
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
    STATE(46), 1,
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
  [299] = 5,
    ACTIONS(56), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(60), 1,
      aux_sym_value_data_range_token1,
    STATE(29), 1,
      sym_generic_tag_value,
    ACTIONS(58), 2,
      sym_value_data_dword,
      sym_unquoted_keyword,
    STATE(28), 2,
      sym_double_quoted_string,
      sym_value_data_range,
  [317] = 1,
    ACTIONS(62), 6,
      sym_if_block_start,
      sym_condition_block_end,
      sym_item_block_start,
      aux_sym_custom_item_block_token1,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [326] = 3,
    ACTIONS(64), 1,
      aux_sym_generic_tag_value_pair_token1,
    ACTIONS(67), 2,
      sym_item_block_end,
      aux_sym_custom_item_block_token2,
    STATE(19), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [338] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__check_type_start,
    STATE(20), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [349] = 3,
    ACTIONS(74), 1,
      aux_sym_generic_tag_value_pair_token1,
    ACTIONS(76), 1,
      aux_sym_custom_item_block_token2,
    STATE(19), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [360] = 4,
    ACTIONS(78), 1,
      sym_else_block_start,
    ACTIONS(80), 1,
      aux_sym_if_block_end_token1,
    STATE(10), 1,
      sym_if_block_end,
    STATE(39), 1,
      sym_else_block,
  [373] = 3,
    ACTIONS(74), 1,
      aux_sym_generic_tag_value_pair_token1,
    ACTIONS(82), 1,
      sym_item_block_end,
    STATE(19), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [384] = 3,
    ACTIONS(3), 1,
      sym__check_type_start,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [395] = 3,
    ACTIONS(74), 1,
      aux_sym_generic_tag_value_pair_token1,
    STATE(47), 1,
      sym_item_contents,
    STATE(23), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [406] = 1,
    ACTIONS(86), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      aux_sym_custom_item_block_token2,
  [412] = 1,
    ACTIONS(88), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      aux_sym_custom_item_block_token2,
  [418] = 1,
    ACTIONS(90), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      aux_sym_custom_item_block_token2,
  [424] = 1,
    ACTIONS(92), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      aux_sym_custom_item_block_token2,
  [430] = 2,
    ACTIONS(74), 1,
      aux_sym_generic_tag_value_pair_token1,
    STATE(21), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [438] = 3,
    ACTIONS(94), 1,
      aux_sym_condition_block_start_token1,
    STATE(5), 1,
      sym_condition_block_start,
    STATE(36), 1,
      sym_condition_block,
  [448] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [453] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [458] = 1,
    ACTIONS(100), 2,
      sym_value_data_dword,
      aux_sym_value_data_range_token4,
  [463] = 1,
    ACTIONS(102), 2,
      sym_value_data_dword,
      aux_sym_value_data_range_token2,
  [468] = 2,
    ACTIONS(104), 1,
      sym_then_block_start,
    STATE(22), 1,
      sym_then_block,
  [475] = 1,
    ACTIONS(106), 2,
      aux_sym_condition_block_start_token2,
      aux_sym_condition_block_start_token3,
  [480] = 1,
    ACTIONS(108), 2,
      sym_else_block_start,
      aux_sym_if_block_end_token1,
  [485] = 2,
    ACTIONS(80), 1,
      aux_sym_if_block_end_token1,
    STATE(9), 1,
      sym_if_block_end,
  [492] = 1,
    ACTIONS(110), 1,
      aux_sym_double_quoted_string_token2,
  [496] = 1,
    ACTIONS(112), 1,
      sym_then_block_start,
  [500] = 1,
    ACTIONS(114), 1,
      aux_sym_double_quoted_string_token1,
  [504] = 1,
    ACTIONS(116), 1,
      aux_sym_value_data_range_token3,
  [508] = 1,
    ACTIONS(118), 1,
      aux_sym_condition_block_start_token4,
  [512] = 1,
    ACTIONS(120), 1,
      sym_else_block_end,
  [516] = 1,
    ACTIONS(122), 1,
      sym_then_block_end,
  [520] = 1,
    ACTIONS(124), 1,
      sym_item_block_end,
  [524] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [528] = 1,
    ACTIONS(128), 1,
      aux_sym_if_block_end_token1,
  [532] = 1,
    ACTIONS(130), 1,
      aux_sym_value_data_range_token5,
  [536] = 1,
    ACTIONS(132), 1,
      sym_then_block_start,
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
  [SMALL_STATE(18)] = 317,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 338,
  [SMALL_STATE(21)] = 349,
  [SMALL_STATE(22)] = 360,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 412,
  [SMALL_STATE(28)] = 418,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 438,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 453,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 463,
  [SMALL_STATE(36)] = 468,
  [SMALL_STATE(37)] = 475,
  [SMALL_STATE(38)] = 480,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 492,
  [SMALL_STATE(41)] = 496,
  [SMALL_STATE(42)] = 500,
  [SMALL_STATE(43)] = 504,
  [SMALL_STATE(44)] = 508,
  [SMALL_STATE(45)] = 512,
  [SMALL_STATE(46)] = 516,
  [SMALL_STATE(47)] = 520,
  [SMALL_STATE(48)] = 524,
  [SMALL_STATE(49)] = 528,
  [SMALL_STATE(50)] = 532,
  [SMALL_STATE(51)] = 536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(31),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(25),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(30),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(13),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block_end, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_item_block, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_block, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contents, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block_start, 3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_contents_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_contents_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_contents, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_data_range, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value_pair, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 2),
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
