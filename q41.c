#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);

    swappedNum = lastDigit * (int)pow(10, digits);
    swappedNum += (num % (int)pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
