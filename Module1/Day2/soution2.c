#include <stdio.h>

void swap(void *a, void *b) {
  void *temp;

  temp = a;
  a = b;
  b = temp;
}

int main() {
  
  int a = 10;
  float b = 20.0f;

  printf("The original values are: a = %d, b = %f\n", a, b);

  swap(&a, &b);

  printf("The new values are: a = %d, b = %f\n", a, b);

  return 0;
}
