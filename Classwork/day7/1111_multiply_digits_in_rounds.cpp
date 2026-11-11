#include <iostream>  
using namespace std; 
int main() {
    int number = 39;
    int rounds = 0;

    while (number >= 10) {              
        int copy = number;
        int product = 1;                 

        while (copy > 0) {
            int digit = copy % 10;       
            product = product * digit;   
            copy = copy / 10;           
        }

        number = product;               
        rounds = rounds + 1;
    }

    cout << "Final digit = " << number << endl;
    cout << "Rounds = " << rounds << endl;
    return 0;
}
