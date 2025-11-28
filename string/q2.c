#include <stdio.h>
int main()
{
    char a[100];
    int lenth = 0;
    printf("Input the string: ");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        lenth++;
    }
    printf("the lenth of string is: %d ", lenth);
    return 0;
}