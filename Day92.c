// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

#define STUDENTS 5
#define NAME_LEN 100

struct Student
{
    char name[NAME_LEN];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student class[STUDENTS];

    printf("Enter details of %d students (Name Roll Marks):\n", STUDENTS);

    for (int i = 0; i < STUDENTS; i++)
    {
        if (scanf("%99s %d %d", class[i].name, &class[i].roll_no, &class[i].marks) != 3)
        {
            return 0;
        }
    }

    printf("\n%-10s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("----------------------------------------\n");

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%-10s %-10d %-10d\n", class[i].name, class[i].roll_no, class[i].marks);
    }

    return 0;
}
