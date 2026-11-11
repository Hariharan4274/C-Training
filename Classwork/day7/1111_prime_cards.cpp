// DOCX Q14 - Count prime cards
// IDEA: A prime has exactly 2 divisors (1 and itself). Count the divisors of each card with an inner loop.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int limit = 12;
    int primeCount = 0;

    for (int card = 2; card <= limit; card++) {
        int divisors = 0;                       // reset for every card!

        for (int d = 1; d <= card; d++) {
            if (card % d == 0) {
                divisors = divisors + 1;
            }
        }

        if (divisors == 2) {                    // exactly two divisors = prime
            cout << card << endl;
            primeCount = primeCount + 1;
        }
    }

    cout << "Prime cards = " << primeCount << endl;
    return 0;
}
