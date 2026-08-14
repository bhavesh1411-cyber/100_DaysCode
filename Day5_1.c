// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, A, ci, ct;
    /*
    Here p is principle amount
         r is rate of interst
         t is time
         si is simple interest
         A is amount
         ci is compound interest
         ct is compound total
    */
    printf("Enter the principle amount %f", p);
    scanf("%f", &p);

    printf("Ente the rate to interest %f", r);
    scanf("%f", &r);

    printf("Enter the time period %f", t);
    scanf("%f", &t);

    si = (p * r * t) / 100;
    A = p + si;
    ct = p * pow((1 + (r / 100)), t);
    ci = ct - p;

    printf("Simple Interest is %.2f\n", si);
    printf("Compound Interest is %.2f\n", ci);

    return 0;
}