#include <stdio.h>
int main()
{
    int b[100], pos, num;
    for (int i = 0; i <= 5; i++)
    {
        printf("enter the number");
        scanf("%d", &b[i]);
    }
    printf("enter the position");
    scanf("%d", &pos);
    printf("enter the number");
    scanf("%d", &num);
    for (int i = 6; i >= pos; i--)
    {
        b[i] = b[i - 1];
    }
    b[pos] = num;
    for (int i = 0; i <= 6; i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}