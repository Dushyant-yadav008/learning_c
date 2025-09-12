#include <stdio.h>

int main() {
    int n, i;
    double numerator = 2.0, denominator = 3.0, sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;       // Increment numerator by 2
        denominator += 4;     // Increment denominator by 4
    }

    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}
