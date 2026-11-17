// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS)
    {
        return 0;
    }

    struct Student students[MAX_STUDENTS];
    struct Student topper;
    int have_topper = 0;

    for (int i = 0; i < n; i++)
    {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3)
        {
            return 0;
        }

        if (!have_topper || students[i].marks > topper.marks)
        {
            topper = students[i];
            have_topper = 1;
        }
    }

    if (have_topper)
    {
        printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);
    }

    return 0;
}
