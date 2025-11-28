#include <stdio.h>
#include <stdlib.h>
int main()
{
    int alp = 0, digit = 0, spe = 0;
    FILE *hr = fopen("exaple.txt", "r");
    char c;
    while ((c = fgetc(hr)) != EOF) 
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' ') || (c == '\n'))
        {
            alp++;
        }
        else if (c >= '0' && c <= '9')
        {
            digit++;
        }
        else
        {
            spe++;
        }
    }
    printf("alphabets in this file are: %d\n", alp);
    printf("digit in this file are: %d\n", digit);
    printf("special characters in this file are: %d\n", spe);
}