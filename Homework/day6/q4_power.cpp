#include <iostream>
using namespace std;

int main() {
    int base, exponent, i, result = 1;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    cout << "Result = " << result << endl;
    return 0;
}
