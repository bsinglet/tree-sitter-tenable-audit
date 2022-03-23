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
  sym_value_data_min = 20,
  sym_value_data_max = 21,
  aux_sym_value_data_range_token1 = 22,
  aux_sym_value_data_range_token2 = 23,
  aux_sym_value_data_range_token3 = 24,
  sym_unquoted_keyword = 25,
  sym_item_block_end = 26,
  sym_custom_item_block_start = 27,
  sym_custom_item_block_end = 28,
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
  [sym_value_data_min] = "value_data_min",
  [sym_value_data_max] = "value_data_max",
  [aux_sym_value_data_range_token1] = "value_data_range_token1",
  [aux_sym_value_data_range_token2] = "value_data_range_token2",
  [aux_sym_value_data_range_token3] = "value_data_range_token3",
  [sym_unquoted_keyword] = "unquoted_keyword",
  [sym_item_block_end] = "item_block_end",
  [sym_custom_item_block_start] = "custom_item_block_start",
  [sym_custom_item_block_end] = "custom_item_block_end",
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
  [sym_value_data_min] = sym_value_data_min,
  [sym_value_data_max] = sym_value_data_max,
  [aux_sym_value_data_range_token1] = aux_sym_value_data_range_token1,
  [aux_sym_value_data_range_token2] = aux_sym_value_data_range_token2,
  [aux_sym_value_data_range_token3] = aux_sym_value_data_range_token3,
  [sym_unquoted_keyword] = sym_unquoted_keyword,
  [sym_item_block_end] = sym_item_block_end,
  [sym_custom_item_block_start] = sym_custom_item_block_start,
  [sym_custom_item_block_end] = sym_custom_item_block_end,
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
  [sym_value_data_min] = {
    .visible = true,
    .named = true,
  },
  [sym_value_data_max] = {
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
  [sym_unquoted_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_item_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_item_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_item_block_end] = {
    .visible = true,
    .named = true,
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

static inline bool aux_sym_double_quoted_string_token2_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '$'
      ? (c < ' '
        ? (c >= '\t' && c <= '\n')
        : c <= '!')
      : (c <= '$' || (c >= '(' && c <= '*')))
    : (c <= '-' || (c < 'A'
      ? (c < '?'
        ? (c >= '0' && c <= '9')
        : c <= '?')
      : (c <= '^' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == '[') ADVANCE(170);
      if (lookahead == ']') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '[') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '<') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(153);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(177);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(166);
      END_STATE();
    case 37:
      if (lookahead == 'W') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'X') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      if (aux_sym_double_quoted_string_token2_character_set_1(lookahead)) ADVANCE(147);
      if (lookahead == '\r') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__check_type_start);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__check_type_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_if_block_start);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token3);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_condition_block_start_token4);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_condition_block_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_then_block_start);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_then_block_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_else_block_start);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_else_block_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_if_block_end_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_item_block_start);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_generic_tag_value_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_value_data_min);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_value_data_min);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_value_data_max);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_value_data_max);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_value_data_range_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_value_data_range_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_value_data_range_token3);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'I') ADVANCE(174);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (lookahead == 'N') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (lookahead == 'X') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_item_block_end);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_custom_item_block_start);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_custom_item_block_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_acl_block_token1);
      END_STATE();
    case 181:
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
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 146},
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
    [sym_value_data_min] = ACTIONS(1),
    [sym_value_data_max] = ACTIONS(1),
    [aux_sym_value_data_range_token1] = ACTIONS(1),
    [aux_sym_value_data_range_token2] = ACTIONS(1),
    [aux_sym_value_data_range_token3] = ACTIONS(1),
    [sym_unquoted_keyword] = ACTIONS(1),
    [sym_item_block_end] = ACTIONS(1),
    [sym_custom_item_block_start] = ACTIONS(1),
    [sym_custom_item_block_end] = ACTIONS(1),
    [aux_sym_acl_block_token1] = ACTIONS(1),
    [aux_sym_report_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__check_type_block] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
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
      sym_custom_item_block_start,
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
    STATE(11), 5,
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
      sym_custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(6), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(11), 5,
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
      sym_custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(34), 1,
      sym_condition_block_end,
    STATE(2), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(11), 5,
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
      sym_custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(36), 1,
      sym_condition_block_end,
    STATE(4), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(11), 5,
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
      sym_custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(38), 1,
      sym__check_type_end,
    STATE(2), 2,
      sym_contents,
      aux_sym__check_type_block_repeat1,
    STATE(11), 5,
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
      sym_custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(39), 1,
      sym_contents,
    STATE(11), 5,
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
      sym_custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(45), 1,
      sym_contents,
    STATE(11), 5,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
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
      sym_custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [326] = 3,
    ACTIONS(64), 1,
      aux_sym_generic_tag_value_pair_token1,
    ACTIONS(67), 2,
      sym_item_block_end,
      sym_custom_item_block_end,
    STATE(19), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [338] = 3,
    ACTIONS(69), 1,
      aux_sym_generic_tag_value_pair_token1,
    ACTIONS(71), 2,
      sym_item_block_end,
      sym_custom_item_block_end,
    STATE(19), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [350] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym__check_type_start,
    STATE(21), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [361] = 4,
    ACTIONS(78), 1,
      sym_else_block_start,
    ACTIONS(80), 1,
      aux_sym_if_block_end_token1,
    STATE(16), 1,
      sym_if_block_end,
    STATE(31), 1,
      sym_else_block,
  [374] = 3,
    ACTIONS(3), 1,
      sym__check_type_start,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [385] = 3,
    ACTIONS(69), 1,
      aux_sym_generic_tag_value_pair_token1,
    STATE(44), 1,
      sym_item_contents,
    STATE(20), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [396] = 3,
    ACTIONS(69), 1,
      aux_sym_generic_tag_value_pair_token1,
    STATE(46), 1,
      sym_item_contents,
    STATE(20), 2,
      sym_generic_tag_value_pair,
      aux_sym_item_contents_repeat1,
  [407] = 1,
    ACTIONS(84), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      sym_custom_item_block_end,
  [413] = 1,
    ACTIONS(86), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      sym_custom_item_block_end,
  [419] = 1,
    ACTIONS(88), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      sym_custom_item_block_end,
  [425] = 1,
    ACTIONS(90), 3,
      aux_sym_generic_tag_value_pair_token1,
      sym_item_block_end,
      sym_custom_item_block_end,
  [431] = 3,
    ACTIONS(92), 1,
      aux_sym_condition_block_start_token1,
    STATE(5), 1,
      sym_condition_block_start,
    STATE(36), 1,
      sym_condition_block,
  [441] = 2,
    ACTIONS(80), 1,
      aux_sym_if_block_end_token1,
    STATE(12), 1,
      sym_if_block_end,
  [448] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [453] = 1,
    ACTIONS(96), 2,
      sym_value_data_dword,
      sym_value_data_max,
  [458] = 1,
    ACTIONS(98), 2,
      sym_value_data_dword,
      sym_value_data_min,
  [463] = 1,
    ACTIONS(100), 2,
      sym_else_block_start,
      aux_sym_if_block_end_token1,
  [468] = 2,
    ACTIONS(102), 1,
      sym_then_block_start,
    STATE(22), 1,
      sym_then_block,
  [475] = 1,
    ACTIONS(104), 2,
      aux_sym_condition_block_start_token2,
      aux_sym_condition_block_start_token3,
  [480] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [485] = 1,
    ACTIONS(108), 1,
      sym_then_block_end,
  [489] = 1,
    ACTIONS(110), 1,
      aux_sym_condition_block_start_token4,
  [493] = 1,
    ACTIONS(112), 1,
      sym_then_block_start,
  [497] = 1,
    ACTIONS(114), 1,
      aux_sym_double_quoted_string_token1,
  [501] = 1,
    ACTIONS(116), 1,
      aux_sym_value_data_range_token2,
  [505] = 1,
    ACTIONS(118), 1,
      sym_custom_item_block_end,
  [509] = 1,
    ACTIONS(120), 1,
      sym_else_block_end,
  [513] = 1,
    ACTIONS(122), 1,
      sym_item_block_end,
  [517] = 1,
    ACTIONS(124), 1,
      aux_sym_double_quoted_string_token2,
  [521] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [525] = 1,
    ACTIONS(128), 1,
      aux_sym_if_block_end_token1,
  [529] = 1,
    ACTIONS(130), 1,
      aux_sym_value_data_range_token3,
  [533] = 1,
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
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 374,
  [SMALL_STATE(24)] = 385,
  [SMALL_STATE(25)] = 396,
  [SMALL_STATE(26)] = 407,
  [SMALL_STATE(27)] = 413,
  [SMALL_STATE(28)] = 419,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 431,
  [SMALL_STATE(31)] = 441,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 453,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 463,
  [SMALL_STATE(36)] = 468,
  [SMALL_STATE(37)] = 475,
  [SMALL_STATE(38)] = 480,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 489,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 501,
  [SMALL_STATE(44)] = 505,
  [SMALL_STATE(45)] = 509,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 517,
  [SMALL_STATE(48)] = 521,
  [SMALL_STATE(49)] = 525,
  [SMALL_STATE(50)] = 529,
  [SMALL_STATE(51)] = 533,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(30),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(25),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(24),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(10),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_block, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contents, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_item_block, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_block, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block_end, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block_start, 3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_contents_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_contents_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_contents, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_data_range, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value_pair, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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

extern const TSLanguage *tree_sitter_treeSitterTenableAudit(void) {
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
