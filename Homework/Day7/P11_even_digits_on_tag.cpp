#include <iostream>
using namespace std; 

int main() {
    int tag = 6083;
    int evenDigits = 0;

    do {
        int digit = tag % 10;          
        if (digit % 2 == 0) {          
            evenDigits = evenDigits + 1;
        }
        tag = tag / 10;              
    } while (tag > 0);

    cout << "Even digits = " << evenDigits << endl;
    return 0;
}
