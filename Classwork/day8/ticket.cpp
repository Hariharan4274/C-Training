#include <iostream>
using namespace std;

int main() {

    int holder[5] = {10, 20, 30};
    int usedSize = 3;
    int newTicket = 15;
    int insertPos = 1; 

    for (int i = usedSize; i > insertPos; i--) {
        holder[i] = holder[i - 1];
    }


    holder[insertPos] = newTicket;
    usedSize++;


    cout << "Tickets in holder: ";
    for (int i = 0; i < usedSize; i++) {
        cout << holder[i] << " ";
    }
    cout <<endl<<"Used size: " << usedSize << endl;

    return 0;
}
