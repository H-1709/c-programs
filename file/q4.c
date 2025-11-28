#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *hr = fopen("exaple.txt", "r");
    char c;
    while ((c = fgetc(hr)) != EOF) // (Eof)end -of- Code
    {
        putchar(c);
        printf("\n");
    }

    // FILE *hr = fopen("exaple.txt", "r");
    // char str[100];
    // while (fgets(str, sizeof(str), hr) != NULL)
    // {
    //     printf("%s", str);
    // }

    // FILE *hr= fopen("exaple.txt","w");
    //  char str[] ="Hello World! \n";
    //  fputs(str,hr);
    //  fclose(hr);

    //  FILE *hr= fopen("exaple.txt","w");
    //  fputc('H',hr);
    //  fputc('e',hr);
    //  fputc('l',hr);
    //  fputc('l',hr);
    //  fputc('o',hr);
    //  fputc('\n',hr);
    // printf("Data written to file successfully.\n");
    //  fclose(hr);

    // feof()
}