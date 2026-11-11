// DOCX Q7 - Reach a savings target
// IDEA: Each week: add the deposit to savings, count the week, then raise the deposit by 20. Stop once savings reach the target.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int deposit = 50;     // this week's deposit
    int target = 400;
    int saved = 0;
    int weeks = 0;

    do {
        saved = saved + deposit;       // put the money aside
        weeks = weeks + 1;
        deposit = deposit + 20;        // next week's deposit is 20 more
    } while (saved < target);          // keep going until saved is at least the target

    cout << "Weeks = " << weeks << endl;
    cout << "Savings = " << saved << endl;
    return 0;
}
