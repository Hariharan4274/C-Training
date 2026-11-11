// DOCX Q2 - Odd squares and even counts
// IDEA: Two separate tallies: add the square of every odd number, and count every even number.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int n = 10;
    int oddSquareSum = 0;
    int evenCount = 0;

    for (int number = 1; number <= n; number++) {
        if (number % 2 == 0) {                          // even number
            evenCount = evenCount + 1;
        } else {                                        // odd number
            oddSquareSum = oddSquareSum + number * number;
        }
    }

    cout << "Odd square sum = " << oddSquareSum << endl;
    cout << "Even count = " << evenCount << endl;
    return 0;
}
