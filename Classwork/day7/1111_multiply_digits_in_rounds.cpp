// DOCX Q5 - Multiply digits in rounds
// IDEA: Outer while = one round per pass. Inner while = multiply all digits of the number. Repeat until 1 digit is left.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int number = 39;
    int rounds = 0;

    while (number >= 10) {               // 10 or more = at least two digits
        int copy = number;
        int product = 1;                 // start at 1 EVERY round (not 0!)

        while (copy > 0) {
            int digit = copy % 10;       // last digit
            product = product * digit;   // multiply it in
            copy = copy / 10;            // remove it
        }

        number = product;                // the product becomes the new number
        rounds = rounds + 1;
    }

    cout << "Final digit = " << number << endl;
    cout << "Rounds = " << rounds << endl;
    return 0;
}
