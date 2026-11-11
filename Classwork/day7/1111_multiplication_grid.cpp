#include <iostream>
using namespace std; 

int main() {
    int rows = 3;
    int columns = 4;
    int sum = 0;
    int maximum = 0;

    for (int row = 1; row <= rows; row++) {
        for (int column = 1; column <= columns; column++) {   
            int value = row * column;
            if (column > 1) {
                cout << " ";            
            }
            cout << value;
            sum = sum + value;
            if (value > maximum) {       
                maximum = value;
            }
        }
        cout << endl;                    

    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << maximum << endl;
    return 0;
}
