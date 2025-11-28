#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    switch (a < b)
    {
    case 1:
        printf("b is maximum");
        break;
    case 0:
        printf("a is maximum");
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}