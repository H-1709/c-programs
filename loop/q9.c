#include<stdio.h>
int main()
{
int num,n;
printf("enter any number:");
scanf("%d",&num);
for(n=1;n<=10;n++)
{
    printf("%d x %d = %d\n",num,n,num*n);
}
return 0;
}