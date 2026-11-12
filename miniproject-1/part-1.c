#include <stdio.h>
#include <stdlib.h>


// The basic multiplication table

int main(void) {

  for (int row = 0; row <= 10; row++) {
    for (int col = 0; col <= 10; col++) {
      if (row == 0 && col == 0) {
        printf("    ");
        continue;
      }
      if (row == 0) {
        printf("%4d", col);
      } else if (col == 0) {

        printf("%4d", row);
      } else {
        printf("%4d", row * col);
      }
    }
    puts("");
  }
  return EXIT_SUCCESS;
}
