// 15. Write a program to check if one string is present in another using strstr().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char mainString[100], searchString[50];
    cout << "Enter main string: ";
    cin.getline(mainString, 100);
    cout << "Enter string to check: ";
    cin.getline(searchString, 50);
    if (strstr(mainString, searchString) != NULL)
        cout << "The string is present";
    else
        cout << "The string is not present";
    return 0;
}
