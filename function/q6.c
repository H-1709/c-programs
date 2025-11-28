#include <stdio.h>
int is_prime()
{
    int a, i, n, c;
    for (a = 2; a <= n; a++)
    {
        c = 1;
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                c = 0;
                break;
            }
        }
        if (c == 1 && a > 1)
        {
            return 0;
        }
    }
}
int print_primes(int lower, int upper)
{
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++)
    {
        if (is_prime(i))
            printf("%d\n", i);
    }
    printf("\n");
}
int main()
{
    int lower, upper;
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);
    print_primes(lower, upper);
    return 0;
}
