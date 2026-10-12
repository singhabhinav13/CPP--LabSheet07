// 16. Write a program to count the number of words in a string using strlen() and spaces.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char inputString[200];
    int wordCount = 0;
    cout << "Enter a sentence: ";
    cin.getline(inputString, 200);
    // a new word starts when a non-space character comes after a space (or at the start)
    for (int i = 0; i < strlen(inputString); i++) {
        if (inputString[i] != ' ' && (i == 0 || inputString[i - 1] == ' '))
            wordCount++;
    }
    cout << "Number of words = " << wordCount;
    return 0;
}
