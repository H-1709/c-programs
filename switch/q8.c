#include<stdio.h>
int cube (int a)
{
    return a*a*a;
}
int main ()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    printf ("this number cube is =%d",cube(a));
}