// PDF Q14 - Find a bicycle ride total
// IDEA: Each day she rides 2 km more than the day before. Add each day to a running total, then compare with 12.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int days = 4;
    int distance = 2;     // first day = 2 km
    int total = 0;

    for (int day = 1; day <= days; day++) {
        total = total + distance;    // add today's ride
        cout << "Distance = " << distance << ", Total = " << total << endl;
        distance = distance + 2;     // tomorrow she rides 2 km farther
    }

    // Decide only AFTER the loop, using the final total.
    if (total >= 12) {
        cout << "Days = " << days << endl;
    } else {
        cout << "Target not reached" << endl;
    }
    return 0;
}
