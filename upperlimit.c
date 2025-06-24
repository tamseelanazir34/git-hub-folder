#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the upper limit up to which you want to get sum:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}