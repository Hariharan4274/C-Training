#include <iostream>

using namespace std;

int main() {

    int ids[] = {21, 35, 21, 44, 21, 50};
    int size = 6;

    int targets[] = {21, 99};


    for (int t = 0; t < 2; t++) {
        int target = targets[t];
        int count = 0;

        cout << "Target " << target << ": ";


        for (int i = 0; i < size; i++) {
            if (ids[i] == target) {

                if (count > 0) {
                    cout << ", ";
                }
                cout << i;
                count++;
            }
        }


        if (count == 0) {
            cout << "Not found" << endl;
        } else {
            cout << " (Count: " << count << ")" << endl;
        }
    }

    return 0;
}
