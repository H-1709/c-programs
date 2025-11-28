// #include<stdio.h>
// int main()
// {
// int a,b;
// for(a=1;a<=5;a++)
// {
//     for(b=a;b<=5;b++)
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
//         printf(" ");
//     }
//     for(b=1;b<=a;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// return 0;
//}
                                              //left but differnt
#include<stdio.h>
int main()
{
int a,b;
for(a=1;a<=5;a++)
{
    for(b=a;b<=5;b++)
    {
        printf(" ");
    }
    for(b=a;b<=5;b++)
    {
        printf(" ");
    }
    for(b=1;b<=a;b++)
    {
        printf("*");
    }
    printf("\n");
}
for(a=2;a<=5;a++)
{
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
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
return 0;
}                                              