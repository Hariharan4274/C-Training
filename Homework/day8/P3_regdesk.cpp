#include <iostream>

using namespace std;

int main() {
    int cap = 6;
    int ids[cap] = {101, 105, 110, 114};
    int size = 4;
    int insertIndex = 2;
    int newID = 108;

    if (size < cap && insertIndex >= 0 && insertIndex <= size) {

        for (int i = size; i > insertIndex; i--) {
            ids[i] = ids[i - 1];
        }

        ids[insertIndex] = newID;
        size++;

        cout << "After Insertion: ";
        for (int i = 0; i < size; i++) {
            cout << ids[i];
            if (i < size - 1) {
                cout << ", ";
            }
        }
        cout << " | Logical Size: " << size << endl;
    } else {
        cout << "Insertion failed: Invalid index or array is full" << endl;
    }

    int deleteIndex = 3;

    if (deleteIndex >= 0 && deleteIndex < size) {

        for (int i = deleteIndex; i < size - 1; i++) {
            ids[i] = ids[i + 1];
        }

        size--;

        cout << "After Deletion:  ";
        for (int i = 0; i < size; i++) {
            cout << ids[i];
            if (i < size - 1) {
                cout << ", ";
            }
        }
        cout << " | Logical Size: " << size << endl;
    } else {
        cout << "Deletion failed: Invalid index" << endl;
    }

    return 0;
}
