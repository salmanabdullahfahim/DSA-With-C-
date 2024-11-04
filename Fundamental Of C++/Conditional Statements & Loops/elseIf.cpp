#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num >= 90)
    {
        cout<<"A grade";
    }
    else if(num >= 80)
    {
        cout<<"B grade";
    }
    else if(num >= 70)
    {
        cout<<"C grade";
    }
    else if(num >= 60)
    {
        cout<<"D grade";
    }
    else
    {
        cout<<"F grade";
    }
    return 0;
}