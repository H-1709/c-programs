#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter te number");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("THIS IS PERFECT NUMBER");
    }
    else
    {
        printf("THIS IS NOT PERFECT NUMBER");
    }
    return 0;
}