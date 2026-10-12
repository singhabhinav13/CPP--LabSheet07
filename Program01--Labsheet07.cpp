// 1. Write a program to input a string and find its length using strlen().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[100];
    cout << "Enter a string: ";
    cin.getline(inputString, 100);
    cout << "Length = " << strlen(inputString);
    return 0;
}
