#include <stdio.h>
int prime(int num)
{
    int b, c = 1;
    for (b = 2; b <= num / 2; b++)
    {
        c = 1;
        if (num % b == 0)
        {
            c = 0;
            break;
        }
    }
    if (c == 1 && num > 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
int armstrong(int num)
{
    int b, c, total, count = 0, ans;
    c = num;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    num = c;
    while (num > 0)
    {
        b = num % 10;
        ans = 1;
        for (int i = 1; i <= count; i++)
        {
            ans *= b;
        }
        total = total + (ans);
        num = num / 10;
    }
    if (c == total)
    {
        printf("%d is armstrong number\n",num);
    }
    else
    {
        printf("this is not armstrong number\n");
    }
    // return 0;
}
int perfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if ((sum == num))
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not a perfect number\n", num);
    }
    // return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    armstrong(num);
    perfect(num);
    return 0;
}