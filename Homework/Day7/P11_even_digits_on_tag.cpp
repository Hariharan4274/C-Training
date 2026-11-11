// PDF Q11 - Count even digits on a tag
// IDEA: Look at the last digit, count it if it is even, then remove it. do-while makes sure 0 is checked once.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int tag = 6083;
    int evenDigits = 0;

    do {
        int digit = tag % 10;          // last digit
        if (digit % 2 == 0) {          // even digits leave remainder 0 when divided by 2
            evenDigits = evenDigits + 1;
        }
        tag = tag / 10;                // remove the last digit
    } while (tag > 0);

    cout << "Even digits = " << evenDigits << endl;
    return 0;
}
