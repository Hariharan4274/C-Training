// PDF Q7 - Count printer batches
// IDEA: While pages are waiting, print a batch. A batch is the capacity, or whatever pages remain if fewer.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int pages = 14;      // pages waiting
    int capacity = 5;    // pages one batch can print
    int batches = 0;

    while (pages > 0) {                 // check BEFORE each batch
        int printed;
        if (pages < capacity) {
            printed = pages;            // last batch prints only what is left
        } else {
            printed = capacity;
        }
        pages = pages - printed;        // those pages are done
        batches = batches + 1;
        cout << "Pages remaining = " << pages << endl;
    }

    cout << "Batches = " << batches << endl;
    return 0;
}
