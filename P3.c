#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("enter string");
    scanf("%s",s);
    for(i=0; s[i]!='\0';i++);
    printf("length of string: %d",i);
    

}