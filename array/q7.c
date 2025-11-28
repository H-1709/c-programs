#include <stdio.h>
int main()
{
    int a[10], count;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    printf("Count of negative numbers are %d", count);
    return 0;
}