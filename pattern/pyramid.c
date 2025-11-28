#include<stdio.h>
int main()
{
int a,b;
for(a=1;a<=5;a++)
{
                       //hollow inverted pyramid
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
    for(b=a;b<=5;b++)
    // if(a==b||a==1)
    {
        printf("*");
    }
    // else
    // {
    //      printf(" ");
    // }
    for (b=a;b<=4;b++)
    // if(a==1||b==4)
    {
        printf("*");
    }
    // else
    // {
    //     printf(" ");
    // }
     printf("\n");
                    // hollow pyramid
    // for(b=a;b<=5;b++)
    // {
    //     printf(" ");
    // }
    // for(b=1;b<=a;b++)
    // if(a==5||b==1)
    // {
    //     printf("*");
    // }
    // else
    // {
    //     printf(" ");
    // }
    // for (b=2;b<=a;b++)
    // if(a==b||a==5||b==1)
    // {
    //     printf("*");
    // }
    // else
    // {
    //     printf(" ");
    // }
    // printf("\n");
}
return 0;
}