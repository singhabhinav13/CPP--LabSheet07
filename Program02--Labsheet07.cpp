// 2. Write a program to count the number of vowels in a string using strlen().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[100];
    int vowelCount = 0;
    cout << "Enter a string: ";
    cin.getline(inputString, 100);
    for (int i = 0; i < strlen(inputString); i++) {
        char currentChar = tolower(inputString[i]);
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
            currentChar == 'o' || currentChar == 'u')
            vowelCount++;
    }
    cout << "Number of vowels = " << vowelCount;
    return 0;
}
