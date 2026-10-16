
#include <stdint.h>
#include <stdio.h>

const float PI = 3.141592f;
const unsigned int count = 4U;

const unsigned int hex = 0xFF20;

enum parity { EVEN, ODD };

enum parity is_even(int number) { return number % 2 == 0 ? EVEN : ODD; }

float circle_area(float diameter) { return diameter * diameter * PI; }

int inc(int a) { return ++a; }

int main(void) {

  if (is_even(4) == EVEN) {
    printf("IS EVEN!");
  } else {
    printf("IS ODD! ");
  }

  float area = circle_area(2.0f);
  printf("The area of circle is %f \n", area);

  printf("size of long double is: %ld \n", sizeof(long double));

  // basic arithmetic:
  // ||
  // &&
  // == !=
  // < > <= >=
  // + -
  // / * %
  // + - (unary)
  // left to right

  // cast
  int x = 1 + 21 * 5 % 2;
  printf("x is %d \n", x);

  x = 1 + 21 * (5 % 2);
  printf("x is %d \n", x);

  x = 1 + 4 + -3;
  printf("x is %d \n", x);

  x = 0 || 0 + 1;
  printf("x is %d \n", x);

  x = 3;
  if (x != 0 && 10 / x >= 1) {
    printf("division is = %d \n", 10 / x);
  } 
  float y_f = 2.94443f;
  int y_i = y_f;

  printf("data conversion resulted in: %d \n", y_i);
  y_f = 2.0 / 3;
  y_i = 2 / 3;
  printf("data conversion resulted in: %d %f\n", y_i, y_f);

  int i = inc(2);
  printf("incremented value is %d \n", i);

  unsigned int a = 0xFF00;
  unsigned int b = 0x0A10;
  printf("bitwise AND between \n%032b\nand\n%032b\nis\n%032b\n", a, b, a ^ b);

  unsigned long int value = 0xAB010203;
  unsigned char value_msb = (value >> 8 * 3);
  printf("%X \n", value_msb);

  uint32_t BSRR = 0x0;
  uint32_t mask = 0x00000007;
  uint32_t masked_register = BSRR | mask;
  printf("masked register result = %032b \n", masked_register);

  uint32_t mask_2 = 0x00000002;
  uint32_t masked_register_2 = masked_register & (~mask_2);
  printf("masked register result = %032b, %032b \n", ~mask_2,
         masked_register_2);

  return 0;
}
