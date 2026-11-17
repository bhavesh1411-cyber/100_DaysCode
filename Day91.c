// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s;
    char label[16];

    /* Read "Name: <name>" */
    if (scanf("%15s %99[^\n]", label, s.name) != 2)
    {
        return 0;
    }

    /* Read "Roll: <roll_no>" */
    if (scanf("%15s %d", label, &s.roll_no) != 2)
    {
        return 0;
    }

    /* Read "Marks: <marks>" */
    if (scanf("%15s %d", label, &s.marks) != 2)
    {
        return 0;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
