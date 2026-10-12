// 11. Write a program to check if a string is palindrome using strrev().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char originalString[100], reversedString[100];
    cout << "Enter a string: ";
    cin >> originalString;
    strcpy(reversedString, originalString);   // keep a copy of the original
    strrev(reversedString);
    if (strcmp(originalString, reversedString) == 0) cout << "Palindrome";
    else cout << "Not a palindrome";
    return 0;
}
