


#include <stdio.h>
int main(void)
{
  int i = 10;
LOOP:
  printf("%d \n", i--);
  if (i < 0) {
    goto DONE;
  }
  goto LOOP;
DONE:
  printf("FINISHED!");
  return 0;
}
