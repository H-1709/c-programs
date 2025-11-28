#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *hr = fopen("example.txt", "w");
    char a[100];
    fprintf(hr, "%s", "hi hir rajyaguru");
    fclose(hr);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     FILE *hr = fopen("example.txt", "r");
//     char word[100];
//     while (fscanf(hr, "%s", word) != EOF)
//     {
//         printf("%s ", word);
//     }
//     fclose(hr);
//     return 0;
// }