#include <iostream>
#include <string>

using namespace std;


struct Person {

    string name;
    int age;

    // Metric
    float weight;
    float height;

    string city;
    string state;
    string country;
    int zip;
};

int main() {
    Person student;

    student.age = 29;
    student.name = "Brian Tomlinson";
    student.height = 1.83;
    student.weight = 88.5;
    student.city = "Sola";
    student.state = "Rogaland";
    student.country = "Norway";
    student.zip = 4050;

    cout << "Name:\t\t" << student.name << endl;
    cout << "Age:\t\t" << student.age << endl;
    cout << "Height:\t\t" << student.height << "m" << endl;
    cout << "Weigth:\t\t" << student.weight << "kg" << endl;
    cout << "Location:\t" << student.city << ", " << student.state << ",\n\t\t"\
         << student.country << ", " << student.zip << endl;
    return 0;
}
