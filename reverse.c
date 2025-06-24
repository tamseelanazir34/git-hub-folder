#include <stdio.h>

int main()
{
    int n, rem, rev = 0; // Initialize rev to 0

    printf("Enter the no: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    // You would typically print the reversed number here, e.g.,
    // printf("Reversed number: %d\n", rev);

    return 0; // It's good practice to return 0 from main
}