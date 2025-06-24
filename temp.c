#include <stdio.h>

float celcius(float fahrenheit) {
    float c = (5.0 / 9.0) * (fahrenheit - 32.0);
    return c;
}

int main() {
    float fahrenheit = 98.6; // Example Fahrenheit temperature
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperature in Celsius: %.2f\n", celcius(fahrenheit));
    return 0;
}