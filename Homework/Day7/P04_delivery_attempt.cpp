#include <iostream>
using namespace std;
int main() {
    int attempt = 2;
    do {
        cout << attempt << endl;
        attempt = attempt + 1;
    } while (attempt <= 4);
    return 0;
}
