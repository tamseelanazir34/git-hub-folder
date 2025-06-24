#include <stdio.h>

int main() {
    char studentName[50];
    float subject1, subject2, subject3, subject4;
    float totalMarksObtained, percentage;
    int passingMarks = 40; // Assuming a passing mark of 40% per subject or overall, adjust if needed.
    int maxMarksPerSubject = 100; // Assuming each subject is out of 100 marks
    int overallMaxMarks = 400; // Given in the problem

    // Get student's name
    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    // Get marks for 4 subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);

    // Calculate total marks obtained
    totalMarksObtained = subject1 + subject2 + subject3 + subject4;

    // Calculate percentage
    percentage = (totalMarksObtained / overallMaxMarks) * 100;

    // Display results
    printf("\n--- Student Report ---\n");
    printf("Student Name: %s", studentName);
    printf("Marks in Subject 1: %.2f\n", subject1);
    printf("Marks in Subject 2: %.2f\n", subject2);
    printf("Marks in Subject 3: %.2f\n", subject3);
    printf("Marks in Subject 4: %.2f\n", subject4);
    printf("Total Marks Obtained: %.2f / %d\n", totalMarksObtained, overallMaxMarks);
    printf("Percentage: %.2f%%\n", percentage);

    // Check if student passed or failed (assuming passing percentage is 40%)
    if (percentage >= passingMarks) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}