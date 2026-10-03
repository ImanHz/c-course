#include "stdio.h"
#include <stdint.h>
#include <string.h>

// entry point
int main(void) {

  puts("Hello World!");

  uint32_t number = 0x3f800000;

  printf("Original unsigned number is = %u (or in hex = %X), its float equivalent is: %f \n", number, number, *(float*)&number);

  uint8_t byte[4] = {0,0,0,0};

  memcpy(byte, &number, sizeof byte);
  
  printf("Byte 0: %p %X \n", &byte[0], byte[0]);
  printf("Byte 1: %p %X \n", &byte[1], byte[1]);
  printf("Byte 2: %p %X \n", &byte[2], byte[2]);
  printf("Byte 3: %p %X \n", &byte[3], byte[3]);

  return 0;
}
