// PDF Q5 - Count qualifying quiz scores
// IDEA: Make the scores 30, 40, 50 ... with a loop. Only scores that are 60 or more are printed, counted and added.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int scores = 5;       // how many scores
    int score = 30;       // the first score
    int qualified = 0;    // how many reached the cutoff
    int sum = 0;          // total of the qualifying scores

    for (int i = 1; i <= scores; i++) {
        if (score >= 60) {                 // >= means "at least", so 60 is included
            cout << score << endl;
            qualified = qualified + 1;
            sum = sum + score;
        }
        score = score + 10;                // next score is 10 higher
    }

    cout << "Qualified = " << qualified << endl;
    cout << "Qualifying sum = " << sum << endl;
    return 0;
}
