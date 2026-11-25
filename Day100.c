// Day 100 — Q150: Use pointer to struct to modify and display data using -> operator.

/*
Input: Student pointer modifying values: John 106 91
Output: Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>

#define NAME_LEN 100

struct Student
{
    char name[NAME_LEN];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s;
    struct Student *ptr = &s; /* pointer to struct */

    if (scanf("%99s %d %d", ptr->name, &ptr->roll_no, &ptr->marks) != 3)
    {
        return 0;
    }

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
