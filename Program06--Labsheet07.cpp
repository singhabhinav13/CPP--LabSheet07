// 6. Write a program to join first name and last name using strcat().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char firstName[50], lastName[50], fullName[100];
    cout << "Enter first name: "; cin >> firstName;
    cout << "Enter last name: "; cin >> lastName;
    strcpy(fullName, firstName);
    strcat(fullName, " ");        // add a space between the names
    strcat(fullName, lastName);
    cout << "Full name: " << fullName;
    return 0;
}
