#include <stdio.h>
int main()
{
    int a, b, c, total, count = 0, ans;
    printf("enter the number ");
    scanf("%d", &a);
    c = a;
    while (a > 0)
    {
        a /= 10;
        count++;
    }
    a = c;
    while (a > 0)
    {
        b = a % 10;
        ans = 1;
        for (int i = 1; i <= count; i++)
        {
            ans *= b;
        }
        total = total + (ans);
        a=a/10;
    }
    if (c == total)
    {
        printf("this is armstrong number");
    }
    else
    {
        printf("this is not armstrong number");
    }
    return 0;
}