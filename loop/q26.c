#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("enter the number");
    scanf("%d", &a);
    for (b = 2; b <= a / 2; b++)
    {
        if (a % b == 0)
        {
            c = 0;
            break;
        }
    }
    if (c == 1 && a > 1)
    {
        printf("%d is prime number", a);
    }
    else
    {
        printf("%d is composite", a);
    }
    return 0;
}