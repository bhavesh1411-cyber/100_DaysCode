#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the lenght of a:");
    scanf("%d", &a);

    printf("Enter the lenght of b:");
    scanf("%d", &b);

    printf("Enter the lenght of c:");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("It is an Equilateral Triangle\n");
    }
    else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
    {
        printf("It is an Right Angled Triangle\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("It is an Isosceles Triangle\n");
    }
    else
    {
        printf("It is an Scalene Triangle\n");
    }

    return 0;
}