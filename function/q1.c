#include<stdio.h>
int cube(int n)
{
return n*n*n;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("cube of this number is %d",cube(n));
    return 0;
}