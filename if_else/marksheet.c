#include<stdio.h>
int main()
{
    int a=44,b=40,c=50,d=39;
    printf("marksheet\n");
    printf("maths=%d\n",(a));
    printf("chemistry=%d\n",(b));
    printf("physics=%d\n",(c));
    printf("english=%d\n",(d));
    printf("obtained marks=%d\n",(a+b+c+d));
    printf("total marks=200\n");

    printf("percentage=%d\n",(a+b+c+d)*100/200);
    printf("average=%d\n",(a+b+c+d)/4);
    return 0;
}