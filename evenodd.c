

#include <stdio.h>
int main()
{
    int a, b;
    printf(" Enter a number");
    scanf("%d", &a, &b); // Note: This scanf expects two integers, but only one is needed for odd/even check.
    if (a % b == 0) // Note: This condition checks divisibility by 'b', not odd/even of 'a'.
    {
        printf(" Entered value is even");
    }
    else
    {
        printf(" Entered value is odd");
    }
    return 0; 
     // Note: 'Return' should be 'return' (lowercase).
}