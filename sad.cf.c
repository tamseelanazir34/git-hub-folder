#include<stdio.h>
int main()
{ int marks[100];
    int n, i;
    int total = 0;
    float average;

    printf("enter the number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
     printf("enter marks for subject %d: ", i+1);
     scanf("%d", &marks[i]);
     total += marks[i];
    }
     average = (float)total / n;

     printf("\ntotal marks = %d\n", total);
     printf("average marks = %.2f\n", average);
     return 0;
     }

