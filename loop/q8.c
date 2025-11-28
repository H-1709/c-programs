#include <stdio.h>
int main()
{
    int a = 1, sum = 0, n;
    printf("enter tne number");
    scanf("%d", &n);
    while (a <= n)
    {
        if (a % 2 != 0)
        {
            sum += a;
        }
        a++;
    }
    printf("%d\n", sum);
    return 0;
}