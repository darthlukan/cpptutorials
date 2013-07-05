#include <iostream>

using namespace std;

void DoPrint() {
    cout << "In DoPrint()" << endl;
}

int main() {
    cout << "Starting main()" << endl;
    DoPrint();
    cout << "Ending main()" << endl;
    return 0;
}
