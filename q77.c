#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool isDistinct = true;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int diagonalElements[n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Store diagonal elements
    for (i = 0; i < n; i++) {
        diagonalElements[i] = matrix[i][i];
    }

    // Check for distinct elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diagonalElements[i] == diagonalElements[j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) break;
    }

    if (isDistinct) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}
