#include <iostream>
using namespace std;

int main() {
    
    unsigned short int a = 10;
    unsigned short int *pa = &a;
    unsigned short int &aRef = a;

    cout << pa << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    unsigned short int x = 0;
    cin >> x;

    a = x;
    
    cout << a << endl;
    cout << *pa << endl;
    cout << aRef << endl;

    a -= 2;
    *pa -= 2;
    aRef -= 2;

    cout << a << endl;
    cout << *pa << endl;
    cout << aRef << endl;
    
    return 0; 
}