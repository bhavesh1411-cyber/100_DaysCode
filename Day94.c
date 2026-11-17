// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

#define NAME_LEN 100

struct Student
{
    char name[NAME_LEN];
    int roll_no;
    int marks;
};

/* Function that accepts a structure by value and prints its members. */
void print_student(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void)
{
    struct Student s;
    char label[16];

    if (scanf("%15s %99s %d %d", label, s.name, &s.roll_no, &s.marks) != 4)
    {
        return 0;
    }

    print_student(s);

    return 0;
}
