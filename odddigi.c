#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOddDigit = 0; // To check if there is at least one odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) { // Check for odd digit
            product *= digit;
            hasOddDigit = 1;
        }
        num /= 10;
    }

    if (hasOddDigit) {
        printf("The product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
