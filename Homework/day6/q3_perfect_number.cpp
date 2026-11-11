#include <iostream>
using namespace std;

int main() {
    int number, i, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number) {
        cout << "Perfect Number" << endl;
    }
    else {
        cout << "Not a Perfect Number" << endl;
    }
    return 0;
}
