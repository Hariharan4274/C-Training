#include <iostream>   
using namespace std;  

int main() {
    int first = 48;
    int second = 18;

    while (second != 0) {                 
        int remainder = first % second;   
        first = second;                   
        second = remainder;
    }

    cout << "Tile side = " << first << endl;  
    return 0;
}
