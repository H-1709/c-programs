// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("enter the number");
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("enter the number");
    scanf("%d", &a);
    while (i <= a)
    {
        printf("%d. hi\n",i);
        i++;
    }
    return 0;
}