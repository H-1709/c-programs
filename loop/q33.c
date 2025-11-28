#include <stdio.h>
int main()
{
    int num, sum;
    printf("enter te number");
    scanf("%d", &num);
    printf("perfect numbers between 1 to %d are\n", num);
    for (int i = 1; i < num; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}