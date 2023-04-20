#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], result[20];
    int size1, size2, i, j, k;
    printf("Enter size of first array");
    scanf("%d", &size1);
    printf("Enter elements of first array");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array");
    scanf("%d", &size2);
    printf("Enter elements of second array");
    for (j = 0; j < size2; j++) {
        scanf("%d", &arr2[j]);
    }
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (j = 0, k = size1; j < size2; j++, k++) {
        result[k] = arr2[j];
    }
    printf("\nConcatenated array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}

