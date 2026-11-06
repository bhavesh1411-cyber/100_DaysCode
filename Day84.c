// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char ch;
    enum Status status;

    scanf(" %c", &ch);

    switch (ch)
    {
    case 'S':
        status = SUCCESS;
        break;
    case 'F':
        status = FAILURE;
        break;
    case 'T':
        status = TIMEOUT;
        break;
    default:
        printf("Invalid status\n");
        return 0;
    }

    switch (status)
    {
    case SUCCESS:
        printf("Operation successful\n");
        break;
    case FAILURE:
        printf("Operation failed\n");
        break;
    case TIMEOUT:
        printf("Operation timed out\n");
        break;
    }

    return 0;
}