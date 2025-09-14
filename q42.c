#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for proper divisors
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Determine if number is perfect
    if(sum == num && num != 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
