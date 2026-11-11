// PDF Q2 - Pay down a canteen balance
// IDEA: Keep paying (up to the limit) while money is still owed. If the balance is smaller than the limit, pay just the balance.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int balance = 85;   // money still owed
    int limit = 20;     // maximum payment per visit
    int visits = 0;     // how many visits so far

    while (balance > 0) {            // repeat while something is still owed
        int payment;
        if (balance < limit) {
            payment = balance;       // last visit: pay only what is left
        } else {
            payment = limit;         // normal visit: pay the full limit
        }
        cout << payment << endl;     // show the payment
        balance = balance - payment; // owe less now
        visits = visits + 1;         // one more visit done
    }

    cout << "Visits = " << visits << endl;
    return 0;
}
