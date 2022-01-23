#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double s, x, f, b;
    int p;

    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Меню:\n1)Расчитать x^2\n2)рачитать экспоненту exp(x)\n Выбирете пункт меню: ";
    cin >> (p);
    switch(p)
    {
    case 1:
    {
        f = pow(x, 2);
        break;
    }   
    case 2:
    {
        f = exp(x);
        break;
    } 
    default:
    {
        cout << "такого варианата нет.\n";
        return 0;
    }
    }    
    cout << "x= " << x << endl;
    cout << "b= " << b << endl;
    cout << "f(x) = " << f << endl;
    
    if (x*b > 1 && x*b < 10)
    {
        cout << "Выполнятся первая ветка" << endl;
        s = exp(f);
    }
    else if (x*b >= 10 && x*b < 40)
    {
        cout << "Выполнятся вторая ветка" << endl;
        s = sqrt(fabs(f + 4 * b));
    }
    else 
    {
        cout << "Выполнятся третья ветка" << endl;
        s = b * pow(x, 2);
    }

    cout << "s = " << s << endl;
    
    return 0; 
}       

