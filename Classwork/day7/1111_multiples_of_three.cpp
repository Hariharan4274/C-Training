#include <iostream>   
using namespace std;  

int main() {
    int n = 10;
    int count = 0;

    for (int number = 1; number <= n; number++) {
        if (number % 3 == 0) {         
            cout << number << endl;
            count = count + 1;
        }
    }

    cout << "Count = " << count << endl;
    return 0;
}
