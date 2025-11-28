#include<stdio.h>
int main()
{
int a,b;
                          // plus sign
for(a=1;a<=9;a++)
{
    for(b=1;b<=9;b++)
    if(a==5||b==5)
    {
        printf("*");
    }
    else
    {
        printf(" ");
    }
    printf("\n");
}
return 0;
}