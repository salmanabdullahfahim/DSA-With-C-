// Operators
// 1. Arithmetic - +, -, *, /, %, ++, --
//  -- int/int = int, float/float = float, int/float = float, float/int = float

// 2. Relational - >, <, >=, <=, ==, !=

// 3. Logical - &&, ||, !


#include<iostream>
using namespace std;
int main(){

    int a = 10, b = 5;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << a++ << endl;
    cout << a-- << endl;


    // Relational

    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;


    // Logical

    cout << ((a > b) && (a < b)) << endl;
    cout << ((a > b) || (a < b)) << endl;
    cout << (!(a > b)) << endl;

    return 0;
}
