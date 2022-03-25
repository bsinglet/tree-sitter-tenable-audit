#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_double_quoted_string_token1 = 1,
  aux_sym_double_quoted_string_token2 = 2,
  aux_sym_double_quoted_string_token3 = 3,
  sym__check_type_start = 4,
  sym__check_type_end = 5,
  sym_single_line_comment = 6,
  sym__if_block_start = 7,
  aux_sym__condition_block_start_token1 = 8,
  aux_sym__condition_block_start_token2 = 9,
  aux_sym__condition_block_start_token3 = 10,
  aux_sym__condition_block_start_token4 = 11,
  sym__condition_block_end = 12,
  sym__then_block_start = 13,
  sym__then_block_end = 14,
  sym_else_block_start = 15,
  sym_else_block_end = 16,
  aux_sym__if_block_end_token1 = 17,
  sym__item_block_start = 18,
  sym_generic_tag_key = 19,
  sym_value_data_dword = 20,
  sym_value_data_min = 21,
  sym_value_data_max = 22,
  aux_sym_value_data_range_token1 = 23,
  aux_sym_value_data_range_token2 = 24,
  aux_sym_value_data_range_token3 = 25,
  sym_unquoted_keyword = 26,
  sym__item_block_end = 27,
  sym__custom_item_block_start = 28,
  sym__custom_item_block_end = 29,
  aux_sym_acl_block_token1 = 30,
  aux_sym_report_token1 = 31,
  sym_source_file = 32,
  sym_double_quoted_string = 33,
  sym__check_type_block = 34,
  sym__contents = 35,
  sym_if_block = 36,
  sym_condition_block = 37,
  sym__condition_block_start = 38,
  sym_then_block = 39,
  sym_else_block = 40,
  sym__if_block_end = 41,
  sym_item_block = 42,
  aux_sym__item_contents = 43,
  sym_generic_tag_value_pair = 44,
  sym_generic_tag_value = 45,
  sym_value_data_range = 46,
  sym_custom_item_block = 47,
  sym_acl_block = 48,
  sym_report = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_double_quoted_string_repeat1 = 51,
  aux_sym__check_type_block_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_double_quoted_string_token2] = "double_quoted_string_token2",
  [aux_sym_double_quoted_string_token3] = "double_quoted_string_token3",
  [sym__check_type_start] = "_check_type_start",
  [sym__check_type_end] = "_check_type_end",
  [sym_single_line_comment] = "single_line_comment",
  [sym__if_block_start] = "_if_block_start",
  [aux_sym__condition_block_start_token1] = "_condition_block_start_token1",
  [aux_sym__condition_block_start_token2] = "_condition_block_start_token2",
  [aux_sym__condition_block_start_token3] = "_condition_block_start_token3",
  [aux_sym__condition_block_start_token4] = "_condition_block_start_token4",
  [sym__condition_block_end] = "_condition_block_end",
  [sym__then_block_start] = "_then_block_start",
  [sym__then_block_end] = "_then_block_end",
  [sym_else_block_start] = "else_block_start",
  [sym_else_block_end] = "else_block_end",
  [aux_sym__if_block_end_token1] = "_if_block_end_token1",
  [sym__item_block_start] = "_item_block_start",
  [sym_generic_tag_key] = "generic_tag_key",
  [sym_value_data_dword] = "value_data_dword",
  [sym_value_data_min] = "value_data_min",
  [sym_value_data_max] = "value_data_max",
  [aux_sym_value_data_range_token1] = "value_data_range_token1",
  [aux_sym_value_data_range_token2] = "value_data_range_token2",
  [aux_sym_value_data_range_token3] = "value_data_range_token3",
  [sym_unquoted_keyword] = "unquoted_keyword",
  [sym__item_block_end] = "_item_block_end",
  [sym__custom_item_block_start] = "_custom_item_block_start",
  [sym__custom_item_block_end] = "_custom_item_block_end",
  [aux_sym_acl_block_token1] = "acl_block_token1",
  [aux_sym_report_token1] = "report_token1",
  [sym_source_file] = "source_file",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym__check_type_block] = "_check_type_block",
  [sym__contents] = "_contents",
  [sym_if_block] = "if_block",
  [sym_condition_block] = "condition_block",
  [sym__condition_block_start] = "_condition_block_start",
  [sym_then_block] = "then_block",
  [sym_else_block] = "else_block",
  [sym__if_block_end] = "_if_block_end",
  [sym_item_block] = "item_block",
  [aux_sym__item_contents] = "_item_contents",
  [sym_generic_tag_value_pair] = "generic_tag_value_pair",
  [sym_generic_tag_value] = "generic_tag_value",
  [sym_value_data_range] = "value_data_range",
  [sym_custom_item_block] = "custom_item_block",
  [sym_acl_block] = "acl_block",
  [sym_report] = "report",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym__check_type_block_repeat1] = "_check_type_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_double_quoted_string_token2] = aux_sym_double_quoted_string_token2,
  [aux_sym_double_quoted_string_token3] = aux_sym_double_quoted_string_token3,
  [sym__check_type_start] = sym__check_type_start,
  [sym__check_type_end] = sym__check_type_end,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym__if_block_start] = sym__if_block_start,
  [aux_sym__condition_block_start_token1] = aux_sym__condition_block_start_token1,
  [aux_sym__condition_block_start_token2] = aux_sym__condition_block_start_token2,
  [aux_sym__condition_block_start_token3] = aux_sym__condition_block_start_token3,
  [aux_sym__condition_block_start_token4] = aux_sym__condition_block_start_token4,
  [sym__condition_block_end] = sym__condition_block_end,
  [sym__then_block_start] = sym__then_block_start,
  [sym__then_block_end] = sym__then_block_end,
  [sym_else_block_start] = sym_else_block_start,
  [sym_else_block_end] = sym_else_block_end,
  [aux_sym__if_block_end_token1] = aux_sym__if_block_end_token1,
  [sym__item_block_start] = sym__item_block_start,
  [sym_generic_tag_key] = sym_generic_tag_key,
  [sym_value_data_dword] = sym_value_data_dword,
  [sym_value_data_min] = sym_value_data_min,
  [sym_value_data_max] = sym_value_data_max,
  [aux_sym_value_data_range_token1] = aux_sym_value_data_range_token1,
  [aux_sym_value_data_range_token2] = aux_sym_value_data_range_token2,
  [aux_sym_value_data_range_token3] = aux_sym_value_data_range_token3,
  [sym_unquoted_keyword] = sym_unquoted_keyword,
  [sym__item_block_end] = sym__item_block_end,
  [sym__custom_item_block_start] = sym__custom_item_block_start,
  [sym__custom_item_block_end] = sym__custom_item_block_end,
  [aux_sym_acl_block_token1] = aux_sym_acl_block_token1,
  [aux_sym_report_token1] = aux_sym_report_token1,
  [sym_source_file] = sym_source_file,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym__check_type_block] = sym__check_type_block,
  [sym__contents] = sym__contents,
  [sym_if_block] = sym_if_block,
  [sym_condition_block] = sym_condition_block,
  [sym__condition_block_start] = sym__condition_block_start,
  [sym_then_block] = sym_then_block,
  [sym_else_block] = sym_else_block,
  [sym__if_block_end] = sym__if_block_end,
  [sym_item_block] = sym_item_block,
  [aux_sym__item_contents] = aux_sym__item_contents,
  [sym_generic_tag_value_pair] = sym_generic_tag_value_pair,
  [sym_generic_tag_value] = sym_generic_tag_value,
  [sym_value_data_range] = sym_value_data_range,
  [sym_custom_item_block] = sym_custom_item_block,
  [sym_acl_block] = sym_acl_block,
  [sym_report] = sym_report,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym__check_type_block_repeat1] = aux_sym__check_type_block_repeat1,
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
  [aux_sym_double_quoted_string_token3] = {
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
  [sym__if_block_start] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__condition_block_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_block_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_block_start_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_block_start_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__condition_block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__then_block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__then_block_end] = {
    .visible = false,
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
  [aux_sym__if_block_end_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__item_block_start] = {
    .visible = false,
    .named = true,
  },
  [sym_generic_tag_key] = {
    .visible = true,
    .named = true,
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
  [sym__item_block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_item_block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_item_block_end] = {
    .visible = false,
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
  [sym__contents] = {
    .visible = false,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_block] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_block_start] = {
    .visible = false,
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
  [sym__if_block_end] = {
    .visible = false,
    .named = true,
  },
  [sym_item_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__item_contents] = {
    .visible = false,
    .named = false,
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
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__check_type_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_double_quoted_string_token2_character_set_1(int32_t c) {
  return (c < '?'
    ? (c < '('
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '*' || (c < '0'
        ? c == '-'
        : c <= '9')))
    : (c <= '?' || (c < '^'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      if (aux_sym_double_quoted_string_token2_character_set_1(lookahead)) ADVANCE(147);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '[') ADVANCE(169);
      if (lookahead == ']') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '<') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(155);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(176);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(177);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(174);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(167);
      END_STATE();
    case 38:
      if (lookahead == 'W') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'X') ADVANCE(168);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == 'v') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'w') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token3);
      if (lookahead == '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__check_type_start);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__check_type_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__if_block_start);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token3);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token4);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__condition_block_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__then_block_start);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__then_block_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_else_block_start);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_else_block_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__if_block_end_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__item_block_start);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_generic_tag_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_value_data_min);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_value_data_max);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_value_data_range_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_value_data_range_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_value_data_range_token3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__item_block_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__custom_item_block_start);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__custom_item_block_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_acl_block_token1);
      END_STATE();
    case 177:
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
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_double_quoted_string_token1] = ACTIONS(1),
    [aux_sym_double_quoted_string_token2] = ACTIONS(1),
    [sym__check_type_start] = ACTIONS(1),
    [sym__check_type_end] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym__if_block_start] = ACTIONS(1),
    [aux_sym__condition_block_start_token1] = ACTIONS(1),
    [aux_sym__condition_block_start_token4] = ACTIONS(1),
    [sym__condition_block_end] = ACTIONS(1),
    [sym__then_block_start] = ACTIONS(1),
    [sym__then_block_end] = ACTIONS(1),
    [sym_else_block_start] = ACTIONS(1),
    [sym_else_block_end] = ACTIONS(1),
    [aux_sym__if_block_end_token1] = ACTIONS(1),
    [sym__item_block_start] = ACTIONS(1),
    [aux_sym_value_data_range_token1] = ACTIONS(1),
    [aux_sym_value_data_range_token2] = ACTIONS(1),
    [aux_sym_value_data_range_token3] = ACTIONS(1),
    [sym__item_block_end] = ACTIONS(1),
    [sym__custom_item_block_start] = ACTIONS(1),
    [sym__custom_item_block_end] = ACTIONS(1),
    [aux_sym_acl_block_token1] = ACTIONS(1),
    [aux_sym_report_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__check_type_block] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [sym__check_type_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym__if_block_start,
    ACTIONS(10), 1,
      sym__item_block_start,
    ACTIONS(13), 1,
      sym__custom_item_block_start,
    ACTIONS(16), 1,
      aux_sym_acl_block_token1,
    ACTIONS(19), 1,
      aux_sym_report_token1,
    ACTIONS(5), 2,
      sym__check_type_end,
      sym__condition_block_end,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
      aux_sym__check_type_block_repeat1,
  [29] = 7,
    ACTIONS(22), 1,
      sym__check_type_end,
    ACTIONS(24), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(4), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
      aux_sym__check_type_block_repeat1,
  [57] = 7,
    ACTIONS(24), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(34), 1,
      sym__check_type_end,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
      aux_sym__check_type_block_repeat1,
  [85] = 7,
    ACTIONS(24), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(36), 1,
      sym__condition_block_end,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
      aux_sym__check_type_block_repeat1,
  [113] = 7,
    ACTIONS(24), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    ACTIONS(38), 1,
      sym__condition_block_end,
    STATE(5), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
      aux_sym__check_type_block_repeat1,
  [141] = 6,
    ACTIONS(24), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(46), 6,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [165] = 6,
    ACTIONS(24), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym_report_token1,
    STATE(42), 6,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report,
  [189] = 1,
    ACTIONS(40), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym_else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [201] = 1,
    ACTIONS(42), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym_else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [213] = 1,
    ACTIONS(44), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym_else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [225] = 1,
    ACTIONS(46), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym_else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [237] = 1,
    ACTIONS(48), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym_else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [249] = 1,
    ACTIONS(50), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym_else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [261] = 5,
    ACTIONS(52), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(56), 1,
      aux_sym_value_data_range_token1,
    STATE(29), 1,
      sym_generic_tag_value,
    ACTIONS(54), 2,
      sym_value_data_dword,
      sym_unquoted_keyword,
    STATE(31), 2,
      sym_double_quoted_string,
      sym_value_data_range,
  [279] = 1,
    ACTIONS(58), 6,
      sym__if_block_start,
      sym__condition_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym_report_token1,
  [288] = 3,
    ACTIONS(60), 1,
      sym_generic_tag_key,
    ACTIONS(63), 2,
      sym__item_block_end,
      sym__custom_item_block_end,
    STATE(17), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [300] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym__check_type_start,
    STATE(18), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [311] = 4,
    ACTIONS(70), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(72), 1,
      aux_sym_double_quoted_string_token2,
    ACTIONS(74), 1,
      aux_sym_double_quoted_string_token3,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
  [324] = 3,
    ACTIONS(76), 1,
      sym_generic_tag_key,
    ACTIONS(78), 1,
      sym__custom_item_block_end,
    STATE(17), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [335] = 4,
    ACTIONS(80), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(82), 1,
      aux_sym_double_quoted_string_token2,
    ACTIONS(85), 1,
      aux_sym_double_quoted_string_token3,
    STATE(21), 1,
      aux_sym_double_quoted_string_repeat1,
  [348] = 3,
    ACTIONS(3), 1,
      sym__check_type_start,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [359] = 4,
    ACTIONS(90), 1,
      sym_else_block_start,
    ACTIONS(92), 1,
      aux_sym__if_block_end_token1,
    STATE(10), 1,
      sym__if_block_end,
    STATE(35), 1,
      sym_else_block,
  [372] = 4,
    ACTIONS(94), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(96), 1,
      aux_sym_double_quoted_string_token2,
    ACTIONS(98), 1,
      aux_sym_double_quoted_string_token3,
    STATE(21), 1,
      aux_sym_double_quoted_string_repeat1,
  [385] = 3,
    ACTIONS(76), 1,
      sym_generic_tag_key,
    ACTIONS(100), 1,
      sym__item_block_end,
    STATE(17), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [396] = 3,
    ACTIONS(102), 1,
      aux_sym__condition_block_start_token1,
    STATE(6), 1,
      sym__condition_block_start,
    STATE(39), 1,
      sym_condition_block,
  [406] = 1,
    ACTIONS(104), 3,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
  [412] = 1,
    ACTIONS(106), 3,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
  [418] = 1,
    ACTIONS(108), 3,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
  [424] = 1,
    ACTIONS(110), 3,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
  [430] = 1,
    ACTIONS(112), 3,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
  [436] = 2,
    ACTIONS(76), 1,
      sym_generic_tag_key,
    STATE(20), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [444] = 2,
    ACTIONS(76), 1,
      sym_generic_tag_key,
    STATE(25), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [452] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [457] = 2,
    ACTIONS(116), 1,
      aux_sym__if_block_end_token1,
    STATE(9), 1,
      sym__if_block_end,
  [464] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [469] = 1,
    ACTIONS(120), 2,
      aux_sym__condition_block_start_token2,
      aux_sym__condition_block_start_token3,
  [474] = 1,
    ACTIONS(122), 2,
      sym_else_block_start,
      aux_sym__if_block_end_token1,
  [479] = 2,
    ACTIONS(124), 1,
      sym__then_block_start,
    STATE(23), 1,
      sym_then_block,
  [486] = 1,
    ACTIONS(126), 2,
      sym_value_data_dword,
      sym_value_data_max,
  [491] = 1,
    ACTIONS(128), 2,
      sym_value_data_dword,
      sym_value_data_min,
  [496] = 1,
    ACTIONS(130), 1,
      sym__then_block_end,
  [500] = 1,
    ACTIONS(132), 1,
      sym__then_block_start,
  [504] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [508] = 1,
    ACTIONS(136), 1,
      aux_sym_value_data_range_token2,
  [512] = 1,
    ACTIONS(138), 1,
      sym_else_block_end,
  [516] = 1,
    ACTIONS(140), 1,
      sym__then_block_start,
  [520] = 1,
    ACTIONS(142), 1,
      aux_sym__condition_block_start_token4,
  [524] = 1,
    ACTIONS(144), 1,
      aux_sym__if_block_end_token1,
  [528] = 1,
    ACTIONS(146), 1,
      aux_sym_value_data_range_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 225,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 359,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 396,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 412,
  [SMALL_STATE(29)] = 418,
  [SMALL_STATE(30)] = 424,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 436,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 452,
  [SMALL_STATE(35)] = 457,
  [SMALL_STATE(36)] = 464,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 474,
  [SMALL_STATE(39)] = 479,
  [SMALL_STATE(40)] = 486,
  [SMALL_STATE(41)] = 491,
  [SMALL_STATE(42)] = 496,
  [SMALL_STATE(43)] = 500,
  [SMALL_STATE(44)] = 504,
  [SMALL_STATE(45)] = 508,
  [SMALL_STATE(46)] = 512,
  [SMALL_STATE(47)] = 516,
  [SMALL_STATE(48)] = 520,
  [SMALL_STATE(49)] = 524,
  [SMALL_STATE(50)] = 528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(26),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(33),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(32),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(13),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_item_block, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_block, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_block, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_block_start, 3),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__item_contents, 2), SHIFT_REPEAT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_contents, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_data_range, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value_pair, 2, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 3),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tenableAudit(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
