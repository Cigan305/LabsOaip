#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    double T, m;
    const int k = 100;
    const double pi = 3.14;

    cout << "Введите m " << endl;
    cin >> m;
    T = 2 * pi * sqrt(m/k);
    cout << "Ответ: " << T << endl;

return 0;
}
