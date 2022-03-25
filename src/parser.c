#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  sym__if_block_start = 6,
  aux_sym__condition_block_start_token1 = 7,
  aux_sym__condition_block_start_token2 = 8,
  aux_sym__condition_block_start_token3 = 9,
  aux_sym__condition_block_start_token4 = 10,
  aux_sym__condition_block_start_token5 = 11,
  aux_sym__condition_block_start_token6 = 12,
  sym__condition_block_end = 13,
  sym__then_block_start = 14,
  sym__then_block_end = 15,
  sym__else_block_start = 16,
  sym__else_block_end = 17,
  aux_sym__if_block_end_token1 = 18,
  sym__item_block_start = 19,
  sym_generic_tag_key = 20,
  aux_sym__generic_tag_value_token1 = 21,
  sym_value_data_dword = 22,
  sym_value_data_min = 23,
  sym_value_data_max = 24,
  aux_sym_value_data_range_token1 = 25,
  aux_sym_value_data_range_token2 = 26,
  aux_sym_value_data_range_token3 = 27,
  sym_unquoted_keyword = 28,
  sym__item_block_end = 29,
  sym__custom_item_block_start = 30,
  sym__custom_item_block_end = 31,
  aux_sym_acl_block_token1 = 32,
  aux_sym__report_block_start_token1 = 33,
  aux_sym__report_block_start_token2 = 34,
  sym__report_block_end = 35,
  sym_source_file = 36,
  sym_double_quoted_string = 37,
  sym__check_type_block = 38,
  sym__contents = 39,
  sym_if_block = 40,
  sym_condition_block = 41,
  sym__condition_block_start = 42,
  sym_then_block = 43,
  sym_else_block = 44,
  sym__if_block_end = 45,
  sym_item_block = 46,
  aux_sym__item_contents = 47,
  sym_generic_tag_value_pair = 48,
  sym__generic_tag_value = 49,
  sym_value_data_range = 50,
  sym_custom_item_block = 51,
  sym_acl_block = 52,
  sym_report_block = 53,
  sym__report_block_start = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_double_quoted_string_repeat1 = 56,
  aux_sym__check_type_block_repeat1 = 57,
  aux_sym__generic_tag_value_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_double_quoted_string_token2] = "double_quoted_string_token2",
  [aux_sym_double_quoted_string_token3] = "double_quoted_string_token3",
  [sym__check_type_start] = "_check_type_start",
  [sym__check_type_end] = "_check_type_end",
  [sym__if_block_start] = "_if_block_start",
  [aux_sym__condition_block_start_token1] = "_condition_block_start_token1",
  [aux_sym__condition_block_start_token2] = "_condition_block_start_token2",
  [aux_sym__condition_block_start_token3] = "_condition_block_start_token3",
  [aux_sym__condition_block_start_token4] = "_condition_block_start_token4",
  [aux_sym__condition_block_start_token5] = "_condition_block_start_token5",
  [aux_sym__condition_block_start_token6] = "_condition_block_start_token6",
  [sym__condition_block_end] = "_condition_block_end",
  [sym__then_block_start] = "_then_block_start",
  [sym__then_block_end] = "_then_block_end",
  [sym__else_block_start] = "_else_block_start",
  [sym__else_block_end] = "_else_block_end",
  [aux_sym__if_block_end_token1] = "_if_block_end_token1",
  [sym__item_block_start] = "_item_block_start",
  [sym_generic_tag_key] = "generic_tag_key",
  [aux_sym__generic_tag_value_token1] = "_generic_tag_value_token1",
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
  [aux_sym__report_block_start_token1] = "_report_block_start_token1",
  [aux_sym__report_block_start_token2] = "_report_block_start_token2",
  [sym__report_block_end] = "_report_block_end",
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
  [sym__generic_tag_value] = "_generic_tag_value",
  [sym_value_data_range] = "value_data_range",
  [sym_custom_item_block] = "custom_item_block",
  [sym_acl_block] = "acl_block",
  [sym_report_block] = "report_block",
  [sym__report_block_start] = "_report_block_start",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym__check_type_block_repeat1] = "_check_type_block_repeat1",
  [aux_sym__generic_tag_value_repeat1] = "_generic_tag_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_double_quoted_string_token2] = aux_sym_double_quoted_string_token2,
  [aux_sym_double_quoted_string_token3] = aux_sym_double_quoted_string_token3,
  [sym__check_type_start] = sym__check_type_start,
  [sym__check_type_end] = sym__check_type_end,
  [sym__if_block_start] = sym__if_block_start,
  [aux_sym__condition_block_start_token1] = aux_sym__condition_block_start_token1,
  [aux_sym__condition_block_start_token2] = aux_sym__condition_block_start_token2,
  [aux_sym__condition_block_start_token3] = aux_sym__condition_block_start_token3,
  [aux_sym__condition_block_start_token4] = aux_sym__condition_block_start_token4,
  [aux_sym__condition_block_start_token5] = aux_sym__condition_block_start_token5,
  [aux_sym__condition_block_start_token6] = aux_sym__condition_block_start_token6,
  [sym__condition_block_end] = sym__condition_block_end,
  [sym__then_block_start] = sym__then_block_start,
  [sym__then_block_end] = sym__then_block_end,
  [sym__else_block_start] = sym__else_block_start,
  [sym__else_block_end] = sym__else_block_end,
  [aux_sym__if_block_end_token1] = aux_sym__if_block_end_token1,
  [sym__item_block_start] = sym__item_block_start,
  [sym_generic_tag_key] = sym_generic_tag_key,
  [aux_sym__generic_tag_value_token1] = aux_sym__generic_tag_value_token1,
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
  [aux_sym__report_block_start_token1] = aux_sym__report_block_start_token1,
  [aux_sym__report_block_start_token2] = aux_sym__report_block_start_token2,
  [sym__report_block_end] = sym__report_block_end,
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
  [sym__generic_tag_value] = sym__generic_tag_value,
  [sym_value_data_range] = sym_value_data_range,
  [sym_custom_item_block] = sym_custom_item_block,
  [sym_acl_block] = sym_acl_block,
  [sym_report_block] = sym_report_block,
  [sym__report_block_start] = sym__report_block_start,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym__check_type_block_repeat1] = aux_sym__check_type_block_repeat1,
  [aux_sym__generic_tag_value_repeat1] = aux_sym__generic_tag_value_repeat1,
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
  [aux_sym__condition_block_start_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_block_start_token6] = {
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
  [sym__else_block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__else_block_end] = {
    .visible = false,
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
  [aux_sym__generic_tag_value_token1] = {
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
  [aux_sym__report_block_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__report_block_start_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__report_block_end] = {
    .visible = false,
    .named = true,
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
  [sym__generic_tag_value] = {
    .visible = false,
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
  [sym_report_block] = {
    .visible = true,
    .named = true,
  },
  [sym__report_block_start] = {
    .visible = false,
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
  [aux_sym__generic_tag_value_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '=') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '}')) ADVANCE(162);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}')) ADVANCE(162);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '>') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(168);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(171);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(170);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(181);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(187);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(176);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(174);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(177);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(196);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(192);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'W') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'X') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(139);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 95:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == ']') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token3);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__check_type_start);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__check_type_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__if_block_start);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token3);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token4);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token5);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__condition_block_start_token6);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__condition_block_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__then_block_start);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__then_block_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__else_block_start);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__else_block_end);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__if_block_end_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__item_block_start);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_generic_tag_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__generic_tag_value_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_value_data_dword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_value_data_min);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_value_data_max);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_value_data_range_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_value_data_range_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_value_data_range_token3);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_unquoted_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__item_block_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__custom_item_block_start);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__custom_item_block_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_acl_block_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__report_block_start_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__report_block_start_token2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__report_block_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 159},
  [2] = {.lex_state = 159},
  [3] = {.lex_state = 159},
  [4] = {.lex_state = 159},
  [5] = {.lex_state = 159},
  [6] = {.lex_state = 159},
  [7] = {.lex_state = 159},
  [8] = {.lex_state = 159},
  [9] = {.lex_state = 159},
  [10] = {.lex_state = 159},
  [11] = {.lex_state = 159},
  [12] = {.lex_state = 159},
  [13] = {.lex_state = 159},
  [14] = {.lex_state = 159},
  [15] = {.lex_state = 159},
  [16] = {.lex_state = 159},
  [17] = {.lex_state = 159},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 159},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 159},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 159},
  [33] = {.lex_state = 159},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 159},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 159},
  [44] = {.lex_state = 159},
  [45] = {.lex_state = 159},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 159},
  [48] = {.lex_state = 159},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 159},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 159},
  [56] = {.lex_state = 159},
  [57] = {.lex_state = 159},
  [58] = {.lex_state = 159},
  [59] = {.lex_state = 159},
  [60] = {.lex_state = 159},
  [61] = {.lex_state = 159},
  [62] = {.lex_state = 159},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_double_quoted_string_token1] = ACTIONS(1),
    [aux_sym_double_quoted_string_token2] = ACTIONS(1),
    [aux_sym__condition_block_start_token6] = ACTIONS(1),
    [aux_sym_value_data_range_token1] = ACTIONS(1),
    [aux_sym_value_data_range_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__check_type_block] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym__check_type_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym__if_block_start,
    ACTIONS(10), 1,
      sym__item_block_start,
    ACTIONS(13), 1,
      sym__custom_item_block_start,
    ACTIONS(16), 1,
      aux_sym_acl_block_token1,
    ACTIONS(19), 1,
      aux_sym__report_block_start_token1,
    STATE(39), 1,
      sym__report_block_start,
    ACTIONS(5), 4,
      sym__check_type_end,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [34] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(24), 1,
      sym__else_block_end,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    STATE(39), 1,
      sym__report_block_start,
    STATE(7), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [65] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(34), 1,
      sym__check_type_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(10), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [96] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(36), 1,
      sym__condition_block_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [127] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(38), 1,
      sym__then_block_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(9), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [158] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(40), 1,
      sym__else_block_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [189] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(42), 1,
      sym__condition_block_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(5), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [220] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(44), 1,
      sym__then_block_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [251] = 8,
    ACTIONS(22), 1,
      sym__if_block_start,
    ACTIONS(26), 1,
      sym__item_block_start,
    ACTIONS(28), 1,
      sym__custom_item_block_start,
    ACTIONS(30), 1,
      aux_sym_acl_block_token1,
    ACTIONS(32), 1,
      aux_sym__report_block_start_token1,
    ACTIONS(46), 1,
      sym__check_type_end,
    STATE(39), 1,
      sym__report_block_start,
    STATE(2), 7,
      sym__contents,
      sym_if_block,
      sym_item_block,
      sym_custom_item_block,
      sym_acl_block,
      sym_report_block,
      aux_sym__check_type_block_repeat1,
  [282] = 1,
    ACTIONS(48), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [294] = 1,
    ACTIONS(50), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [306] = 1,
    ACTIONS(52), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [318] = 1,
    ACTIONS(54), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [330] = 1,
    ACTIONS(56), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [342] = 1,
    ACTIONS(58), 9,
      sym__check_type_end,
      sym__if_block_start,
      sym__condition_block_end,
      sym__then_block_end,
      sym__else_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [354] = 5,
    ACTIONS(60), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(64), 1,
      aux_sym_value_data_range_token1,
    STATE(23), 1,
      sym_double_quoted_string,
    ACTIONS(62), 2,
      sym_value_data_dword,
      sym_unquoted_keyword,
    STATE(26), 2,
      sym__generic_tag_value,
      sym_value_data_range,
  [372] = 1,
    ACTIONS(66), 6,
      aux_sym__condition_block_start_token6,
      sym_generic_tag_key,
      aux_sym__generic_tag_value_token1,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [381] = 3,
    ACTIONS(70), 1,
      aux_sym__generic_tag_value_token1,
    STATE(19), 1,
      aux_sym__generic_tag_value_repeat1,
    ACTIONS(68), 4,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [394] = 1,
    ACTIONS(73), 6,
      sym__if_block_start,
      sym__condition_block_end,
      sym__item_block_start,
      sym__custom_item_block_start,
      aux_sym_acl_block_token1,
      aux_sym__report_block_start_token1,
  [403] = 3,
    ACTIONS(75), 1,
      sym_generic_tag_key,
    STATE(21), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
    ACTIONS(78), 3,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [416] = 3,
    ACTIONS(82), 1,
      aux_sym__generic_tag_value_token1,
    STATE(19), 1,
      aux_sym__generic_tag_value_repeat1,
    ACTIONS(80), 4,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [429] = 3,
    ACTIONS(82), 1,
      aux_sym__generic_tag_value_token1,
    STATE(22), 1,
      aux_sym__generic_tag_value_repeat1,
    ACTIONS(84), 4,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [442] = 1,
    ACTIONS(86), 6,
      aux_sym__condition_block_start_token6,
      sym_generic_tag_key,
      aux_sym__generic_tag_value_token1,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [451] = 1,
    ACTIONS(68), 5,
      sym_generic_tag_key,
      aux_sym__generic_tag_value_token1,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [459] = 1,
    ACTIONS(88), 4,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [466] = 4,
    ACTIONS(90), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(92), 1,
      aux_sym_double_quoted_string_token2,
    ACTIONS(95), 1,
      aux_sym_double_quoted_string_token3,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
  [479] = 4,
    ACTIONS(98), 1,
      sym__else_block_start,
    ACTIONS(100), 1,
      aux_sym__if_block_end_token1,
    STATE(12), 1,
      sym__if_block_end,
    STATE(47), 1,
      sym_else_block,
  [492] = 1,
    ACTIONS(102), 4,
      sym_generic_tag_key,
      sym__item_block_end,
      sym__custom_item_block_end,
      sym__report_block_end,
  [499] = 4,
    ACTIONS(104), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(106), 1,
      aux_sym_double_quoted_string_token2,
    ACTIONS(108), 1,
      aux_sym_double_quoted_string_token3,
    STATE(31), 1,
      aux_sym_double_quoted_string_repeat1,
  [512] = 4,
    ACTIONS(110), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(112), 1,
      aux_sym_double_quoted_string_token2,
    ACTIONS(114), 1,
      aux_sym_double_quoted_string_token3,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
  [525] = 3,
    ACTIONS(3), 1,
      sym__check_type_start,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [536] = 3,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym__check_type_start,
    STATE(33), 2,
      sym__check_type_block,
      aux_sym_source_file_repeat1,
  [547] = 3,
    ACTIONS(123), 1,
      sym_generic_tag_key,
    ACTIONS(125), 1,
      sym__report_block_end,
    STATE(21), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [558] = 1,
    ACTIONS(127), 4,
      aux_sym__condition_block_start_token2,
      aux_sym__condition_block_start_token3,
      aux_sym__condition_block_start_token4,
      aux_sym__condition_block_start_token5,
  [565] = 3,
    ACTIONS(123), 1,
      sym_generic_tag_key,
    ACTIONS(129), 1,
      sym__item_block_end,
    STATE(21), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [576] = 3,
    ACTIONS(123), 1,
      sym_generic_tag_key,
    ACTIONS(131), 1,
      sym__custom_item_block_end,
    STATE(21), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [587] = 3,
    ACTIONS(133), 1,
      aux_sym__condition_block_start_token1,
    STATE(8), 1,
      sym__condition_block_start,
    STATE(45), 1,
      sym_condition_block,
  [597] = 2,
    ACTIONS(123), 1,
      sym_generic_tag_key,
    STATE(34), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [605] = 2,
    ACTIONS(123), 1,
      sym_generic_tag_key,
    STATE(37), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [613] = 2,
    ACTIONS(123), 1,
      sym_generic_tag_key,
    STATE(36), 2,
      aux_sym__item_contents,
      sym_generic_tag_value_pair,
  [621] = 1,
    ACTIONS(135), 2,
      sym_value_data_dword,
      sym_value_data_max,
  [626] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [631] = 1,
    ACTIONS(139), 2,
      sym__else_block_start,
      aux_sym__if_block_end_token1,
  [636] = 2,
    ACTIONS(141), 1,
      sym__then_block_start,
    STATE(28), 1,
      sym_then_block,
  [643] = 2,
    ACTIONS(60), 1,
      aux_sym_double_quoted_string_token1,
    STATE(59), 1,
      sym_double_quoted_string,
  [650] = 2,
    ACTIONS(143), 1,
      aux_sym__if_block_end_token1,
    STATE(11), 1,
      sym__if_block_end,
  [657] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__check_type_start,
  [662] = 1,
    ACTIONS(147), 2,
      sym_value_data_dword,
      sym_value_data_min,
  [667] = 2,
    ACTIONS(60), 1,
      aux_sym_double_quoted_string_token1,
    STATE(25), 1,
      sym_double_quoted_string,
  [674] = 2,
    ACTIONS(149), 1,
      aux_sym__condition_block_start_token6,
    ACTIONS(151), 1,
      aux_sym__report_block_start_token2,
  [681] = 1,
    ACTIONS(153), 2,
      sym__else_block_start,
      aux_sym__if_block_end_token1,
  [686] = 1,
    ACTIONS(155), 1,
      sym_generic_tag_key,
  [690] = 1,
    ACTIONS(157), 1,
      sym_generic_tag_key,
  [694] = 1,
    ACTIONS(159), 1,
      aux_sym_value_data_range_token2,
  [698] = 1,
    ACTIONS(161), 1,
      aux_sym__if_block_end_token1,
  [702] = 1,
    ACTIONS(163), 1,
      sym__then_block_start,
  [706] = 1,
    ACTIONS(165), 1,
      sym__then_block_start,
  [710] = 1,
    ACTIONS(167), 1,
      aux_sym__condition_block_start_token6,
  [714] = 1,
    ACTIONS(169), 1,
      aux_sym__condition_block_start_token6,
  [718] = 1,
    ACTIONS(171), 1,
      aux_sym__if_block_end_token1,
  [722] = 1,
    ACTIONS(173), 1,
      aux_sym_value_data_range_token3,
  [726] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 251,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 354,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 381,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 403,
  [SMALL_STATE(22)] = 416,
  [SMALL_STATE(23)] = 429,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 451,
  [SMALL_STATE(26)] = 459,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 479,
  [SMALL_STATE(29)] = 492,
  [SMALL_STATE(30)] = 499,
  [SMALL_STATE(31)] = 512,
  [SMALL_STATE(32)] = 525,
  [SMALL_STATE(33)] = 536,
  [SMALL_STATE(34)] = 547,
  [SMALL_STATE(35)] = 558,
  [SMALL_STATE(36)] = 565,
  [SMALL_STATE(37)] = 576,
  [SMALL_STATE(38)] = 587,
  [SMALL_STATE(39)] = 597,
  [SMALL_STATE(40)] = 605,
  [SMALL_STATE(41)] = 613,
  [SMALL_STATE(42)] = 621,
  [SMALL_STATE(43)] = 626,
  [SMALL_STATE(44)] = 631,
  [SMALL_STATE(45)] = 636,
  [SMALL_STATE(46)] = 643,
  [SMALL_STATE(47)] = 650,
  [SMALL_STATE(48)] = 657,
  [SMALL_STATE(49)] = 662,
  [SMALL_STATE(50)] = 667,
  [SMALL_STATE(51)] = 674,
  [SMALL_STATE(52)] = 681,
  [SMALL_STATE(53)] = 686,
  [SMALL_STATE(54)] = 690,
  [SMALL_STATE(55)] = 694,
  [SMALL_STATE(56)] = 698,
  [SMALL_STATE(57)] = 702,
  [SMALL_STATE(58)] = 706,
  [SMALL_STATE(59)] = 710,
  [SMALL_STATE(60)] = 714,
  [SMALL_STATE(61)] = 718,
  [SMALL_STATE(62)] = 722,
  [SMALL_STATE(63)] = 726,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(38),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(41),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(40),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(13),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__check_type_block_repeat1, 2), SHIFT_REPEAT(51),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_block, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_item_block, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_block, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__generic_tag_value_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__generic_tag_value_repeat1, 2), SHIFT_REPEAT(50),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_block_start, 3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__item_contents, 2), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_contents, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_tag_value, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_tag_value, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_tag_value_pair, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_data_range, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_type_block, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_block, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__report_block_start, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__report_block_start, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
