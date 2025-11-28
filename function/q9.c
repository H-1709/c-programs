#include <stdio.h>
int perfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}
int print_perfect(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (perfect(i))
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    int start, end;
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    printf("Perfect numbers between %d and %d are:\n", start, end);
    print_perfect(start, end);
    return 0;
}