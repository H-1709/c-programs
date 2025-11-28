//question 17 
#include<stdio.h>
int main()
{
int num,reversed=0,original;
printf("enter");
scanf("%d",&num);
original=num;
while(num!=0)
{
    reversed=reversed*10+num%10;
    num/=10;
}
if (reversed==original)
{
printf("this number is pallindrom");
}
else 
{
    printf("this number is not pallindrom");
}
return 0;
}