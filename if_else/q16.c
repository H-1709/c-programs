// Write a program in c to calculate the telephone bill of a customer based on the following criteria.
// i. For the first 100 callls the minimum bill amount is 100 Rs.

// ii. For the next 50 calls Rs. 0.40 per call will be charged extra.

// iii. For the next 50 callls Rs. 0.50 per call will be charged extra.

// iv. For the calls beyond 200 Rs. 0.60 per call will be charged extra
#include <stdio.h>
int main()
{
    float call, bill;
    printf("enter the number of calls.");
    scanf("%f", &call);
    if (call <= 100)
    {
        bill = 100;
    }
    else if (call <= 150)
    {
        bill = 100 + (call - 100) * 0.40;
    }
    else if (call <= 200)
    {
        bill = 100 + 50 * 0.40 + (call - 150) * 0.50;
    }
    else
    {
        bill = 100 + 50 * 0.40 + 50 * 0.50 + (call - 200) * 0.60;
    }
    printf("total bill=%.2f\n", bill);
    return 0;
}