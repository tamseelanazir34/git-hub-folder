#include<stdio.h>
int main(){
int a, b,c;
printf("value of a and b=");
scanf("%d %d",&a,&b);

a=b;
b=c;
c=a;
printf("swaped value of a b and c =%d",a,b,c);
return 0;
}
