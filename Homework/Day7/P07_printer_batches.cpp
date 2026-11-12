#include <iostream>   
using namespace std;  

int main() {
    int pages = 14;      
    int capacity = 5;    
    int batches = 0;

    while (pages > 0) {                
        int printed;
        if (pages < capacity) {
            printed = pages;         
        } else {
            printed = capacity;
        }
        pages = pages - printed;        
        batches = batches + 1;
        cout << "Pages remaining = " << pages << endl;
    }

    cout << "Batches = " << batches << endl;
    return 0;
}
