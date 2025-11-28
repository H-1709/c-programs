#include <stdio.h>
int even_or_odd_sum(int i, int n, int sum_e, int sum_o)
{
    if (i <= n)
    {
        if (i % 2 == 0)
        {
            sum_e = sum_e + i;
        }
        else
        {
            sum_o = sum_o + i;
        }
        return even_or_odd_sum(i + 1, n, sum_e, sum_o);
    }
    else
    {

        printf("Sum of even number = %d\n", sum_e);
        printf("Sum of odd number = %d\n", sum_o);
    }
}
int main()
{
    int i, n, sum_e = 0, sum_o = 0;
    printf("Enter starting number = ");
    scanf("%d", &i);
    printf("Enter ending number = ");
    scanf("%d", &n);
    even_or_odd_sum(i, n, sum_e, sum_o);
    return 0;
}