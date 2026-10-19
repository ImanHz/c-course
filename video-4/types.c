
#include "limits.h"
#include "stdint.h"
#include <stdio.h>

int main(void) {

  char ch = 'c';                     // 1 byte
  int number = 0;                    // 4 bytes
  float floating_number = 3.14f;     // 4 bytes
  double double_precision = 0.00001; // 8 bytes

  printf("\t char = %c, integer = %d, float = %.3f \n", ch, number,
         floating_number);

  printf("char type has the maximum value of %d, min value of %d, bit size = "
         "%d \n",
         CHAR_MAX, CHAR_MIN, CHAR_BIT);

  signed char signed_char = -2;
  unsigned int unsigned_integer = 100000;

  long int long_int = 1000000000;

  printf("short size = %ld, normal size = %ld, long size = %ld \n ",
         sizeof(unsigned short int), sizeof(int), sizeof(long int));

  uint32_t counter = 0; // unsigned int
  int32_t counter_signed = -2;

  int16_t signed_short = -3;

  uint8_t byte = 4; // unsigned char 

char uppercase_character = 'A';

printf("character = %c , numerical value = %d \n", uppercase_character, uppercase_character);

char lowercase_character = 'a';

printf("character = %c , numerical value = %d \n", lowercase_character, lowercase_character);

printf("%d \n", lowercase_character - uppercase_character);

printf("%d \n", '5' - '0');




  return 0;
}
