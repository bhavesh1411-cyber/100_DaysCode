//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main()
{
    int i, n;
    int arr[5] = {12, 56, 34, 26, 86};
    int f = 0;

    printf("Enter the Element: ");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            printf("Element is found at index %d\n", i);
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        printf("Element is not matched\n");
    }

    return 0;
}