#include<stdio.h>
int main()
{
int a,b;
for(a=1;a<=5;a++)
{
                       // simple   
    for(b=a;b<=5;b++)
    {
        printf(" ");
    }
    for(b=1;b<=5;b++)
    {
        printf("*");
    }
//                     //  mirrored rhombus.
//     for(b=1;b<=a;b++)
//     {
//         printf(" ");
//     }
//     for(b=1;b<=5;b++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// return 0;
// }
                            //   hollow rhombus
// #include<stdio.h>
// int main()
// {
// int a,b;
// for(a=1;a<=5;a++)
// {
// for(b=a;b<=5;b++)
//     {
//         printf(" ");
//     }
//     for(b=1;b<=5;b++)
//     if(a==1||a==5||b==1||b==5)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
}
return 0;
}
                          //mirrored hollow rhombus
#include<stdio.h>
int main()
{
int a,b;
for(a=1;a<=5;a++)
{
    for(b=1;b<=a;b++)
    {
        printf(" ");
    }
    for(b=1;b<=5;b++)
    if(a==1||a==5||b==1||b==5)
    {
        printf("*");
    }
    else
    {
        printf(" ");
    }
    printf("\n");
}
}