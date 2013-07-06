#include <iostream>

using namespace std;

void DoPrint2() {
    cout << "In DoPrint2()" << endl;
}

void DoPrint() {
    cout << "Starting DoPrint()" << endl;
    DoPrint2();
    cout << "Ending DoPrint()" << endl;
}

int main() {
    cout << "Starting main()" << endl;
    DoPrint();
    cout << "Ending main()" << endl;
    return 0;
}
