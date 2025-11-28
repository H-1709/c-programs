#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, x1, x2;
    printf("enter number");
    scanf("%d", &a);
    printf("enter number");
    scanf("%d", &b);
    printf("enter number");
    scanf("%d", &c);
    d = b * b - 4 * a * c;
    switch (d > 0)
    {
    case 1:
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("root are different\n");
        printf("%d\n", &x1);
        printf("%d\n", &x2);
        break;
    case 0:
        switch (d == 0)
        {
        case 1:
            x1 = (-b / (2 * a));
            printf("root are same");
            printf("x1=x2=%d\n", x1);
            break;
        default:
            printf("roots are complex and can not be found");
            break;
        }
    }
    return 0;
}