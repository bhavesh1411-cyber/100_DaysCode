//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, i, a[100], key, low = 0, mid;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);

    int high = n - 1;
    int result = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            result = mid;
            break;
        }
        if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("-1\n");

    return 0;
}