#include <iostream>   
using namespace std; 

int main() {
    int limit = 12;
    int primeCount = 0;

    for (int card = 2; card <= limit; card++) {
        int divisors = 0;                       

        for (int d = 1; d <= card; d++) {
            if (card % d == 0) {
                divisors = divisors + 1;
            }
        }

        if (divisors == 2) {                    
            cout << card << endl;
            primeCount = primeCount + 1;
        }
    }

    cout << "Prime cards = " << primeCount << endl;
    return 0;
}
