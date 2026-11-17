// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

#define NAME_LEN 100

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[NAME_LEN];
    int id;
    struct Date joining_date;
};

int main(void)
{
    struct Employee e;
    char label[16];

    char pipe[4];

    /* Read "Employee: <name> |" */
    if (scanf("%15s %99s %3s", label, e.name, pipe) != 3)
    {
        return 0;
    }

    /* Read "ID: <id> |" */
    if (scanf("%15s %d %3s", label, &e.id, pipe) != 3)
    {
        return 0;
    }

    /* Read "Joining Date:" <day> <month> <year> */
    if (scanf("%15s %15s %d %d %d", label, label, &e.joining_date.day,
              &e.joining_date.month, &e.joining_date.year) != 5)
    {
        return 0;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id,
           e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}
