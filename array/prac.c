#include <stdio.h>
int main()
{
    int a[100];
    for (int i = 0; i<100; i++)
    {
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}