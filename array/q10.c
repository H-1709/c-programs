#include <stdio.h>
int main()
{
    int a[100], b, pos, n;
    for (b = 1; b <= 5; b++)
    {
        printf("enter a[%d] : ", b);
        scanf("%d", &a[b]);
    }
    printf("pos : ");
    scanf("%d", &pos);
    for (b = 1; b <= 5; b++)
    {
        if (a[b] == a[pos])
        {
        }
        else
        {
            printf("\na[%d] : %d", b, a[b]);
        }
    }
}