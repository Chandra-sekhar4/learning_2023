#include <stdio.h>

int bitOperations(int num, int oper_type) {
    int result = num; 

    if (oper_type == 1) {
        result |= 1; 
    } else if (oper_type == 2) {
        result &= ~(1 << 31); 
    } else if (oper_type == 3) {
        result ^= (1 << 15); 
    }

    return result;
}

int main() {
    int num, oper_type;
    int result;

    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bitOperations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
