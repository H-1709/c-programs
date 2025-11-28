#include <stdio.h>

int main()
{
    int amount, notes;

    printf("Enter amount: ");
    scanf("%d", &amount);

    notes = 0;

    if (amount >= 2000)
    {
        notes += amount / 2000;
        amount %= 2000;
    }
    if (amount >= 500)
    {
        notes += amount / 500;
        amount %= 500;
    }
    if (amount >= 200)
    {
        notes += amount / 200;
        amount %= 200;
    }
    if (amount >= 100)
    {
        notes += amount / 100;
        amount %= 100;
    }
    if (amount >= 50)
    {
        notes += amount / 50;
        amount %= 50;
    }
    if (amount >= 20)
    {
        notes += amount / 20;
        amount %= 20;
    }
    if (amount >= 10)
    {
        notes += amount / 10;
        amount %= 10;
    }
    if (amount >= 5)
    {
        notes += amount / 5;
        amount %= 5;
    }
    if (amount >= 1)
    {
        notes += amount;
    }

    printf("Total number of notes: %d\n", notes);

    return 0;
}