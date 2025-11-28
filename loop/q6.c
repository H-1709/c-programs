#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("enter the number");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        sum+=i;
    }
    printf("sum of 1 to %d is:%d",a,sum);
    return 0;
}