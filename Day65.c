// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    int freq[26] = {0};
    int c;
    int word = 0;        // 0 = outside a word, 1 = inside a word
    int wordCount = 0;   // which word we're on (1 = s, 2 = t)
    int lenS = 0, lenT = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            if (!word) {
                word = 1;
                wordCount++;
            }
            if (wordCount == 1) {
                freq[c - 'a']++;
                lenS++;
            } else if (wordCount == 2) {
                freq[c - 'a']--;
                lenT++;
            }
        } else {
            word = 0;
        }
    }

    int isAnagram = (lenS == lenT);
    for (int i = 0; i < 26 && isAnagram; i++)
        if (freq[i] != 0)
            isAnagram = 0;

    printf(isAnagram ? "Anagram\n" : "Not Anagram\n");
    return 0;
}