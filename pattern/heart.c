                                    // heart sign
#include<stdio.h>
int main()
{
int a,b;
for(a=2;a<=3;a++)
{
    for(b=a;b<=3;b++)
    {
        printf(" ");
    }
    for(b=1;b<=a;b++)
    {
        printf("*");
    }
    for(b=2;b<=a;b++)
    {
        printf("*");
    }
    for(b=a;b<=3;b++)
    {
        printf(" ");
    }
    for(b=a;b<=2;b++)
    {
    printf(" ");
    }
    for(b=1;b<=a;b++)
    {
        printf("*");
    }
    for(b=2;b<=a;b++)
    {
        printf("*");
    }
    printf("\n");
}
for(a=1;a<=6;a++)
{
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
    for(b=a;b<=6;b++)
    {
        printf("*");
    }
    for(b=a;b<=5;b++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
