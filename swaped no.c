#include<stdio.h>
int main()
{
int a,b,c;
printf("value of a, b,c =\n");
scanf("%d %d",&a,&b,&c);
a=b;
b=c;
c=a;
printf("swapped value of a b and c=%d",a,b,c);
return 0;
}
