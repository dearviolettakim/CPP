#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

double get_square(double A, int N) {
    if (N < 3) {
        cout << "Ошибка! Многоугольник должен иметь хотя бы 3 стороны." << endl;
        return 0;
    }

    double area = (N * A * A) / (4 * tan(M_PI / N));
    return area;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double side;
    int sides_count;

    cout << "Программа для вычисления площади правильного многоугольника" << endl;
    cout << "==========================================================" << endl;

    cout << "Введите длину стороны многоугольника: ";
    cin >> side;

    cout << "Введите количество сторон многоугольника: ";
    cin >> sides_count;

    if (side <= 0) {
        cout << "Ошибка! Длина стороны должна быть положительным числом." << endl;
        return 1;
    }

    double result = get_square(side, sides_count);

    if (result > 0) {
        cout << "==========================================================" << endl;
        cout << "Результат вычислений:" << endl;
        cout << "Многоугольник с " << sides_count << " сторонами" << endl;
        cout << "Длина каждой стороны: " << side << endl;
        cout << fixed << setprecision(4);
        cout << "Площадь многоугольника: " << result << endl;
        cout << "==========================================================" << endl;
    }

    return 0;
}
