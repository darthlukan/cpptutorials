#include <iostream>

using namespace std;


int main() {

    int numVal = 5;      // Declare a variable
    int *pntr = &numVal; // Assign address of variable to pointer.

    cout << "Address of numVal:" << endl;
    cout << &numVal << endl;

    cout << "\nPointer holds:" << endl;
    cout << pntr << endl;

    cout << "\nActual value of numVal:" << endl;
    cout << numVal << endl;

    cout << "\nDereferenced pointer: Val of numVal:" << endl;
    cout << *pntr << endl;

    return 0;
}
