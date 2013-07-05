#include <iostream>

int add(int x, int y); // Forward declaration (function prototype)

int main() {
    using namespace std;

    int a = 2;
    int b = 4;
    cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << endl;

    return 0;
}

int add(int x, int y) {
    return x + y;
}
