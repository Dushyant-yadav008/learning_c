#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return false;
    }

    char temp[2 * len1 + 1]; // +1 for null terminator
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("%s is a rotation of %s\n", str2, str1);
    } else {
        printf("%s is not a rotation of %s\n", str2, str1);
    }

    return 0;
}
