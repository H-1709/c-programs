#include <stdio.h>
int reverse(int i, int rev)
{
    int l;
    if (i > 0)
    {
        rev = (rev * 10) + i%10;
        i = i / 10;
        return reverse(i, rev);
    }
    else
    {
        return rev;
    }
}
int main()
{
    int num, rev = 0;
    printf("Enter any number = ");
    scanf("%d", &num);
    rev = reverse(num, rev);
    printf("Reverse number = %d", rev);
    return 0;
}