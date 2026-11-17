// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

enum Choice
{
    ADD,      /* 0 */
    SUBTRACT, /* 1 */
    MULTIPLY  /* 2 */
};

int main(void)
{
    char op[16];
    int a, b;
    enum Choice choice;

    if (scanf("%15s %d %d", op, &a, &b) != 3)
    {
        return 0;
    }

    if (op[0] == 'A' && op[1] == 'D' && op[2] == 'D')
    {
        choice = ADD;
    }
    else if (op[0] == 'S' && op[1] == 'U' && op[2] == 'B')
    {
        choice = SUBTRACT;
    }
    else if (op[0] == 'M' && op[1] == 'U' && op[2] == 'L')
    {
        choice = MULTIPLY;
    }
    else
    {
        printf("Invalid choice\n");
        return 0;
    }

    switch (choice)
    {
    case ADD:
        printf("%d\n", a + b);
        break;
    case SUBTRACT:
        printf("%d\n", a - b);
        break;
    case MULTIPLY:
        printf("%d\n", a * b);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
