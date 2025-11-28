#include <stdio.h>

int main()
{
    char a[100];
    printf("Input the string: ");
    gets(a);
    printf("The string you entered is: %s", a); 
    return 0;
}