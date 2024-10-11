#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_STAR = 1,
  sym_card_name = 2,
  aux_sym_values_token1 = 3,
  anon_sym_STAR_STAR = 4,
  aux_sym_comment_token1 = 5,
  aux_sym_comment_token2 = 6,
  aux_sym_comment_token3 = 7,
  sym_number = 8,
  sym_number_float = 9,
  sym_string = 10,
  sym_word = 11,
  sym_source_file = 12,
  sym_block = 13,
  sym_cards = 14,
  sym_values = 15,
  sym_comment = 16,
  sym__blank = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_block_repeat1 = 19,
  aux_sym_values_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR] = "*",
  [sym_card_name] = "card_name",
  [aux_sym_values_token1] = "values_token1",
  [anon_sym_STAR_STAR] = "**",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "text",
  [aux_sym_comment_token3] = "comment_token3",
  [sym_number] = "number",
  [sym_number_float] = "number_float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_cards] = "cards",
  [sym_values] = "values",
  [sym_comment] = "comment",
  [sym__blank] = "_blank",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_card_name] = sym_card_name,
  [aux_sym_values_token1] = aux_sym_values_token1,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [sym_number] = sym_number,
  [sym_number_float] = sym_number_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_cards] = sym_cards,
  [sym_values] = sym_values,
  [sym_comment] = sym_comment,
  [sym__blank] = sym__blank,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_card_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_values_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_number_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_cards] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_blank = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\t') SKIP(0);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(8);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(8);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(8);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(8);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\t') SKIP(9);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(8);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_card_name);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_card_name);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_card_name);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_card_name);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_values_token1);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_float);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {(TSStateId)(-1)},
  [24] = {(TSStateId)(-1)},
  [25] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym__blank] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_values_token1] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(3),
    [aux_sym_comment_token3] = ACTIONS(5),
    [sym_number] = ACTIONS(1),
    [sym_number_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_block] = STATE(11),
    [sym_cards] = STATE(13),
    [sym_values] = STATE(12),
    [sym_comment] = STATE(1),
    [sym__blank] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_STAR_STAR] = ACTIONS(3),
    [aux_sym_comment_token3] = ACTIONS(5),
    [sym_number] = ACTIONS(11),
  },
  [2] = {
    [sym_block] = STATE(11),
    [sym_cards] = STATE(13),
    [sym_values] = STATE(12),
    [sym_comment] = STATE(2),
    [sym__blank] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_STAR_STAR] = ACTIONS(3),
    [aux_sym_comment_token3] = ACTIONS(5),
    [sym_number] = ACTIONS(11),
  },
  [3] = {
    [sym_block] = STATE(11),
    [sym_cards] = STATE(13),
    [sym_values] = STATE(12),
    [sym_comment] = STATE(3),
    [sym__blank] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(3),
    [aux_sym_comment_token3] = ACTIONS(5),
    [sym_number] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(25), 1,
      anon_sym_STAR,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(12), 1,
      sym_values,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_number,
    STATE(4), 2,
      sym_comment,
      sym__blank,
  [24] = 7,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      sym_number,
    STATE(12), 1,
      sym_values,
    STATE(5), 3,
      sym_comment,
      sym__blank,
      aux_sym_block_repeat1,
  [48] = 7,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_number_float,
    STATE(9), 1,
      aux_sym_values_repeat1,
    ACTIONS(36), 2,
      anon_sym_STAR,
      sym_number,
    STATE(6), 2,
      sym_comment,
      sym__blank,
  [72] = 6,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_values_token1,
    STATE(7), 2,
      sym_comment,
      sym__blank,
    ACTIONS(42), 3,
      anon_sym_STAR,
      sym_number,
      sym_number_float,
  [94] = 7,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(38), 1,
      sym_number_float,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_values_repeat1,
    ACTIONS(48), 2,
      anon_sym_STAR,
      sym_number,
    STATE(8), 2,
      sym_comment,
      sym__blank,
  [118] = 6,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_number_float,
    ACTIONS(52), 2,
      anon_sym_STAR,
      sym_number,
    STATE(9), 3,
      sym_comment,
      sym__blank,
      aux_sym_values_repeat1,
  [140] = 5,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_comment,
      sym__blank,
    ACTIONS(52), 3,
      anon_sym_STAR,
      sym_number,
      sym_number_float,
  [159] = 5,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_number,
    STATE(11), 2,
      sym_comment,
      sym__blank,
  [177] = 5,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_number,
    STATE(12), 2,
      sym_comment,
      sym__blank,
  [195] = 5,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_number,
    STATE(13), 2,
      sym_comment,
      sym__blank,
  [213] = 6,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(65), 1,
      aux_sym_values_token1,
    ACTIONS(67), 1,
      sym_number_float,
    STATE(8), 1,
      aux_sym_values_repeat1,
    STATE(14), 2,
      sym_comment,
      sym__blank,
  [233] = 5,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_number,
    STATE(15), 2,
      sym_comment,
      sym__blank,
  [251] = 5,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(75), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      aux_sym_comment_token2,
    ACTIONS(79), 1,
      aux_sym_comment_token3,
    STATE(16), 2,
      sym_comment,
      sym__blank,
  [268] = 5,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(67), 1,
      sym_number_float,
    STATE(6), 1,
      aux_sym_values_repeat1,
    STATE(17), 2,
      sym_comment,
      sym__blank,
  [285] = 4,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(5), 1,
      aux_sym_comment_token3,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_comment,
      sym__blank,
  [299] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(79), 1,
      aux_sym_comment_token3,
    ACTIONS(83), 1,
      aux_sym_comment_token2,
    STATE(19), 2,
      sym_comment,
      sym__blank,
  [313] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(79), 1,
      aux_sym_comment_token3,
    ACTIONS(85), 1,
      sym_card_name,
    STATE(20), 2,
      sym_comment,
      sym__blank,
  [327] = 3,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(87), 1,
      aux_sym_comment_token3,
    STATE(21), 2,
      sym_comment,
      sym__blank,
  [338] = 3,
    ACTIONS(3), 1,
      anon_sym_STAR_STAR,
    ACTIONS(89), 1,
      aux_sym_comment_token3,
    STATE(22), 2,
      sym_comment,
      sym__blank,
  [349] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [353] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [357] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 251,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 327,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 353,
  [SMALL_STATE(25)] = 357,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cards, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cards, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_abaqus(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
