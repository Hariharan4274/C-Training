// PDF Q13 - Count down a stage timer
// IDEA: while (seconds > 0) checks first, so 0 seconds skips the loop. After the loop, print Curtain open.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int seconds = 4;

    while (seconds > 0) {              // only positive readings are shown
        cout << seconds << endl;
        seconds = seconds - 1;         // one tick = one second less
    }

    cout << "Curtain open" << endl;    // runs once, after the countdown
    return 0;
}
