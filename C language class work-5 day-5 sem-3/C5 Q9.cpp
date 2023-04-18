#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        arr[i][0] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    printf("Pascal's triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

