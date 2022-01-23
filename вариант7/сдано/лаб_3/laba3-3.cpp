#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    double c, x, d, k, y, z;

    cout << "Введите с" << endl;
    cin >> c;
    cout << "Введите z" << endl;
    cin >> z;
    cout << "Введите d" << endl;
    cin >> d;
    cout << "Введите k" << endl;
    cin >> k;

    if (z < 0)
    {
         x = pow((z), 2) - z;
         cout << "Выполняется ветка 1" << endl;
    }
    else 
    {
        x = pow(z, 3);
        cout << "Выполняется ветка 2" << endl;
    }
    y = pow(sin(c * x + pow(d,2) + k * pow(x, 2)), 3);
    cout << "Ответ: " << y << endl;

return 0;
}
