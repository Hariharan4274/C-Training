// DOCX Q3 - Multiplication grid
// IDEA: Outer loop = row, inner loop = column. Cell value = row x column. Track the sum and the biggest value.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int rows = 3;
    int columns = 4;
    int sum = 0;
    int maximum = 0;

    for (int row = 1; row <= rows; row++) {
        for (int column = 1; column <= columns; column++) {   // column restarts at 1 for every row
            int value = row * column;
            if (column > 1) {
                cout << " ";             // space BETWEEN numbers only
            }
            cout << value;
            sum = sum + value;
            if (value > maximum) {       // found a new biggest value
                maximum = value;
            }
        }
        cout << endl;                    // end of this row
    }

    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << maximum << endl;
    return 0;
}
