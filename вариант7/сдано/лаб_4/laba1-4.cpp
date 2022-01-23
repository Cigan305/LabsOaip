#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double t2, m, r;
    cout << "ВВедите m" << endl;
    cin >> m;
    cout << "ВВедите r" << endl;
    cin >> r;
    if (m >= r  && m < 2*r)
    {
        cout << "Выполняется первая ветка" << endl;
        t2 = sqrt(fabs(3*m - 5*r)) * exp(m/r);
    }    
    if (m > 2*r)
    {
        cout << "Выполняется вторая ветка" << endl;
        t2 = sqrt(fabs(3*m + 5*r)) * exp(r/m);
    }
    cout << "Ответ: " << t2 << endl;
    return 0;

}       
