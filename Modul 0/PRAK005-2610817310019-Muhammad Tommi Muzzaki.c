#include <stdio.h>
#include <string.h>

#define ROWS 5
#define COLS 5

int letter_I[ROWS][COLS] = {
    {0, 1, 1, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 1, 1, 0}
};

int letter_T[ROWS][COLS] = {
    {1, 1, 1, 1, 1},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
};

int letter_BLANK[ROWS][COLS] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
};

const int (*map_letter_to_art(char c))[COLS] {
  switch(c) {
    case 'I': case 'i': return letter_I;
    case 'T': case 't': return letter_T;
    default:            return letter_BLANK;
  }
}

void print_letters(const char *text) {
  int text_length = strlen(text);
  for (int row = 0; row < ROWS; row++) {
    for (int i = 0; i < text_length; i++) {
      char current_char = text[i];
      const int (*letter_art)[COLS] = map_letter_to_art(current_char);
      for (int col = 0; col < COLS; col++) {
        if (letter_art[row][col] == 1) printf("#");
        else printf(" ");
      };
      printf("  ");
    };
    printf("\n");
  };
}

int main() {
    print_letters("TI");
    return 0;
}
