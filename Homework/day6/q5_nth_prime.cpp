#include <iostream>
using namespace std;

int main() {
    int n, count = 0, num = 1, i, isPrime;

    cout << "Enter N: ";
    cin >> n;

    while (count < n) {
        num = num + 1;
        isPrime = 1;

        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
            }
        }

        if (isPrime == 1) {
            count = count + 1;
        }
    }

    cout << "Nth prime = " << num << endl;
    return 0;
}
