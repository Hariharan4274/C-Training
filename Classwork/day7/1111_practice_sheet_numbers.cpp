#include <iostream>   
using namespace std; 

int main() {
    int sheets = 6;
    int total = 0;

    for (int position = 1; position <= sheets; position++) {
        int label = 4 * position;      
        cout << label << endl;
        total = total + label;
    }

    cout << "Total = " << total << endl;
    return 0;
}
