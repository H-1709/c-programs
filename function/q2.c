#include<stdio.h>
float diameter(float radius)
{
    return radius*2;
}
float circumference(float radius)
{
    float pi=3.14;
    return 2*pi*radius;
}
float area(float radius)
{
    float pi=3.14;
    return pi*radius*radius;
}
float main()
{
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    printf("diameter %.2f\n",diameter(radius));
    printf("circumference %.2f\n",circumference(radius));
    printf("area %.2f\n",area(radius));
}