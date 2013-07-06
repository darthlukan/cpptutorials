#include <iostream>

int add(int x, int y) {
    return x + y;
}

int multiply(int z, int w) {
    return z * w;
}

int main() {
    using namespace std;

    cout << add(4, 5) << endl;
    cout << add(5, 5) << endl;

    int a = 100;
    int b = 50;

    cout << add(a, b) << endl;
    cout << add(1, multiply(a, b)) << endl;
    cout << multiply(add(a, a), multiply(b, b)) << endl;

    return 0;
}
