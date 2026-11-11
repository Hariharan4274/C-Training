// DOCX Q15 - Display the first alarm reading
// IDEA: do-while: show the reading, add 2, repeat while the new reading is 8 or less.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int reading = 2;

    do {
        cout << reading << endl;     // show first
        reading = reading + 2;
    } while (reading <= 8);          // then check

    return 0;
}
