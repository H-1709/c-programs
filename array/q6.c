#include <stdio.h>
int main()
{
    int a[10], even = 0, odd = 0;
    for (int i = 0; i <= 4; i++)
    {
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("even count %d\n", even);
    printf("odd count %d", odd);
    return 0;
}