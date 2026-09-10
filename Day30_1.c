// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main(){
    int i,even=0,odd=0;

    int arr[10]={34,23,5,63,76,23,45,22,69,44};

    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        even++;

        else
        odd++;
    }

    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d\n", odd);
    return 0;
}