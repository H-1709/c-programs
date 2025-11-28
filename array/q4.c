#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] > max)
        {
            max=a[i];
        }
        else if (a[i] < min)
        {
            min=a[i];
        }
    }
    printf("minimum %d\n", min);
    printf("maximum %d\n", max);
    return 0;
}