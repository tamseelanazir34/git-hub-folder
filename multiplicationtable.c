#include <stdio.h>

int main()
{
    int i, m;
    printf("Enter the no. for which you want to generate the multiplication table: ");
    scanf("%d", &m);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", m, i, (m * i));
    }
    return 0;
}