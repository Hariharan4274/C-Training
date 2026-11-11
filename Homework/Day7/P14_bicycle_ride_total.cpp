#include <iostream>   
using namespace std;  
int main() {
    int days = 4;
    int distance = 2;    
    int total = 0;

    for (int day = 1; day <= days; day++) {
        total = total + distance;   
        cout << "Distance = " << distance << ", Total = " << total << endl;
        distance = distance + 2;     
    }


    if (total >= 12) {
        cout << "Days = " << days << endl;
    } else {
        cout << "Target not reached" << endl;
    }
    return 0;
}
