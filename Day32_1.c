//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1, n2, a[100], i;

    scanf("%d", &n1);           
    for (i = 0; i < n1; i++) 
        scanf("%d", &a[i]);        

    scanf("%d", &n2);              
    for (i = n1; i < n1 + n2; i++) 
        scanf("%d", &a[i]);        

    for (i = 0; i < n1 + n2; i++) 
        printf("%d ", a[i]);

    return 0;
}