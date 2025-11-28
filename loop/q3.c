// #include <stdio.h>
// int main()
// {
//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         printf("%c\n", ch);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    char ch = 'a';
    while (ch <= 'z')
    {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}