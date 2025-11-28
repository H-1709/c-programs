#include <stdio.h>

int main()
{
    float phy, chem, bio, math, comp, total, percentage;

    printf("Enter marks of five subjects out of 100:\n");
    printf("Physics: ");
    scanf("%f", &phy);
    printf("Chemistry: ");
    scanf("%f", &chem);
    printf("Biology: ");
    scanf("%f", &bio);
    printf("Mathematics: ");
    scanf("%f", &math);
    printf("Computer: ");
    scanf("%f", &comp);

    total = phy + chem + bio + math + comp;
    percentage = (total / 500) * 100;

    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A");
    else if (percentage >= 80)
        printf("Grade: B");
    else if (percentage >= 70)
        printf("Grade: C");
    else if (percentage >= 60)
        printf("Grade: D");
    else if (percentage >= 40)
        printf("Grade: E");
    else
        printf("Grade: F");

    return 0;
}