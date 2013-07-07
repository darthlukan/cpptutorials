#include <iostream>

using namespace std;


int main() {
    int array[6] = {10, 8, 6, 4, 2, 0};

    // Dereferencing an array returns the 0th element
    cout << *array << endl; // Prints 10

    for (int i = 0; i <= sizeof(array) / sizeof(*array); i++) {
        cout << array[i] << endl;
    }

    return 0;
}
