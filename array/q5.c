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
    int second_max = a[1];
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] > max)
        {
            second_max=max;
            max = a[i];
        }
        else if (a[i] > second_max)
        {
            second_max = a[i];
        }
    }
    printf("second largest number is %d",second_max);
    return 0;
}