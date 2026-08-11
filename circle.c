// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

float main()
{
    float r, area, circumference;
    printf("Enter the radius of the circle: %f", r);
    scanf("%f", &r);
    area = 3.14 * r *r ;
    circumference = 2*3.14 * r ;
    printf("The area of the Circle is %.2f \n", area);
    printf("The circumference of the Circle is %.2f \n", circumference);
    return 0;
}
