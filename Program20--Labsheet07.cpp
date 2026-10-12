// 20. Write a program to check whether two strings are anagrams using string functions.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char firstString[100], secondString[100];
    cout << "Enter first string: "; cin >> firstString;
    cout << "Enter second string: "; cin >> secondString;
    int firstLength = strlen(firstString), secondLength = strlen(secondString);
    // anagrams must have the same length
    if (firstLength != secondLength) {
        cout << "Not anagrams";
        return 0;
    }
    // convert to lowercase, then sort both strings
    for (int i = 0; i < firstLength; i++) {
        firstString[i] = tolower(firstString[i]);
        secondString[i] = tolower(secondString[i]);
    }
    for (int i = 0; i < firstLength - 1; i++) {
        for (int j = 0; j < firstLength - i - 1; j++) {
            if (firstString[j] > firstString[j + 1]) swap(firstString[j], firstString[j + 1]);
            if (secondString[j] > secondString[j + 1]) swap(secondString[j], secondString[j + 1]);
        }
    }
    // sorted anagrams become identical, so strcmp gives 0
    if (strcmp(firstString, secondString) == 0) cout << "Anagrams";
    else cout << "Not anagrams";
    return 0;
}
