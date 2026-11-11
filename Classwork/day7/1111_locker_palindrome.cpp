// DOCX Q8 - Check a locker number
// IDEA: Build the reverse digit by digit: reverse = reverse * 10 + lastDigit. Then compare with the original.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int original = 1331;
    int remaining = original;    // working copy
    int reversed = 0;

    do {
        int digit = remaining % 10;           // take the last digit
        reversed = reversed * 10 + digit;     // shift left one place, add the digit
        remaining = remaining / 10;           // remove the last digit
    } while (remaining > 0);

    cout << "Reverse = " << reversed << endl;

    if (reversed == original) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }
    return 0;
}
