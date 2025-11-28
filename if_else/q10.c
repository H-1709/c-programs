#include <stdio.h>

int main()
{
    int weekNum;

    printf("Enter week number (1-7): ");
    scanf("%d", &weekNum);

    if (weekNum == 1)
        printf("Monday");
    else if (weekNum == 2)
        printf("Tuesday");
    else if (weekNum == 3)
        printf("Wednesday");
    else if (weekNum == 4)
        printf("Thursday");
    else if (weekNum == 5)
        printf("Friday");
    else if (weekNum == 6)
        printf("Saturday");
    else if (weekNum == 7)
        printf("Sunday");
    else
        printf("Invalid week number");

    return 0;
}