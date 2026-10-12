// 19. Write a program to join multiple strings into one sentence using strcat().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char words[5][30], sentence[200] = "";
    int totalWords;
    cout << "Enter number of words (max 5): "; cin >> totalWords;
    cout << "Enter words: ";
    for (int i = 0; i < totalWords; i++) cin >> words[i];
    for (int i = 0; i < totalWords; i++) {
        strcat(sentence, words[i]);
        if (i < totalWords - 1) strcat(sentence, " ");   // space between words
    }
    cout << "Sentence: " << sentence;
    return 0;
}
