#include <stdio.h>

#define RESET "\033[0;0m"
#define GREEN "\033[1;32m"
#define RED "\033[3;31m"
#define YELLOW "\033[0;33m"

#define ROW_NUM 10
#define COL_NUM 10

enum alignment {
  LEFT = -1,
  RIGHT = +1
};

int get_alignment(int width, enum alignment a) {
  return a * width;
}

int main(void) {

  int alignment = get_alignment(4, RIGHT);

  for (int row = 0; row <= ROW_NUM; row++) {
    for (int col = 0; col <= COL_NUM; col++) {

      if (row == 0 && col == 0) {
        printf("%*c", alignment, ' ');
        continue;
      }
      if (row == 0) {
        printf(RED "%*d" RESET, alignment, col);
      } else if (col == 0) {
        printf(GREEN "%*d" RESET, alignment, row);
      } else {
        printf(YELLOW "%*d" RESET, alignment, row * col);
      }
    }
    puts("");
  }
  return 0;
}
