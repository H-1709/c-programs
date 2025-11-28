#include <stdio.h>
int main()
{
    int num, b, reversed = 0;
    printf("enter");
    scanf("%d", &num);
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    while (reversed > 0)
    {
        b = reversed % 10;
        if (b == 0)
        {
            printf("zero ");
        }
        if (b == 1)
        {
            printf("one ");
        }
        if (b == 2)
        {
            printf("two ");
        }
        if (b == 3)
        {
            printf("three ");
        }
        if (b == 4)
        {
            printf("four ");
        }
        if (b == 5)
        {
            printf("five ");
        }
        if (b == 6)
        {
            printf("six ");
        }
        if (b == 7)
        {
            printf("seven ");
        }
        if (b == 8)
        {
            printf("eight ");
        }
        if (b == 9)
        {
            printf("nine ");
        }
        reversed = reversed / 10;
    }
    return 0;
}