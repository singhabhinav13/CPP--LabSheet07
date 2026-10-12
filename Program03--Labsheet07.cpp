// 3. Write a program to copy one string to another using strcpy().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char sourceString[100], destinationString[100];
    cout << "Enter a string: ";
    cin.getline(sourceString, 100);
    strcpy(destinationString, sourceString);
    cout << "Copied string: " << destinationString;
    return 0;
}
