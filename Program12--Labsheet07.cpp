// 12. Write a program to find the first occurrence of a character in a string using strchr().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[100], searchChar;
    cout << "Enter a string: ";
    cin.getline(inputString, 100);
    cout << "Enter character to find: "; cin >> searchChar;
    char *firstOccurrence = strchr(inputString, searchChar);
    if (firstOccurrence != NULL)
        cout << "First occurrence at position " << (firstOccurrence - inputString) + 1;
    else
        cout << "Character not found";
    return 0;
}
