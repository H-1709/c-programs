#include <stdio.h>
int find_max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
int find_min(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Maximum: %d\n", find_max(num1, num2));
    printf("Minimum: %d\n", find_min(num1, num2));
    return 0;
}