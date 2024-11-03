// Type casting -- Convert data from one type to another

// 1. Implicit -- automatically
// 2. Explicit -- manually

#include<iostream>
using namespace std;

int main()
{
    char ch = 'a';
    int value = ch; // implicit
    cout << "value = " << value << endl;

    double price = 34.99;

    int value2 = (int)price; // explicit
    cout << "value2 = " << value2 << endl;
    return 0;
}