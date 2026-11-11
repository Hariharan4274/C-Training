// PDF Q4 - Display a delivery attempt
// IDEA: A do-while loop prints FIRST and checks AFTER, so the starting attempt is always shown once.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int attempt = 2;

    do {
        cout << attempt << endl;   // print the current attempt first
        attempt = attempt + 1;     // then go to the next attempt
    } while (attempt <= 4);        // check the NEW value; repeat only if it is 4 or less

    return 0;
}
