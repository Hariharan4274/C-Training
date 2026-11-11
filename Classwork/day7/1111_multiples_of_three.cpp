// DOCX Q9 - Multiples in an interval
// IDEA: Check every number from 1 to n. If number % 3 is 0, it is a multiple of 3: print it and count it.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int n = 10;
    int count = 0;

    for (int number = 1; number <= n; number++) {
        if (number % 3 == 0) {          // divides by 3 with no remainder
            cout << number << endl;
            count = count + 1;
        }
    }

    cout << "Count = " << count << endl;
    return 0;
}
