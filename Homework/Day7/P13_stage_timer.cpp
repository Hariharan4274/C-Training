#include <iostream>  
using namespace std; 

int main() {
    int seconds = 4;

    while (seconds > 0) {              
        cout << seconds << endl;
        seconds = seconds - 1;       
    }

    cout << "Curtain open" << endl;  
    return 0;
}
