#include<stdio.h>
int main()
{
    char string1[50],string2[50],*str1,*str2;
    int i;

    printf("enter first string");
    scanf("%s",string1);

    printf("enter second string");
    scanf("%s",string2);

    str1=string1;
    str2=string2;

    while(*str1==*str2)
     {
         if(*str1=='\0' || *str2=='\0')
         break;

         str1++;
         str2++;

     }
        if(*str1=='\0'&& *str2=='\0')
          printf("both string are equal");
        else
          printf("both string are not equal");

    }