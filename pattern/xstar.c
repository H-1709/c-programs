#include<stdio.h>
int main()
{
int a,b;
for(a=1;a<=9;a++)
                               // x star sign
{
    for(b=1;b<=9;b++)
    if(a==b||a+b==10)
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
