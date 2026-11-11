#include <iostream>  
using namespace std;  

int main() {
    int scores = 5;       
    int score = 30;      
    int qualified = 0;    
    int sum = 0;    

    for (int i = 1; i <= scores; i++) {
        if (score >= 60) {                 
            cout << score << endl;
            qualified = qualified + 1;
            sum = sum + score;
        }
        score = score + 10;                
    }

    cout << "Qualified = " << qualified << endl;
    cout << "Qualifying sum = " << sum << endl;
    return 0;
}
