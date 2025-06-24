#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("0"); // Prints '0' five times in a row
        }
        printf("\n"); // Moves to the next line after each row of '0's
    }
    return 0;
}