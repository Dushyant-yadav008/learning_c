#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter elements of first sorted array: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter elements of second sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge the arrays
    while(i < m && j < n) {
        if(a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while(i < m) {
        merged[k++] = a[i++];
    }
    while(j < n) {
        merged[k++] = b[j++];
    }

    // Print merged array
    printf("Merged Sorted Array: ");
    for(int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
