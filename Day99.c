// Day 99 — Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Input: Student allocated dynamically with details: Tina 105 88
Output: Name: Tina | Roll: 105 | Marks: 88
*/

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 100

struct Student
{
    char name[NAME_LEN];
    int roll_no;
    int marks;
};

int main(void)
{
    /* Allocate memory for one Student structure dynamically. */
    struct Student *s = malloc(sizeof(struct Student));
    if (s == NULL)
    {
        perror("malloc");
        return 1;
    }

    if (scanf("%99s %d %d", s->name, &s->roll_no, &s->marks) != 3)
    {
        free(s);
        return 0;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    /* Free the dynamically allocated memory. */
    free(s);

    return 0;
}
