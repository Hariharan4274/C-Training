#include <iostream>
using namespace std;

int main() {
    int balance = 85;
    int limit = 20;
    int visits = 0;

    while (balance > 0) {
        int payment;
        if (balance < limit) {
            payment = balance;
        } else {
            payment = limit;
        }
        cout << payment << endl;
        balance = balance - payment;
        visits = visits + 1;
    }

    cout << "Visits = " << visits << endl;
    return 0;
}
