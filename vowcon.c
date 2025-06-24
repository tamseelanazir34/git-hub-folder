#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet=\n");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf(" small letter vowels= %c",ch);
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("capital vowels=%c",ch);
    else
        printf("consonants=%c",ch);
    return 0;
}
