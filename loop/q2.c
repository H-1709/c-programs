// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("enter the number");
//     scanf("%d", &a);
//     for (int i = a; i >= 1; i--)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d", &a);
    while (a >= 1)
    {
        printf("%d\n", a);
        a--;
    }
    return 0;
}