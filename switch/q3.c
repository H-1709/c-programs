#include <stdio.h>
int main()
{
    char a;
    printf("enter any character");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'O':
    case 'o':
    case 'u':
    case 'U':
        printf("this is vowel");
        break;
    default:
        printf("this is consonant");
        break;
    }
    return 0;
}