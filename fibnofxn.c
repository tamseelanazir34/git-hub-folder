#include<stdio.h>
void generateFibonacci(int n)
{
int t1=0,t2=1,nextTerm;

printf("fibonacci series:=");
for(int i=1;i<=n;++i)
    {
printf("%d",t1);
nextTerm = t1+t2;
t1=t2;
t2=nextTerm;
}
printf("  \n");

}
int main()
{
int num;
printf("enter the no of terms:=");
scanf("%d",&num);

generateFibonacci(num);
return 0;
}



