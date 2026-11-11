#include <iostream>   
using namespace std;  

int main() {
    int notebooks = 11;
    int cartons = 0;

    while (notebooks > 0) {
        int packed;
        if (notebooks < 4) {
            packed = notebooks;      
        } else {
            packed = 4;              
        }
        notebooks = notebooks - packed;
        cartons = cartons + 1;
        cout << "Packed = " << packed << endl;
    }

    cout << "Cartons = " << cartons << endl;
    return 0;
}
