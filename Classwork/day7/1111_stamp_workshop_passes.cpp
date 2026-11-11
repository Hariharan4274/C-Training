#include <iostream>   
using namespace std;  

int main() {
    int participants = 6;
    int stamped = 0;

    for (int pass = 1; pass <= participants; pass++) {
        cout << pass << endl;
        stamped = stamped + 1;
    }

    cout << "Passes stamped = " << stamped << endl;
    return 0;
}
