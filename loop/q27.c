#include <stdio.h>
int main()
{
    int a, b, n, c;
    printf("enter the number");
    scanf("%d", &n);
    printf("prime numbers beetween1 to %d are=\n",n);
    for (a = 2; a <= n; a++)
    {
        c = 1;
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
            printf("%d\n",a);
        }
    }
    return 0;
}