// PDF Q3 - Draw the border of a notice board
// IDEA: Outer loop = rows, inner loop = columns. A spot is border if it is in the first/last row OR first/last column.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int rows = 4;
    int columns = 6;
    int hashCount = 0;    // counts the # characters

    for (int r = 1; r <= rows; r++) {            // go down the rows
        for (int c = 1; c <= columns; c++) {     // go across the columns
            // || means OR. One single check handles all four sides,
            // so a corner is counted only once.
            if (r == 1 || r == rows || c == 1 || c == columns) {
                cout << "#";
                hashCount = hashCount + 1;
            } else {
                cout << ".";
            }
        }
        cout << endl;   // after one full row, go to the next line
    }

    cout << "Border positions = " << hashCount << endl;
    return 0;
}
