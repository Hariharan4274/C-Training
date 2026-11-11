// PDF Q15 - Count digit appearances
// IDEA: Outer loop visits each card. Inner while loop looks at each digit of a COPY of the card.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int limit = 25;
    int count = 0;

    for (int card = 1; card <= limit; card++) {
        int copy = card;                 // copy, so 'card' is not destroyed
        while (copy > 0) {
            if (copy % 10 == 2) {        // is the last digit a 2?
                count = count + 1;
            }
            copy = copy / 10;            // remove the last digit
        }
    }

    cout << "Digit 2 appearances = " << count << endl;
    return 0;
}
