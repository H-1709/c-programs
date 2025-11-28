#include <stdio.h>
int power(int base, int exponent)
{
    int result = 1.0;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    int base;
    int exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, power(base, exponent));
    return 0;
}