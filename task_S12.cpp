#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 1000) {
        if (i % 7 == 0) {
            sum = sum + i;
        }
        i = i + 4;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
