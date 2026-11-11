#include <iostream>   
using namespace std; 

int main() {
    int deposit = 50;     
    int target = 400;
    int saved = 0;
    int weeks = 0;

    do {
        saved = saved + deposit;       
        weeks = weeks + 1;
        deposit = deposit + 20;        
    } while (saved < target);          

    cout << "Weeks = " << weeks << endl;
    cout << "Savings = " << saved << endl;
    return 0;
}
