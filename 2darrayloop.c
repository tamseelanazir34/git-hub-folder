#include <stdio.h>

int main() {
    int a[2][2];
    int i, j; // Declare loop variables

    printf("Enter the elements of array: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}