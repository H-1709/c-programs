#include<stdio.h>
int main()
{
int a,b,c,LCM;
printf("enter the first number");
scanf("%d",&a); 
printf("enter the second number");
scanf("%d",&b); 
for (int i =1;i<=a &&i<=b ; i++)
{
    if(a%i==0 && b%i==0)
    {
        c=i;
    }
}
LCM=a*b/c;
printf("HCF is:%d\n",LCM);
return 0;
}