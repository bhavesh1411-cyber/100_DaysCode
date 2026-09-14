//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    int n, count[10] = {0}, i, max = 0;

    scanf("%d", &n);

    while (n > 0) {
        count[n % 10]++;
        n = n / 10;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > count[max]) {
            max = i;
        }
    }

    printf("%d\n", max);

    return 0;
}