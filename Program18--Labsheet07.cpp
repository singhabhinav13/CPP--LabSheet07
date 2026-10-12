// 18. Write a program to copy only first 5 characters of one string to another using strncpy().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char sourceString[100], destinationString[100];
    cout << "Enter a string: ";
    cin.getline(sourceString, 100);
    strncpy(destinationString, sourceString, 5);
    destinationString[5] = '\0';   // strncpy does not add the end character itself
    cout << "First 5 characters: " << destinationString;
    return 0;
}
