#include <iostream>

using namespace std;

int main() {

    // 32bit truths.
    bool boolean;         // true || false
    char character;       // Characters || small ints (1 byte)
    int integer;          // 4 bytes
    float fp;             // ~7 digits (4 bytes)
    double dbl;           // ~15 digits (8 bytes)
    long double ld;       // ~15 digits (8 bytes)
    long int li;          // 4 bytes
    short int shi;        // 2 bytes
    wchar_t wchr;         // 1 wide character (2 || 4 bytes)

    int num = 5;          // Explicit assignment
    int num2(5);          // Implicit assignment

    float x, y, z;        // Multiple declaration
    float a = 1, b = 2;   // Multiple declaration + assignment

    return 0;
}
