#include <stdio.h>
int main()
{
    int a, b, c, total, count = 0, ans;
    printf("enter the number ");
    scanf("%d", &a);
    printf("armstrong numbers betwen 1 to %d are\n", a);
    for (int j = 1; j <= a; j++)
    {
        c = j;
        count = 0;
        total = 0;
        while (c > 0)
        {
            c /= 10;
            count++;
        }
        c = j;
        while (c > 0)
        {
            b = c % 10;
            ans = 1;
            for (int i = 1; i <= count; i++)
            {
                ans *= b;
            }
            total = total + (ans);
            c = c / 10;
        }
        if (j == total)
        {
            printf("%d\n", j);
        }
    }
    return 0;
}
