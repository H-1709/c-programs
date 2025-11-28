#include <stdio.h>
int evenorodd(int i, int n)
{
    if (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        return evenorodd(i + 1, n);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i, n;
    printf("Enter starting number = ");
    scanf("%d", &i);
    printf("Enter ending number = ");
    scanf("%d", &n);
    printf("Even numbers between %d and %d are\n",i,n);
    evenorodd(i, n);
    return 0;
}