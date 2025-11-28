// #include <stdio.h>
// int main()
// {
//     int num, digit, count[10] = {0};
//     printf("enter the number");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         digit = num % 10;
//         num /= 10;
//         count[digit]++;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (count[i] != 0)
//             printf("frequency of %d=%d\n", i, count[i]);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int num, count = 0, b, c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
    printf("enter a number");
    scanf("%d", &num);
    while (num > 0)
    {
        b = num % 10;
        if (b == 0)
        {
            c0++;
        }
        if (b == 1)
        {
            c1++;
        }
        if (b == 2)
        {
            c2++;
        }
        if (b == 3)
        {
            c3++;
        }
        if (b == 4)
        {
            c4++;
        }
        if (b == 5)
        {
            c5++;
        }
        if (b == 6)
        {
            c6++;
        }
        if (b == 7)
        {
            c7++;
        }
        if (b == 8)
        {
            c8++;
        }
        if (b == 9)
        {
            c9++;
        }
        num = num / 10;
    }
    printf("0=%d\n", c0);
    printf("1=%d\n", c1);
    printf("2=%d\n", c2);
    printf("3=%d\n", c3);
    printf("4=%d\n", c4);
    printf("5=%d\n", c5);
    printf("6=%d\n", c6);
    printf("9=%d\n", c7);
    printf("7=%d\n", c8);
    printf("8=%d\n", c9);
    return 0;
}