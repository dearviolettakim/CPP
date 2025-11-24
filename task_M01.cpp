#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Таблица умножения:" << endl;
    cout << endl;

    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << endl;

    for (int i = 0; i < 85; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 1; i <= 10; i++) {
        if (i < 10) {
            cout << i << " |\t";
        } else {
            cout << i << "|\t";
        }

        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            cout << result << "\t";
        }

        cout << endl;
    }

    return 0;
}
