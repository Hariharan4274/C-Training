// DOCX Q11 - Number triangle
// IDEA: Row r prints the numbers 1 to r. Outer loop = rows, inner loop = the numbers on that row.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int rows = 4;
    int total = 0;

    for (int row = 1; row <= rows; row++) {
        for (int value = 1; value <= row; value++) {   // row r has r numbers
            if (value > 1) {
                cout << " ";
            }
            cout << value;
            total = total + value;
        }
        cout << endl;       // new line after each row
    }

    cout << "Total = " << total << endl;
    return 0;
}
