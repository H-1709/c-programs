#include<stdio.h>
int main()
{
int a,b;
               //inverted mirror right triangle
for(a=1;a<=5;a++)
{
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
    for(b=a;b<=5;b++)
    {
        printf("*");
    }
    printf("\n");
}
//                      mirrored right triangle
// for(a=1;a<=5;a++)
// {
//     for(b=a;b<=5;b++)
//     {
//         printf(" ");
//     }
//     for(b=1;b<=a;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a,b;
// //              hollow  inverted mirror right triangle
// for(a=1;a<=5;a++)
// {
//     for(b=1;b<=a;b++)
//     {
//         printf(" ");
//     }
//     for(b=a;b<=5;b++)
//     if(a==b||b==5||a==1)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
// }
                    // hollow mirrored right triangle
// for(a=1;a<=5;a++)
// {
//     for(b=a;b<=5;b++)
//     {
//         printf(" ");
//     }
//     for(b=1;b<=a;b++)
//     if(a==b||b==1||a==5)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
}
