#include<stdio.h>
int main()
{
int num,sum=0;
printf("write the number here:");
scanf("%d",&num);
while(num!=0)
{
    sum+=num%10;
    num/=10;
}
printf("sum of given number is=%d\n",sum);
return 0;
}