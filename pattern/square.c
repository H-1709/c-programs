                          //square
#include<stdio.h>
int main()
{
int a,b;
for(a=1;a<=5;a++)
{
    for(b=1;b<=5;b++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
// #include<stdio.h>
// int main()
// {
// int a,b;
// for(a=1;a<=5;a++)
// {
//     for (b=1;b<=5;b++)
//     if(a==1||a==5||b==1||b==5)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
// }
// return 0;
// }
                        // hollow square star pattern with diagonal
// #include<stdio.h>
// int main()
// {
// int a,b;
// for(a=1;a<=5;a++)
// {
//     for (b=1;b<=5;b++)
//     if(a==b||a+b==6||a==1||a==5||b==1||b==5)
//     {
//         printf("*");
//     }
//     else
//     {
//         printf(" ");
//     }
//     printf("\n");
// }
// return 0;
// }