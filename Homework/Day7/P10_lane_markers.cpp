#include <iostream>  
using namespace std;  

int main() {
    int lanes = 5;
    int total = 0;

    for (int lane = 1; lane <= lanes; lane++) {
        int marker = lane * 3;        
        cout << marker << endl;
        total = total + marker;
    }

    cout << "Marker total = " << total << endl;
    return 0;
}
