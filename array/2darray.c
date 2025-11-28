#include<stdio.h>
int main()
{
int a[10][10];
int i,j;
for (int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
{
    printf("enter the number");
    scanf("%2d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
        printf("%2d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}