#include <iostream>
#include "calc.h"

using namespace std;

int getNumInput() {

    cout << 'Please enter an integer: ' << endl;

    int num;
    cin >> num;

    return num;
}

char getOperation() {

    cout << 'Please choose an operation (+, -, *, /, **, ^) ' << endl;

    char op;
    cin >> op;

    return op;
}

int checkOperation(char op, int x, int y) {

    switch (op) {
    case '+':
        return add(x, y);
        break;
    case '-':
        return subtract(x, y);
        break;
    case '*':
        return multiply(x, y);
        break;
    case '/':
        return divide(x, y);
        break;
    default:
        cout << 'Operation not understood!' << endl;
        return 0;
    }
}

int main() {

    int x = getNumInput();
    char op = getOperation();
    int y = getNumInput();
    cout << checkOperation(op, x, y);
    return 0;
}
