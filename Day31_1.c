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

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int temp;

    for(int i = 0; i < 2; i++) {
        temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}