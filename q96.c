#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0'; // Removing newline character

    char *start = str;
    char *ptr = str;

    while (*ptr) {
        if (*ptr == ' ' || *(ptr+1) == '\0') {
            if (*(ptr+1) == '\0') ptr++; // Include last character
            reverse(start, ptr - 1);
            start = ptr + 1;
        }
        ptr++;
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
