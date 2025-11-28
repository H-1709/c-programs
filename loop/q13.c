// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter a=");
//     scanf("%d", &a);
//     printf("enter b=");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("a=%d\n", a);
//     printf("b=%d\n", b);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a, b, c = 1, d;
    printf("enter the number ");
    scanf("%d", &a);
    d = a;
    b = a % 10; // last digit
    while (a > 10)
    {
        a = a / 10; // first digit
        c = c * 10;
    }
    d = d - b; // whole number - last digit
    d = d + a; // whole number + first digit
    d = d - (a * c);
    d = d + (b * c);
    printf("swaped number=%d\n", d);
    return 0;
}