#include <iostream>   
using namespace std;  
int main() {
    int n = 10;
    int oddSquareSum = 0;
    int evenCount = 0;

    for (int number = 1; number <= n; number++) {
        if (number % 2 == 0) {                          
            evenCount = evenCount + 1;
        } else {                                        
            oddSquareSum = oddSquareSum + number * number;
        }
    }

    cout << "Odd square sum = " << oddSquareSum << endl;
    cout << "Even count = " << evenCount << endl;
    return 0;
}
