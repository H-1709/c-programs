#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 1; i <= 5; i++)
    {
        printf("ENTER THE NUMBER");
        scanf("%d", &a[i]);
    }
    for (int j = 1; j <= 5; j++)
    {
        if (a[j] < 0)
        {
            printf("%d\n", a[j]);
        }
    }
}
