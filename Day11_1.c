// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main()
{
    int month;

    printf("Enter a Day number from (1-12):");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January has 31 Days\n");
        break;

    case 2:
        printf("Feburary has 28 in non leap year and 29 in leap year\n");
        break;

    case 3:
        printf("March has 31 Days\n");
        break;

    case 4:
        printf("April has 30 Days\n");
        break;

    case 5:
        printf("May has 31 Days\n");
        break;

    case 6:
        printf("June has 30 Days\n");
        break;

    case 7:
        printf("July has 31 Days\n");
        break;

    case 8:
        printf("August has 31 Days\n");
        break;

    case 9:
        printf("September has 30 Days\n");
        break;

    case 10:
        printf("October has 31 Days\n");
        break;

    case 11:
        printf("November has 30 Days\n");
        break;
        
    case 12:
        printf("December has 31 Days\n");
        break;
    }

    return 0;
}