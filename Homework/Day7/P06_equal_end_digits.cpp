// PDF Q6 - Find numbers with equal end digits
// IDEA: Last digit = number % 10. First digit = keep dividing a COPY by 10 until only one digit is left.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int limit = 35;
    int matches = 0;

    for (int number = 10; number <= limit; number++) {
        int lastDigit = number % 10;   // remainder after dividing by 10 = last digit

        int copy = number;             // work on a copy so 'number' stays safe
        while (copy >= 10) {           // while the copy still has 2 or more digits
            copy = copy / 10;          // chop off the last digit (e.g. 35 -> 3)
        }
        int firstDigit = copy;         // what is left is the first digit

        if (firstDigit == lastDigit) {
            cout << number << endl;
            matches = matches + 1;
        }
    }

    cout << "Matches = " << matches << endl;
    return 0;
}
