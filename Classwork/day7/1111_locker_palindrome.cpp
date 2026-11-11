#include <iostream>   
using namespace std;  
int main() {
    int original = 1331;
    int remaining = original;   
    int reversed = 0;

    do {
        int digit = remaining % 10;         
        reversed = reversed * 10 + digit;     
        remaining = remaining / 10;           
    } while (remaining > 0);

    cout << "Reverse = " << reversed << endl;

    if (reversed == original) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }
    return 0;
}
