#include<iostream>
using namespace std;

int main(){
    int age = 22; // integer - 4 bytes
    char ch = 'a'; // character - 1 byte
    float PI = 3.14f; // float - 4 bytes
    double PI2 = 3.14; // double - 8 bytes
    bool isMale = true; // boolean - 1 byte
    string name = "Fahim"; // string - variable length

    cout << age << endl;
    cout << ch << endl;
    cout << PI << endl;
    cout << PI2 << endl;
    cout << isMale << endl;
    cout << name << endl;
    return 0;
}