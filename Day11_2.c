// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>

int main()

{
    float Profit, cp, sp;
    /*
        here cp is cost price
             sp is selling price
    */
    printf("Enter cost price: %f", cp);
    scanf("%f", &cp);

    printf("Enter selling price: %f", sp);
    scanf("%f", &sp);

    float profit = sp - cp;
    float loss = cp - sp;
    float profit_percent = (profit / cp) * 100;
    float loss_percent = (loss / cp) * 100;

    if (sp > cp)
    {
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profit_percent);
    }

    else if (cp > sp)
    {
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", loss_percent);
    }

    else
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
