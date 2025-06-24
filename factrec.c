#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long int fact_func(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n > 1) {
        return n * fact_func(n - 1);
    }
    // This case should ideally not be reached if n is non-negative,
    // but added for completeness based on the disp_func logic.
    return 0; 
}

// Function to display factorial information
void disp_func(int n) {
    if (n < 0) {
        printf("The factorial of a negative number doesn't exist!\n");
    } else {
        printf("Factorial of %d is: ", n);
        unsigned long long int fact = fact_func(n);
        printf("%llu\n", fact);

        // This part seems to be for displaying the multiplication sequence,
        // but it's incomplete and might not be intended for the final output.
        // If intended, it needs to be corrected to print the sequence correctly.
        // For example, for 5!, it should print "5 x 4 x 3 x 2 x 1 = 120"
        // The original code attempts to print numbers and 'x' but is flawed.
        /*
        for (int i = n; i > 0; --i) {
            printf("%d", i);
            if (i > 1) {
                printf(" x ");
            }
        }
        printf(" = %llu\n", fact);
        */
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    disp_func(num);
    return 0;
}