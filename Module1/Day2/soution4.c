#include <stdio.h>

int count_bits(int *array, int size) {
  int count = 0;

  for (int i = 0; i < size; i++) {
    count += __builtin_popcount(array[i]);
  }

  return count;
}

int main() {
  
  int a[3] = {0x1, 0xF4, 0x10001};

  int total_bits = count_bits(a, 3);
  printf("The total number of set bits is %d\n", total_bits);

  return 0;
}
