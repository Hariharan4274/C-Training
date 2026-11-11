#include <iostream>   
using namespace std;  
int main() {
    int cells = 5;        
    int target = 1000;
    int hours = 0;

    while (cells <= target) {     
        cells = cells * 2;        
        hours = hours + 1;
    }

    cout << "Hours = " << hours << endl;
    cout << "Cells = " << cells << endl;
    return 0;
}
