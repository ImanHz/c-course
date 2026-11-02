
#include <stdio.h>
enum parity { ODD, EVEN };

enum month {
  JAN = 1,
  FEB,
  //...
};

enum boolean { FALSE = 0, TRUE };

enum parity number_parity(int input) {

  if (input % 2 == 0) {
    return EVEN;
  }

  return ODD;
}

int main(void) {
  printf("%d \n", number_parity(14));
  if (number_parity(12) == EVEN) {
    printf("EVEN! \n");
  } else {
    printf("ODD \n");
  }

  int temperature = 5;

  if (temperature < 0) {
    printf("FREEZING \n");
  } else if (temperature < 10) {
    printf("COLD \n");
  } else if (temperature < 25) {
    printf("COOL \n");
  } else {
    printf("WARM! \n");
  }

  _Bool authenticated = FALSE;
  _Bool is_machine_running = TRUE;

  if (authenticated) {
    if (is_machine_running) {
      printf("RUNNING \n");
    } else {
      printf("READY TO START");
    }
  } else {
    printf("NOT AUTHORIZED! \n");
  }

  if (authenticated && is_machine_running) {
    printf("RUNNING \n");
  }

  int den = 3;
  if (den != 0 && (1 / den >= 0)) {
    printf("GREATER THAN 0.1");
  }
  return 0;
}
