// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Color
{
    RED,    /* 0 */
    YELLOW, /* 1 */
    GREEN   /* 2 */
};

/* Parallel array holding the names of the enum members, in the same order. */
const char *color_names[] = {"RED", "YELLOW", "GREEN"};

int main(void)
{
    /* Number of enum members equals the size of the names array. */
    int count = sizeof(color_names) / sizeof(color_names[0]);

    for (int i = 0; i < count; i++)
    {
        printf("%s=%d\n", color_names[i], i);
    }

    return 0;
}
