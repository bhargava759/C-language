#include <stdio.h>
int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("Concatenated string: %s", result);
    return 0;
}

