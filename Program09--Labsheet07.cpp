// 9. Write a program to arrange an array of strings in alphabetical order using strcmp().
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char names[20][50], temporaryName[50];
    int totalNames;
    cout << "Enter number of strings: "; cin >> totalNames;
    cout << "Enter strings: ";
    for (int i = 0; i < totalNames; i++) cin >> names[i];
    // bubble sort using strcmp
    for (int pass = 0; pass < totalNames - 1; pass++) {
        for (int j = 0; j < totalNames - pass - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temporaryName, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temporaryName);
            }
        }
    }
    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < totalNames; i++) cout << names[i] << endl;
    return 0;
}
