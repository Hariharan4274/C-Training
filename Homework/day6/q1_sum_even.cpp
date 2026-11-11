#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;

    cout << "Enter N: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input (less than 1)" << endl;
    }
    else {
        for (i = 2; i <= n; i = i + 2) {
            sum = sum + i;
        }
        cout << "Sum = " << sum << endl;
    }
    return 0;
}
