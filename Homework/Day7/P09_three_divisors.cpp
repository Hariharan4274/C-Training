#include <iostream>  
using namespace std; 

int main() {
    int limit = 10;
    int matches = 0;

    for (int card = 2; card <= limit; card++) {
        int divisors = 0;                          
        for (int d = 1; d <= card; d++) {          
            if (card % d == 0) {                  
                divisors = divisors + 1;
            }
        }

        if (divisors == 3) {
            cout << card << endl;
            matches = matches + 1;
        }
    }

    cout << "Matches = " << matches << endl;
    return 0;
}
