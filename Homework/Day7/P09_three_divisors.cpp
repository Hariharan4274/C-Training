// PDF Q9 - Find numbers with three divisors
// IDEA: For each card, count how many numbers divide it exactly. Keep it only if the count is 3.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int limit = 10;
    int matches = 0;

    for (int card = 2; card <= limit; card++) {
        int divisors = 0;                          // reset for EVERY card

        for (int d = 1; d <= card; d++) {          // try every possible divisor
            if (card % d == 0) {                   // remainder 0 = divides exactly
                divisors = divisors + 1;
            }
        }

        if (divisors == 3) {
            cout << card << endl;
            matches = matches + 1;
        }
    }

    cout << "Matches = " << matches << endl;
    return 0;
}
