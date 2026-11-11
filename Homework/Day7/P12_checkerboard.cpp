#include <iostream>   
using namespace std;  
int main() {
    int side = 3;
    int dark = 0;

    for (int row = 1; row <= side; row++) {
        for (int col = 1; col <= side; col++) {
            if ((row + col) % 2 == 0) {    
                cout << "#";
                dark = dark + 1;
            } else {
                cout << ".";
            }
        }
        cout << endl;                       
    }

    cout << "Dark squares = " << dark << endl;
    return 0;
}
