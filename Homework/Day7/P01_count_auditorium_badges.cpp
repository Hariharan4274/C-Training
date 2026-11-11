#include <iostream>  
using namespace std;

int main() {
    int guests = 4; 
    int badges = 0;
    for (int i = 1; i <= guests; i++) {
        cout << i << endl;       
        badges = badges + 1;
    }
    cout << "Badges = " << badges << endl;
    return 0;
}
