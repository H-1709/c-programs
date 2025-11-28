#include <stdio.h>
struct kict
{
    int a, b;
    float c;
} obj;
int display()
{
    printf("%d\n", obj.a);
    printf("%d\n", obj.b);
}
int main()
{
    printf("enter the number");
    scanf("%d", &obj.a);
    printf("enter the number");
    scanf("%d", &obj.b);
    display();
}