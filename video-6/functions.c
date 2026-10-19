
#include <stdio.h>
int max(int x, int y) {

  if (x > y) {
    return x;
  } else {
    return y;
  }
}

int maximum_of_three(int x, int y, int z) { return max(x, max(y, z)); }

int decrement(int x) { return x - 1; }

// recursion
void countdown(unsigned int x) {
  if (x <= -1) {
    printf("End => x = %d \n", x);
    return;
  };
  printf("==> %d \n", x);
  countdown(x - 1);
}

/*

 countdown(5) => print 5 => countdown(4) => print 4 => countdown(3) ...
 countdown(1) => print 1 => countdown(0) => print END


 */

double celsius_to_fahrenheit(double temp_celsius) {
  return temp_celsius * 9.0 / 5.0 + 32.0;
}

float celsius_to_fahrenheit_f(float temp_celsius) {
  return temp_celsius * 9.0f / 5.0f + 32.0f;
}

int celsius_to_fahrenheit_i(int temp_celsius) {
  return temp_celsius * 9 / 5 + 32;
}

void print(void);


int main(void) {

  printf("maximum of x,y is: %d \n", max(2, 5));
  printf("maximum of x,y,z is: %d \n", maximum_of_three(2, 5, -3));
  printf("decrement: %d \n", decrement(5));

  printf("0 in celsius is %f in fahrenheit \n", celsius_to_fahrenheit(0.0));
  printf("1 in celsius is %f in fahrenheit \n", celsius_to_fahrenheit_f(1.0f));
  printf("1 in celsius is %d in fahrenheit \n", celsius_to_fahrenheit_i(1));

  print();
  float fahrenheit = celsius_to_fahrenheit_f(32.0f);
  countdown(5U);
  return 0;
}


void print(void) {
  printf("DUMMY \n");
}
