#include <stdio.h>
int main()
{
    int num, power, ans = 1;
    printf("enter the number");
    scanf("%d", &num);
    printf("enter the power");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        ans *= num;
    }
    printf("%d raised to the power of %d is =%d\n",num,power,ans);
    return 0;
}