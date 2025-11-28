#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("enter name");
    gets(a);
    int d = strlen(a);
    printf("%d", d);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[100];
//     printf("enter name");
//     gets(a);
//     printf("%s", a);
// }