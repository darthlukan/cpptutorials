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

    cout << "bool:\t\t" << sizeof(boolean) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(character) << " bytes" << endl;
    cout << "wchar_t:\t\t" << sizeof(wchr) << " bytes" << endl;
    cout << "short:\t\t" << sizeof(shi) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(integer) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(fp) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(li) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(dbl) << " bytes" << endl;
    cout << "long double:\t\t" << sizeof(ld) << " bytes" << endl;

    return 0;
}
