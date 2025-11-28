#include <stdio.h>
int is_armstrong(int num)
{
    int sum = 0, temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return (sum == num);
}
int print_armstrong(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (is_armstrong(i))
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
    printf("Armstrong numbers between %d and %d are:\n ", start, end);
    print_armstrong(start, end);
    return 0;
}
