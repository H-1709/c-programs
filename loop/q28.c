#include <stdio.h>
int main()
{
    int a, b, n, c, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
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
        if (c == 1)
        {
            sum += a;
        }
    }
    printf("sum of prime numbers beetween1 to %d are\n", n, sum);
    return 0;
}