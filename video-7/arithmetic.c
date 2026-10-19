#include <stdint.h>
#include <stdio.h>
int main(void) {

  int y = 2;
  float x = 1 + y / 3.0f * 5;
  printf("x = %f \n", x);

  int z = 13 % 4;
  printf("z = %d \n", z);

  z = !(1 && 0);
  _Bool Bool = 1 > 0 && 2 < 3;

  z = 1 < 3 == 1;
  printf("z = %d \n", z);

  z *= 3; // == z = z * 3;
  
  int u = 0;

  // u = u + 1;
  // u += 1;
  // u++;
  // ++u;
  printf("u + 1 = %d \n", ++u);

  uint32_t BSRR = 0xAABBCCDD;

  printf("BSRR = 0x%08X \n", (BSRR >> (16 + 8)) & 0xFF);





          //
          //
>>>>>>> cf760cc (Video #7 files)
  return 0;
}
