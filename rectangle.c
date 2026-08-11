// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>

float main()
{
    float  lenght , breadth, area, perimeter;
    printf("Enter the lenght of the rectangle:");
    scanf("%f", &lenght);
    printf("Enter the breadth of the rectangle:");
    scanf("%f", &breadth);
    area = lenght*breadth;
    perimeter = 2*(lenght+breadth);
    printf("Area of the rectangle of the given length and breadth is %.2f\n", area);
    printf("The Perimeter of the rectangle of the given length and breadth is %.2f\n", perimeter);
    return 0;
}