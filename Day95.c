// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LEN 100

struct Student
{
    char name[NAME_LEN];
    int roll_no;
    int marks;
};

/* Function that returns the structure of the student with the highest marks. */
struct Student find_top_student(struct Student students[], int n)
{
    struct Student top = students[0];

    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > top.marks)
        {
            top = students[i];
        }
    }

    return top;
}

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS)
    {
        return 0;
    }

    struct Student students[MAX_STUDENTS];

    for (int i = 0; i < n; i++)
    {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3)
        {
            return 0;
        }
    }

    struct Student top = find_top_student(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    return 0;
}
