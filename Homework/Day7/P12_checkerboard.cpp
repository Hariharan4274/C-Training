// PDF Q12 - Make a checkerboard display
// IDEA: Row + column is even -> dark (#), otherwise light (.). Rows and columns start from 1.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int side = 3;
    int dark = 0;

    for (int row = 1; row <= side; row++) {
        for (int col = 1; col <= side; col++) {
            if ((row + col) % 2 == 0) {     // even sum = dark square
                cout << "#";
                dark = dark + 1;
            } else {
                cout << ".";
            }
        }
        cout << endl;                       // finish the row
    }

    cout << "Dark squares = " << dark << endl;
    return 0;
}
