#include <stdio.h>
#include <stdlib.h>

// Adding some colors

#define COLOR_RESET "\033[0;0m"
#define COLOR_RED_BOLD "\033[1;31m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_BLUE_ITALIC "\033[3;34m"

int main(void) {

  const int row_length = -6;
  for (int row = 0; row <= 10; row++) {
    for (int col = 0; col <= 10; col++) {
      if (row == 0 && col == 0) {
        printf("%-*c", row_length, ' ');
        continue;
      }
      if (row == 0) {
        printf(COLOR_BLUE_ITALIC"%*d"COLOR_RESET, row_length, col);
      } else if (col == 0) {
        printf(COLOR_RED_BOLD "%*d"COLOR_RESET , row_length, row);
      } else {
        printf(COLOR_GREEN "%*d" COLOR_RESET,row_length, row * col);
      }
    }
    puts("");
  }
  return EXIT_SUCCESS;
}
