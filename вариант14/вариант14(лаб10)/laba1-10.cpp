#include<iostream>

using namespace std;
int main()
{
    signed char a = 'D';
    signed char *pa = &a;
    signed char &aref = a;

    cout << a << endl;
    cout << *pa << endl;
    cout << aref << endl;
    
    a++;
    *pa += 1;
    aref++;

    cout << a << endl;
    cout << *pa << endl;
    cout << aref << endl;

    cout << pa << endl;
    cout << &aref << endl;
    return 0;
}
