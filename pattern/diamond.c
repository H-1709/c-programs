#include<stdio.h>
int main()
{
int a,b;
                            // half diamond 
// for (a=1;a<=5; a++)
// {
//     for(b=1;b<=a;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// for (a=1;a<=5; a++)
// {
//     for(b=a;b<=4;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
                            //   diamond
for(a=1;a<=5;a++)
{
    for(b=a;b<=5;b++)
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
    for(b=a;b<=5;b++)
    {
        printf(" ");
    }
    printf("\n");
}
for(a=2;a<=5;a++)
{
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
    for(b=a;b<=5;b++)
    {
        printf("*");
    }
    for(b=a;b<=4;b++)
    {
        printf("*");
    }
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
    printf("\n");
}
                       //hollow diamond
// for(a=1;a<=5;a++)
// {
//     for(b=a;b<=5;b++)
//     {
//         printf("*");
//     }
//     for(b=1;b<=a;b++)
//     {
//         printf(" ");
//     }
//     for(b=2;b<=a;b++)
//     {
//         printf(" ");
//     }
//     for(b=a;b<=5;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// for(a=2;a<=5;a++)
// {
//     for(b=1;b<=a;b++)
//     {
//         printf("*");
//     }
//     for(b=a;b<=5;b++)
//     {
//         printf(" ");
//     }
//     for(b=a;b<=4;b++)
//     {
//         printf(" ");
//     }
//     for(b=1;b<=a;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
return 0;
}