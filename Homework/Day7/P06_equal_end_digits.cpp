#include <iostream>  
using namespace std;  

int main() {
    int limit = 35;
    int matches = 0;

    for (int number = 10; number <= limit; number++) {
        int lastDigit = number % 10;  

        int copy = number;          
        while (copy >= 10) {
            copy = copy / 10;      
        }
        int firstDigit = copy;        

        if (firstDigit == lastDigit) {
            cout << number << endl;
            matches = matches + 1;
        }
    }

    cout << "Matches = " << matches << endl;
    return 0;
}
