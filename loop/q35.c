#include <stdio.h>

int main()
{
    int a, b, count;
    printf("Enter a number");
    scanf("%d", &a);
    printf("strong number between 1 to %d are\n", a);

    for (int i = 1; i < a; i++)
    {
        int sum = 0;
        b = i;
        while (b != 0)
        {
            count = b % 10;
            b /= 10;
            sum += (count * (count + 1)) / 2;
        }
        if (sum == i)
        {
            printf("%d", i);
        }
    }
    return 0;
}