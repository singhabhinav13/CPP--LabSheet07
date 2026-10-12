// 7. Write a program to compare two strings using strcmp().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char firstString[100], secondString[100];
    cout << "Enter first string: ";
    cin.getline(firstString, 100);
    cout << "Enter second string: ";
    cin.getline(secondString, 100);
    int comparisonResult = strcmp(firstString, secondString);
    if (comparisonResult == 0) cout << "Both strings are equal";
    else if (comparisonResult < 0) cout << "First string is smaller (comes first alphabetically)";
    else cout << "First string is greater (comes later alphabetically)";
    return 0;
}
