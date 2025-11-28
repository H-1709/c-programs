#include <stdio.h>
int sum_of_n(int i, int n, int sum)
{
    if (i <= n)
    {
        sum = sum + i;
        return sum_of_n(i + 1, n, sum);
    }
    else
    {
        printf("Sum of natural number till %d = %d",n, sum);
        return 0;
    }
}
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter end point = ");
    scanf("%d", &n);
    sum_of_n(i, n, sum);
    return 0;
}