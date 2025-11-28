#include <stdio.h>
int main()
{
    int a[100], b[100];
    for (int i = 0; i <= 5; i++)
    {
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        b[i] = a[i];
        printf("%d\n", b[i]);
    }
    return 0;
}