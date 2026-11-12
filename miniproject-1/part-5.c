#include "wchar.h"
#include <locale.h>
#include <stdlib.h>
// Adding some colors

#define COLOR_RESET "\033[0;0m"
#define COLOR_RED_BOLD "\033[1;31m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_BLUE_ITALIC "\033[3;34m"

#define CELL_LENGTH 6

const wchar_t horizontal = L'\u2500';

#define ROW_NUMBER 11
#define COL_NUMBER 11

enum alignment { LEFT = -1, RIGHT = 1 };

int get_alignment(enum alignment a, int length) { return a * length; }

void draw_first_line(int length) {

  for (int l = 0; l < length * COL_NUMBER; l++) {
    wprintf(L"%lc", horizontal);
  }
  wprintf(L"\n");
}
int main(void) {

  setlocale(LC_ALL, "");
  const int row_length = get_alignment(LEFT, CELL_LENGTH);
  draw_first_line(CELL_LENGTH);
  for (int row = 0; row < ROW_NUMBER; row++) {
    for (int col = 0; col < COL_NUMBER; col++) {
      if (row == 0 && col == 0) {
        wprintf(L"%-*c", row_length, ' ');
        continue;
      }
      if (row == 0) {
        wprintf(COLOR_BLUE_ITALIC L"%*d" COLOR_RESET, row_length, col);
      } else if (col == 0) {
        wprintf(COLOR_RED_BOLD L"%*d" COLOR_RESET, row_length, row);
      } else {
        wprintf(COLOR_GREEN L"%*d" COLOR_RESET, row_length, row * col);
      }
    }
    wprintf(L"\n");
  }
  return EXIT_SUCCESS;
}
