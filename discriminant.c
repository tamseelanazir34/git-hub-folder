#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    double a, b, c, discriminant;

    // Get coefficients from the user
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Display the discriminant
    printf("The discriminant is: %.2lf\n", discriminant);

    return 0;
}