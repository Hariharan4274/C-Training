// DOCX Q12 - Stamp workshop passes
// IDEA: Count from 1 to the number of participants, printing each pass number.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int participants = 6;
    int stamped = 0;

    for (int pass = 1; pass <= participants; pass++) {
        cout << pass << endl;
        stamped = stamped + 1;
    }

    cout << "Passes stamped = " << stamped << endl;
    return 0;
}
