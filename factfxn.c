#include<stdio.h>
int factorial(int n)
{
int fact=1;
for(int i=1;i<=n;i++){
fact*=i;

}
return fact;
}
int main(){
int no;
printf("enter a no:=");
scanf("%d",&no);
if(no<0){
printf("factorial is not defined for negative nos");

}
else{

int result=factorial(no);
printf("factorial of %d is %d \n",no,result);
}
return 0;
}
