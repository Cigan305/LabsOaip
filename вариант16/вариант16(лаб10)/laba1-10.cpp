#include<iostream>

using namespace std;
int main()
{
    long double a = 23.3;
    long double *pa = &a;
    long double &aRef = a;

    cout << pa << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    long double x = 0;
    cin >> x;

    a = x;
    
    cout << a << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    a += 3;
    *pa += 3;
    aRef += 3;

    cout << a << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    
    return 0;
}