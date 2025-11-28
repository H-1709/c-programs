#include <stdio.h>
int main()
{
    char a[100];
    int length = 0;
    printf("Input the string: ");
    gets(a);
        printf("%c ", strev(a));
    return 0;
}
