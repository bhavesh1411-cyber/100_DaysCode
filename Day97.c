// Day 97 — Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Input: Employee details entered and stored in file.
Output: Displays employee data read from file.
*/

#include <stdio.h>

#define NAME_LEN 100
#define FILENAME "employees.dat"

struct Employee
{
    char name[NAME_LEN];
    int id;
    float salary;
};

int main(void)
{
    struct Employee emp;
    FILE *fp;

    printf("Enter employee name: ");
    if (scanf("%99s", emp.name) != 1)
    {
        return 0;
    }

    printf("Enter employee ID: ");
    if (scanf("%d", &emp.id) != 1)
    {
        return 0;
    }

    printf("Enter employee salary: ");
    if (scanf("%f", &emp.salary) != 1)
    {
        return 0;
    }

    /* Write the structure to a binary file. */
    fp = fopen(FILENAME, "wb");
    if (fp == NULL)
    {
        perror("fopen");
        return 0;
    }

    if (fwrite(&emp, sizeof(struct Employee), 1, fp) != 1)
    {
        perror("fwrite");
        fclose(fp);
        return 0;
    }

    fclose(fp);

    /* Read the structure back from the binary file. */
    fp = fopen(FILENAME, "rb");
    if (fp == NULL)
    {
        perror("fopen");
        return 0;
    }

    if (fread(&emp, sizeof(struct Employee), 1, fp) != 1)
    {
        perror("fread");
        fclose(fp);
        return 0;
    }

    fclose(fp);

    printf("\nEmployee data read from file:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
