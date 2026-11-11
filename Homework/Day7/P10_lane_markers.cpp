// PDF Q10 - Print lane markers
// IDEA: Marker = lane number x 3. Print it and add it to a total.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int lanes = 5;
    int total = 0;

    for (int lane = 1; lane <= lanes; lane++) {
        int marker = lane * 3;          // lane number times three
        cout << marker << endl;
        total = total + marker;
    }

    cout << "Marker total = " << total << endl;
    return 0;
}
