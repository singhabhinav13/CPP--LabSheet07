// 4. Write a program to input two strings and check if they are equal using strcpy() and comparison.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char firstString[100], secondString[100], copiedString[100];
    cout << "Enter first string: ";
    cin.getline(firstString, 100);
    cout << "Enter second string: ";
    cin.getline(secondString, 100);
    strcpy(copiedString, firstString);   // copy first string into a new array
    // compare the copy with the second string character by character
    bool isEqual = true;
    if (strlen(copiedString) != strlen(secondString)) isEqual = false;
    else {
        for (int i = 0; i < strlen(copiedString); i++) {
            if (copiedString[i] != secondString[i]) {
                isEqual = false;
                break;
            }
        }
    }
    cout << (isEqual ? "Strings are equal" : "Strings are not equal");
    return 0;
}
