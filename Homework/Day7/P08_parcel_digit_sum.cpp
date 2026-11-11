// PDF Q8 - Add digits on a parcel code
// IDEA: Take the last digit with % 10, add it to the total, then remove it with / 10. Repeat until nothing is left.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int code = 4026;
    int total = 0;

    do {
        int digit = code % 10;    // last digit (4026 -> 6)
        total = total + digit;    // add it to the running total
        code = code / 10;         // remove the last digit (4026 -> 402)
    } while (code > 0);           // stop when no digits remain

    cout << "Digit sum = " << total << endl;
    return 0;
}
