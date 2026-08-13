// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main()
{
    int n, s;
    
    printf("Enter the number of which you want the sum of n natural number:");
    scanf("%d", &n);

    s = n * (n + 1) / 2;

    printf("The sum of n natural numbers is %d\n", s);
    return 0;

}