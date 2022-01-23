#include <iostream>
#include<cmath>

using namespace std;
int main() 
{
    double z1, z2, a;
    const double pi = 3.14;

    cout << "Введите a" << endl;
    cin >> a;

    z1 = pow(cos((3/8) * pi  - a/4), 2) - pow(cos((11/8) * pi + a/4), 2);
    z2 = sqrt(2)/2 * sin(a/2);   

    cout << "Число z1: " << z1 << endl;
    cout << "Число z2: " << z2 << endl;
return 0;
}
