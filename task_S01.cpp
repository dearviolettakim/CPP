#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    int number1 = 15;
    double number2 = 7.5;
    char symbol = 'A';
    bool flag = true;


    cout << "Peremennye:" << endl;
    cout << "Celoe chislo: " << number1 << endl;
    cout << "Drobnoe chislo: " << number2 << endl;
    cout << "Simvol: " << symbol << endl;
    cout << "Logicheskoe znachenie: " << flag << endl;
    cout << endl;


    cout << "SLOZHENIE:" << endl;
    int result1 = add(number1, 5);
    cout << number1 << " + 5 = " << result1 << endl;

    cout << "VYCHITANIE:" << endl;
    int result2 = subtract(number1, 3);
    cout << number1 << " - 3 = " << result2 << endl;

    cout << "UMNOZHENIE:" << endl;
    int result3 = multiply(number1, 2);
    cout << number1 << " * 2 = " << result3 << endl;

    cout << "DELENIE:" << endl;
    double result4 = divide(number2, 2.5);
    cout << number2 << " / 2.5 = " << result4 << endl;

    return 0;
}
