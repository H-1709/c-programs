#include<stdio.h>
int main()
{
int a,b;
                                    // right triangle.
for(a=1;a<=5;a++)
{
    for(b=1;b<=a;b++)
    {
        printf("*");
    }
    printf("\n");
}

                               //inverted right triangle.
// for(a=1;a<=5;a++)
// {
//     for(b=a;b<=5;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
//}
return 0;
}
// #include<stdio.h>
// int main()
// {
// int a,b;
//                                     // hollow right triangle.
// for(a=1;a<=5;a++)
// {
//     for(b=1;b<=a;b++)
//     if(a==b|a==5||b==1)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
                                        //  hollow inverted triangle
// for(a=1;a<=5;a++)
// {
//     for(b=a;b<=5;b++)
//     if(a==b||a==1||b==5)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
// }
// }
