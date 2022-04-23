#include<stdio.h>
void main()
{
    int i=6,j=7,z;
     
    z= i++ + ++i - j-- - --j;
    printf("%d",z);

}