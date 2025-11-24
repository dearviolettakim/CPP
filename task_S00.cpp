#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string text;
    cout << "Ââåäèòå ñòðîêó: ";
    getline(cin, text);

    int engCounts[26] = {0};
    int rusCounts[33] = {0};

    for (size_t i = 0; i < text.length(); i++) {
        unsigned char c = text[i];

        if (c >= 'a' && c <= 'z') {
            engCounts[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            engCounts[c - 'A']++;
        }
        else if (c >= 0xE0 && c <= 0xFF && c != 0xF1) {
            rusCounts[c - 0xE0]++;
        }
        else if (c >= 0xC0 && c <= 0xDF && c != 0xD1) {
            rusCounts[c - 0xC0]++;
        }
        else if (c == 0xF1) {
            rusCounts[32]++;
        }
        else if (c == 0xD1) {
            rusCounts[32]++;
        }
    }

    cout << "\nÀÍÃËÈÉÑÊÈÅ ÁÓÊÂÛ:";
    cout << "\n-----------------";

    bool hasEngLetters = false;
    for (int i = 0; i < 26; i++) {
        if (engCounts[i] > 0) {
            hasEngLetters = true;
            cout << "\n" << char('a' + i) << " - " << engCounts[i] << " ðàç";
        }
    }

    if (!hasEngLetters) {
        cout << "\nÍå íàéäåíî";
    }

    cout << "\n\nÐÓÑÑÊÈÅ ÁÓÊÂÛ:";
    cout << "\n---------------";

    bool hasRusLetters = false;
    for (int i = 0; i < 33; i++) {
        if (rusCounts[i] > 0) {
            hasRusLetters = true;
            char rusLetter;
            if (i < 6) {
                rusLetter = 0xE0 + i;
            } else if (i < 32) {
                rusLetter = 0xE0 + i;
            } else {
                rusLetter = 0xF1;
            }
            cout << "\n" << rusLetter << " - " << rusCounts[i] << " ðàç";
        }
    }

    if (!hasRusLetters) {
        cout << "\nÍå íàéäåíî";
    }
    cout << endl;

    return 0;
}
