// DOCX Q6 - Display ticket numbers
// IDEA: do-while: print the ticket first, add 2, then check whether the next ticket is still 9 or less.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int ticket = 1;

    do {
        cout << ticket << endl;     // print first
        ticket = ticket + 2;        // next ticket is two higher
    } while (ticket <= 9);          // check after printing

    return 0;
}
