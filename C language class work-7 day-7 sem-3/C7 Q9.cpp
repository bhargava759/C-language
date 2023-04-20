#include <stdio.h>
int pascal(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    } else {
        return pascal(row - 1, col - 1) + pascal(row - 1, col);
    }
}
void print_pascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows to print: ");
    scanf("%d", &n);
    print_pascal(n);
    return 0;
}

