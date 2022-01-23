#include <iostream>
using namespace std;

int main() {
    
    long double a = 2.5;
    long double *pa = &a;
    long double &aRef = a;

    cout << pa << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    cout << "=======================" << endl;

    long double x = 0;
    cin >> x;

    a = x;
    
    cout << a << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    cout << "=======================" << endl;

    a += 2;
    *pa += 2;
    aRef += 2;

    cout << a << endl;
    cout << *pa << endl;
    cout << aRef << endl;
    
    return 0; 
}