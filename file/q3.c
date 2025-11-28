#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count=0;
    FILE *hr = fopen("exaple.txt", "r");
    char str[100];
    while (fgets(str, sizeof(str), hr) != NULL)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}