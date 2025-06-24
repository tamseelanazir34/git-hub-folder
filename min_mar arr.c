#include<stdio.h>
int main()
{
int i,n,j,min,marks[100];
printf("enter the  no of std=");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("enter the marks of student =%d",i+1);
    scanf("%d",&marks[i]);
}
min=marks[0];
for(j=0;j<n;j++)
    {
    if (marks[j]<min)
min=marks[j];

}

printf("min marks of the std =%d",min);
return 0;
}
