#include <stdio.h>

int main() {
    int n, sum = 0, i;
    
    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for(i = 1; i <= 2 * n; i += 2) {
        sum += i;
    }

    // Display the result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
