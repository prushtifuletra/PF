#include<stdio.h>
int main()
{
    char str1[50], str2[50], i, j;
    printf("enter 1st string");
    scanf("%s",str1);
    printf("enter 2nd string");
    scanf("%s",str2);
     
    for(i=0; str1[i]!='\0';++i)
      for(j=0;str2[j]!='\0'; ++j, ++i)
      {
          str1[i]=str2[j];
      }
      str1[i]=str2[j];
      printf("output:%s",str1);
      
}