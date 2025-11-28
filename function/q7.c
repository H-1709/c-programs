#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int is_strong(int num)
{
    int sum = 0, temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}
int print_strong(int lower, int upper)
{
    printf("Strong numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++)
    {
        if (is_strong(i))
            printf("%d ", i);
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

    print_strong(lower, upper);

    return 0;
}
