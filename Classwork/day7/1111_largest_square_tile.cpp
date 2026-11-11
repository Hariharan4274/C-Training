// DOCX Q10 - Find the largest square tile
// IDEA: This is the Euclid method (GCD): replace (first, second) with (second, first % second) until second is 0.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int first = 48;
    int second = 18;

    while (second != 0) {                 // repeat while the second number is not zero
        int remainder = first % second;   // e.g. 48 % 18 = 12
        first = second;                   // (48, 18) becomes (18, 12)
        second = remainder;
    }

    cout << "Tile side = " << first << endl;   // when second is 0, first is the answer
    return 0;
}
