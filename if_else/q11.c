#include <stdio.h>

int main()
{
    int monthNum;

    printf("Enter month number (1-12): ");
    scanf("%d", &monthNum);

    if (monthNum == 2)
        printf("28 or 29 days");
    else if (monthNum == 4 || monthNum == 6 || monthNum == 9 || monthNum == 11)
        printf("30 days");
    else if (monthNum == 1 || monthNum == 3 || monthNum == 5 || monthNum == 7 || monthNum == 8 || monthNum == 10 || monthNum == 12)
        printf("31 days");
    else
        printf("Invalid month number");

    return 0;
}