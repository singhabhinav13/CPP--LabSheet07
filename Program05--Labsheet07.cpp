// 5. Write a program to concatenate two strings using strcat().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char firstString[100], secondString[50];
    cout << "Enter first string: ";
    cin.getline(firstString, 50);
    cout << "Enter second string: ";
    cin.getline(secondString, 50);
    strcat(firstString, secondString);   // secondString is appended to firstString
    cout << "Concatenated string: " << firstString;
    return 0;
}
