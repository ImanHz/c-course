#include <stddef.h>
#include <stdio.h>

void print_mid_lines(int length) {

  for (int l = 0; l < length; l++) {
    if (l == 0) {
      printf("├");
    } else if (l == length - 1) {
      printf("┤");
    } else if (l % 5 == 0) {
      printf("┼");
    } else {
      printf("─");
    }
  }
  puts("");
}

void print_start_line(int length) {

  for (int l = 0; l < length; l++) {
    if (l == 0) {
      printf("┌");
    } else if (l == length - 1) {
      printf("┐");
    } else if (l % 5 == 0) {
      printf("┬");
    } else {
      printf("─");
    }
  }
  puts("");
}
void print_end_line(int length) {

  for (int l = 0; l < length; l++) {
    if (l == 0) {
      printf("└");
    } else if (l == length - 1) {
      printf("┘");
    } else if (l % 5 == 0) {
      printf("┴");
    }else {
      printf("─");
    }
  }
  puts("");
}
int main(void) {

  for (int i = 0, j = 10; i < 10 && j > 2; i++) {
    printf("%d_%d \t", i, --j);
  }
  puts("");

  for (int loop_index = 0; loop_index < 10; loop_index++) {
    printf("%d\n", loop_index);
  }

  int loop_index = 0;
  while (loop_index < 10) {

    printf("%d\n", loop_index);
    loop_index++;
  }

  // char ch = 0;
  // do {
  //   ch = getchar();
  //   if (ch != '\n') {
  //     printf("OUTPUT = %d\n", ch);
  //   }
  //
  // } while (ch != 'q');
  //
  const int length = 51;
  print_start_line(length);
  for (int i = 1; i <= 10; i++) {
    printf("│");
    for (int j = 1; j <= 10; j++) {
      if (j == 1 || i == 1) {

        printf("\033[1;33m%-4d\033[0m│", i * j);
      } else if (i == j) {
        printf("\033[1;32m%-4d\033[0m│", i * j);
      } else {
        printf("%-4d│", i * j);
      }
    }
    puts("");
    if (i == 10) {
      print_end_line(length);
    } else {
      print_mid_lines(length);
    }
  }
  // puts("");
  // for (int l = 0; l < 100; l++) {
  //   printf("\033[4;34m%c\033[0m", ' ');
  // }
  puts("");
  return 0;
}
