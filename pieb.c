#include <stdio.h>

void printBinary(int num) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Mask to check each bit
    int leading_zero = 1; // Flag to skip leading zeros

    for (; mask; mask >>= 1) {
        if (num & mask) {
            printf("1");
            leading_zero = 0;
        } else if (!leading_zero) {
            printf("0");
        }
    }
    
    if (leading_zero) // For the case when num is 0
        printf("0");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation: ");
    printBinary(number);

    return 0;
}
