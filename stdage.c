#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare and initialize a Student variable
    struct Student s1 = {"Aleena", 15, 90.0};

    // Print the age of the student
    printf("Age: %d\n", s1.age);

    return 0;
}