#include <stdio.h>
int main()
{
    char a[100];
    int length = 0;
    printf("Input the string: ");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("%c ", a[i]);
    }
    return 0;
}