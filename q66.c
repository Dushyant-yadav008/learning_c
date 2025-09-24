#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos;

    // Input array size
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter the sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position to insert
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            break;
        }
    }
    pos = i;

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++; // Increase array size

    // Display the updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

