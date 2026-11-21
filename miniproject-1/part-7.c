#include "wchar.h"
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
// Adding some colors

#define COLOR_RESET "\033[0;0m"
#define COLOR_RED_BOLD "\033[1;31m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_BLUE_ITALIC "\033[1;34m"

#define CELL_LENGTH 4

const wchar_t horizontal = L'\u2500';
const wchar_t vertical = L'\u2502';
const wchar_t top_left = L'\u250C';
const wchar_t top_right = L'\u2510';
const wchar_t top_intersection = L'\u252C';
const wchar_t bottom_left = L'\u2514';
const wchar_t bottom_right = L'\u2518';
const wchar_t bottom_intersection = L'\u2534';
const wchar_t middle_left = L'\u251C';
const wchar_t middle_right = L'\u2524';
const wchar_t middle_intersection = L'\u253C';

#define ROW_NUMBER 11
#define COL_NUMBER 11

enum alignment { LEFT = -1, RIGHT = 1 };

int get_alignment(enum alignment a, int length) { return a * length; }

void draw_first_line(int length) {

  for (int l = 0; l <= (length + 1) * COL_NUMBER; l++) {
    if (l == 0) {
      wprintf(L"%lc", top_left);
    } else if (l == (length + 1) * COL_NUMBER) {
      wprintf(L"%lc", top_right);
    } else if ((l % (length + 1)) == 0) {
      wprintf(L"%lc", top_intersection);
    } else {
      wprintf(L"%lc", horizontal);
    }
  }
  wprintf(L"\n");
}
void draw_last_line(int length) {

  for (int l = 0; l < (length + 1) * COL_NUMBER + 1; l++) {
    if (l == 0) {
      wprintf(L"%lc", bottom_left);
    } else if (l == (length + 1) * COL_NUMBER) {
      wprintf(L"%lc", bottom_right);
    } else if ((l % (length + 1)) == 0) {
      wprintf(L"%lc", bottom_intersection);
    } else {
      wprintf(L"%lc", horizontal);
    }
  }
  wprintf(L"\n");
}
void draw_middle_line(int length) {

  for (int l = 0; l < (length + 1) * COL_NUMBER + 1; l++) {
    if (l == 0) {
      wprintf(L"%lc", middle_left);
    } else if (l == (length + 1) * COL_NUMBER) {
      wprintf(L"%lc", middle_right);
    } else if ((l % (length + 1)) == 0) {
      wprintf(L"%lc", middle_intersection);
    } else {
      wprintf(L"%lc", horizontal);
    }
  }
  wprintf(L"\n");
}
int main(void) {

  setlocale(LC_ALL, "");
  const int row_length = get_alignment(RIGHT, CELL_LENGTH);
  draw_first_line(CELL_LENGTH);
  for (int row = 0; row < ROW_NUMBER; row++) {
    for (int col = 0; col < COL_NUMBER; col++) {
      if (row == 0 && col == 0) {
        wprintf(L"%lc%-*c%lc", vertical, row_length, ' ', vertical);
        continue;
      }
      if (row == 0) {
        wprintf(COLOR_BLUE_ITALIC L"%*d" COLOR_RESET "%lc", row_length, col,
                vertical);
      } else if (col == 0) {
        wprintf("%lc" COLOR_RED_BOLD L"%*d" COLOR_RESET "%lc", vertical,
                row_length, row, vertical);
      } else {
        wprintf(COLOR_GREEN L"%*d" COLOR_RESET "%lc", row_length, row * col,
                vertical);
      }
    }

    wprintf(L"\n");
    if (row == ROW_NUMBER - 1) {

      draw_last_line(CELL_LENGTH);
    } else {
      draw_middle_line(CELL_LENGTH);
    }
  }
  return EXIT_SUCCESS;
}
