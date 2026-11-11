// DOCX Q1 - Practice sheet numbers
// IDEA: Label = 4 x position. Print each label and add it to a total that starts at 0.

#include <iostream>   // gives us cout (to print on the screen)
using namespace std;  // so we can write cout instead of std::cout

int main() {
    int sheets = 6;
    int total = 0;

    for (int position = 1; position <= sheets; position++) {
        int label = 4 * position;      // 4 times the position
        cout << label << endl;
        total = total + label;
    }

    cout << "Total = " << total << endl;
    return 0;
}
