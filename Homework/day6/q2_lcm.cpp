#include <iostream>
using namespace std;

int main() {
    int a, b, i;

    cout << "Enter a and b: ";
    cin >> a >> b;

    if (a > b) {
        i = a;
    }
    else {
        i = b;
    }

    while (i % a != 0 || i % b != 0) {
        i = i + 1;
    }

    cout << "LCM = " << i << endl;
    return 0;
}
