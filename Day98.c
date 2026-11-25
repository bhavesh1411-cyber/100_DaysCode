// Day 98 — Q148: Take two structs as input and check if they are identical.

/*
Input: Student1: Asha 101 90 / Student2: Asha 101 90
Output: Same
*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN 100

struct Student
{
    char name[NAME_LEN];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s1, s2;
    char label[16];

    char pipe[4];
    char label2[16];

    /* Read: Student1: <name> <roll_no> <marks> / Student2: <name> <roll_no> <marks> */
    if (scanf("%15s %99s %d %d %3s %15s %99s %d %d",
              label, s1.name, &s1.roll_no, &s1.marks,
              pipe, label2, s2.name, &s2.roll_no, &s2.marks) != 9)
    {
        return 0;
    }

    /* Compare all members of the two structures. */
    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}
