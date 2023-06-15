#include <stdio.h>

void printExponentInHex(double x) {
  
  unsigned char *exponentPtr = (unsigned char *)&x;
  int exponent = exponentPtr[7];

  char hexExponent[2];
  sprintf(hexExponent, "%02X", exponent);

  printf("Exponent in hexadecimal format: 0x%s\n", hexExponent);
}

void printExponentInBinary(double x) {
  
  unsigned char *exponentPtr = (unsigned char *)&x;
  int exponent = exponentPtr[7];

  char binaryExponent[9];
  for (int i = 0; i < 8; i++) {
    binaryExponent[7 - i] = (exponent & (1 << i)) ? '1' : '0';
  }
  printf("Exponent in binary format: %s\n", binaryExponent);
}

int main() {
  double x = 0.7;

  printExponentInHex(x);
  printExponentInBinary(x);

  return 0;
}
