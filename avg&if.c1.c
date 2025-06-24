#include<stdio.h>
int main(){
int math,science,urdu,eng;
float percent;
printf("/n enter  marks of ayat in maths=");
scanf("%d",&math);
printf("enter   marks of  ayat in science= ");
scanf("%d",&science);
printf("enter marks of ayat in urdu=");
scanf("%d",&urdu);
printf("enter marks of  ayat in english=");
scanf("%d",&eng);
percent=(math+science+urdu+eng)*100/400;
printf("total percentage=%f",percent);
if (percent>50)
{
    printf("the student is pass");
}

else
{
    printf("student is fail");
}

return 0;

}
