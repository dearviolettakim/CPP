#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251); // Рус кодировка

    int a = 7, b = 2;
    double x = 7.0, y = 2.0;

    cout << "Целочисленное деление: " << a / b << endl;
    cout << "Вещественное деление: " << x / y << endl;
    cout << "Остаток от деления: " << a % b << endl;

    return 0;
}
