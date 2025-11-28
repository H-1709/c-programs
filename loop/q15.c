#include<stdio.h>
int main()
{
int num,product=1;
printf("write the number here:");
scanf("%d",&num);
while(num!=0)
{
    product*=num%10;
    num/=10;
}
printf("product of given number is=%d\n",product);
return 0;
}