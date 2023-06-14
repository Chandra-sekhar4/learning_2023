#include <stdio.h>

int findBiggest(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findBiggestTernary(int num1, int num2) {
    int biggest = (num1 > num2) ? num1 : num2;
    return biggest;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int biggest = findBiggest(num1, num2);
    printf("The biggest number is: %d\n", biggest);

    int biggestTernary = findBiggestTernary(num1, num2);
    printf("The biggest number (using ternary operator) is: %d\n", biggestTernary);

    return 0;
}
