#include <iostream>   
using namespace std; 

int main() {
    int limit = 25;
    int count = 0;

    for (int card = 1; card <= limit; card++) {
        int copy = card;                
        while (copy > 0) {
            if (copy % 10 == 2) {        
                count = count + 1;
            }
            copy = copy / 10;            
        }
    }

    cout << "Digit 2 appearances = " << count << endl;
    return 0;
}
