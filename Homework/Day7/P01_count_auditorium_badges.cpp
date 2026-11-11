// PDF Q1 - Count auditorium badges
// IDEA: Guest number 1 gets badge 1, guest 2 gets badge 2 ... so the badge number is just the loop counter.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int guests = 4;   // how many guests came
    int badges = 0;   // how many badges we have printed so far

    // i = badge number. Starts at 1, repeats while i <= guests, goes up by 1 each time.
    for (int i = 1; i <= guests; i++) {
        cout << i << endl;        // print the badge number on its own line
        badges = badges + 1;      // one more badge printed
    }

    // This line is AFTER the loop, so it prints only once.
    cout << "Badges = " << badges << endl;
    return 0;
}
