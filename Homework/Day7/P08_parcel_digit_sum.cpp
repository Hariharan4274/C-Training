#include <iostream>  
using namespace std; 
int main() {
    int code = 4026;
    int total = 0;

    do {
        int digit = code % 10;    
        total = total + digit;   
        code = code / 10;        
    } while (code > 0);         

    cout << "Digit sum = " << total << endl;
    return 0;
}
