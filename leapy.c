#include<stdio.h>
int main()
{
   int year ;
    printf("enter any year ");
    scanf("%d",&year);
    if
        ((year%4==0&&year%100!=0)||(year%400==0))
    {
    printf("leap year=%d",year);

    }
    else
    {
    printf("not a leap year%d",year);
    }
    return 0;
}
