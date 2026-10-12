// 17. Write a program to remove all vowels from a string using string functions.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[100], resultString[100];
    int resultIndex = 0;
    cout << "Enter a string: ";
    cin.getline(inputString, 100);
    for (int i = 0; i < strlen(inputString); i++) {
        char currentChar = tolower(inputString[i]);
        // keep the character only if it is NOT a vowel
        if (!(currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
              currentChar == 'o' || currentChar == 'u')) {
            resultString[resultIndex] = inputString[i];
            resultIndex++;
        }
    }
    resultString[resultIndex] = '\0';   // end the new string
    cout << "String without vowels: " << resultString;
    return 0;
}
