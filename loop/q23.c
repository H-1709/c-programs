#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("enter the number");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    if (num < 0)
    {
        printf("factorial of negative number is not define");
    }
    else
    {
        printf("ans is %d\n", fact);
    }
    return 0;
}