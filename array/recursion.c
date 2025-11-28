#include <stdio.h>
int oneton(int a, int n)
{
    if (a <= n)
    {
        printf("%d\n",a);
            a++;
        return oneton(a,n);
    }
}
int main()
{
    int a=1,n;
    printf("enter");
    scanf("%d",&n);
    oneton (a,n);
}