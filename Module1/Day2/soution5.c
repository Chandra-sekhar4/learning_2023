#include <stdio.h>

int countSetBits(unsigned int n) {
  int count = 0;
  while (n > 0) {
    count += (n & 1);
    n >>= 1;
  }
  return count;
}

int main() {
  unsigned int a[] = {0x1, 0xF4, 0x10001};
  int i, total = 0;

  for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    total += countSetBits(a[i]);
  }

  printf("The total number of set bits in the array is: %d\n", total);

  return 0;
}
