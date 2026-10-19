#include <stdio.h>
int main(void) {

  char char_1 = 100; // to 01100100
  char char_2 = char_1 + 50; // to 10010110
                             //
// (X % 2^N) - 2^N
  printf("char #1 = %d, char #2 = %d \n", char_1, char_2);

  int char_to_int = char_1 + 50; 
printf("integer interpretation = %d \n", char_to_int);

  _Bool comparison = char_1 > char_2;
  printf("is char #1 is greater than char #2? %d \n", comparison);

  unsigned char *byte_value = (unsigned char *)&char_1;

  printf("char_1 is stored as %08b\n", *byte_value);

  byte_value = (unsigned char *)&char_2;
  printf("char_2 is stored as %08b\n", *byte_value);
  // integer promotion
  //
  //
  //
  int x = 0;
  unsigned long y = 0; // 2^32 - 1
  y--; // y = y - 1;

  printf("COMPARISON == %d \n", x >= y);

  return 0;
}
