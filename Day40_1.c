/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int s = 0; s <= m + n - 2; s++)
    {
        int start = (s - (n - 1) > 0) ? s - (n - 1) : 0;
        int end = (s < m - 1) ? s : m - 1;

        if (s % 2 == 1)
        {
            for (int i = start; i <= end; i++)
                printf("%d ", a[i][s - i]);
        }
        else
        {
            for (int i = end; i >= start; i--)
                printf("%d ", a[i][s - i]);
        }
    }
    printf("\n");

    return 0;
}