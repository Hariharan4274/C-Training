// DOCX Q4 - Track colony growth
// IDEA: Keep doubling the cells (1 hour each time) while the count is NOT yet above the target.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int cells = 5;        // population at hour 0
    int target = 1000;
    int hours = 0;

    while (cells <= target) {      // equal to the target still needs another hour
        cells = cells * 2;         // doubles
        hours = hours + 1;         // one more hour passed
    }

    cout << "Hours = " << hours << endl;
    cout << "Cells = " << cells << endl;
    return 0;
}
