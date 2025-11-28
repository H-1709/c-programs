#include <stdio.h>
int main()
{
    int a = 2,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while (a<=n)
    {
        sum+=a;
        a += 2;
    }
    printf("Sum of all even numbers from 1 to %d=%d\n",n,sum);
    return 0;
}