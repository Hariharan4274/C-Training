#include <iostream>

using namespace std;

int main() {

    int initialScores[] = {55, 72, 68, 91, 83};
    int size = 5;

    int testIndices[] = {2, 5};
    int testScores[] = {76, 60};

    for (int t = 0; t < 2; t++) {
        

        int scores[5];
        for (int i = 0; i < size; i++) {
            scores[i] = initialScores[i];
        }


        int index = testIndices[t];
        int newScore = testScores[t];


        if (index >= 0 && index < size) {
            scores[index] = newScore; 
            for (int i = 0; i < size; i++) {
                cout << scores[i];
                if (i < size - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        } else {

            cout << "Invalid index" << endl;
        }
    }

    return 0;
}
