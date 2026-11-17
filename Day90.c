// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender
{
    MALE,    /* 0 */
    FEMALE,  /* 1 */
    OTHER    /* 2 */
};

struct Person
{
    enum Gender gender;
};

int main(void)
{
    char input[64];
    struct Person p;

    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        return 0;
    }

    /* Remove trailing newline, if present. */
    input[strcspn(input, "\n")] = '\0';

    /* Expect format: Gender=VALUE */
    char *eq = strchr(input, '=');
    if (eq == NULL)
    {
        printf("Invalid input\n");
        return 0;
    }

    char *value = eq + 1;

    if (strcmp(value, "MALE") == 0)
    {
        p.gender = MALE;
    }
    else if (strcmp(value, "FEMALE") == 0)
    {
        p.gender = FEMALE;
    }
    else if (strcmp(value, "OTHER") == 0)
    {
        p.gender = OTHER;
    }
    else
    {
        printf("Invalid gender\n");
        return 0;
    }

    switch (p.gender)
    {
    case MALE:
        printf("Male\n");
        break;
    case FEMALE:
        printf("Female\n");
        break;
    case OTHER:
        printf("Other\n");
        break;
    default:
        printf("Invalid gender\n");
        break;
    }

    return 0;
}
