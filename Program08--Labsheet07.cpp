// 8. Write a program to check if two strings are equal (case-sensitive) using strcmp().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char firstString[100], secondString[100];
    cout << "Enter first string: ";
    cin.getline(firstString, 100);
    cout << "Enter second string: ";
    cin.getline(secondString, 100);
    // strcmp is case-sensitive, so "Hello" and "hello" are NOT equal
    if (strcmp(firstString, secondString) == 0) cout << "Strings are equal";
    else cout << "Strings are not equal";
    return 0;
}
