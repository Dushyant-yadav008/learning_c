#include <stdio.h>

#define ROW 3
#define COL 4

void diagonalTraversal(int matrix[ROW][COL], int m, int n) {
    for (int line = 1; line <= (m + n - 1); line++) {
        int start_col = (line > m) ? line - m : 0;
        int count = (line > n) ? n : line;

        for (int j = 0; j < count; j++) {
            int row = (line > n) ? m - j - 1 : line - j - 1;
            int col = start_col + j;
            printf("%d ", matrix[row][col]);
        }
    }
}

int main() {
    int matrix[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Diagonal Traversal of the matrix is:\n");
    diagonalTraversal(matrix, ROW, COL);

    return 0;
}
