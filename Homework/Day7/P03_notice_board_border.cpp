#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int columns = 6;
    int hashCount = 0;

    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= columns; c++) {
            if (r == 1 || r == rows || c == 1 || c == columns) {
                cout << "#";
                hashCount = hashCount + 1;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

    cout << "Border positions = " << hashCount << endl;
    return 0;
}
