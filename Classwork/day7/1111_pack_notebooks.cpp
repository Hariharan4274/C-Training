// DOCX Q13 - Pack notebooks into cartons
// IDEA: While notebooks remain, fill one carton: 4 notebooks, or fewer if less than 4 remain.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int notebooks = 11;
    int cartons = 0;

    while (notebooks > 0) {
        int packed;
        if (notebooks < 4) {
            packed = notebooks;      // last carton: use whatever is left
        } else {
            packed = 4;              // a full carton
        }
        notebooks = notebooks - packed;
        cartons = cartons + 1;
        cout << "Packed = " << packed << endl;
    }

    cout << "Cartons = " << cartons << endl;
    return 0;
}
