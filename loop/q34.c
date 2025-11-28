//strong number
//numer of which digit's factorial's multiplication is equal to the original number
#include <stdio.h>
int main()
{
    int a, b,count, sum = 0;
    printf("Enter a number");
    scanf("%d", &a);
    b = a;
    while (b != 0)
    {
        count = b % 10;
        int fact = 1;
        for (int i = 1; i <= count; i++)
        {
            fact *= i;
        }
        sum += fact;
        b /= 10;
    }
    if (sum == a)
    {
        printf("this is a strong number");
    }
    else
    {
        printf("this is not a strong number");
    }
    return 0;
}