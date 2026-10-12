// 13. Write a program to find the last occurrence of a character in a string using strrchr().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[100], searchChar;
    cout << "Enter a string: ";
    cin.getline(inputString, 100);
    cout << "Enter character to find: "; cin >> searchChar;
    char *lastOccurrence = strrchr(inputString, searchChar);
    if (lastOccurrence != NULL)
        cout << "Last occurrence at position " << (lastOccurrence - inputString) + 1;
    else
        cout << "Character not found";
    return 0;
}
