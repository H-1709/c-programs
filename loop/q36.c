#include <stdio.h>
int main()
{
    int n1, n2, n3, n;
    printf("enter the number");
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    printf("%d %d ", n1, n2);
    for (int i = 0; i < n; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}