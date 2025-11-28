#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count ;
    FILE *hr = fopen("example.txt", "r");
    char word[100];
    while (fscanf(hr, "%s", word) != EOF)
    {
        count++;
    }
    printf("numbers of words in file are: %d ", count);
    fclose(hr);
    return 0;
}