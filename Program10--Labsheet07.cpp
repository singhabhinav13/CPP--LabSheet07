// 10. Write a program to reverse a string using strrev().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[100];
    cout << "Enter a string: ";
    cin.getline(inputString, 100);
    strrev(inputString);   // reverses the string in place
    cout << "Reversed string: " << inputString;
    return 0;
}
