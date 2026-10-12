// 14. Write a program to find a substring inside another string using strstr().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char mainString[100], subString[50];
    cout << "Enter main string: ";
    cin.getline(mainString, 100);
    cout << "Enter substring to find: ";
    cin.getline(subString, 50);
    char *foundPosition = strstr(mainString, subString);
    if (foundPosition != NULL)
        cout << "Substring found at position " << (foundPosition - mainString) + 1;
    else
        cout << "Substring not found";
    return 0;
}
