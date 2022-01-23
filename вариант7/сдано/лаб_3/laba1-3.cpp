#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, x, y, a, f;
    int p;

    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Меню:\n1)расчитать sh(x)\n2)расчитать x^2\n3)рачитать экспоненту exp(x)\n Выбирете пункт меню: ";
    cin >> (p);
    switch(p)
    {
    case 1:
    {
        f = sinh(x);
        break;
    }
    case 2:
    {
        f = pow(x, 2);
        break;
    }   
    case 3:
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

    cout << "f(x) = " << f << endl;
    
    if (x > y)
    {
        cout << "Выполнятся первая ветка" << endl;
        r = pow(fabs(f - y), 1.0/3.0) + tan(f);
    }
    else if (y > x)
    {
        cout << "Выполнятся вторая ветка" << endl;
        r = (y - pow(f, 3) + cos(f));
    }
    else if (x == y)///////////////
    {
        cout << "Выполнятся третья ветка" << endl;
        r = pow(f + y, 2) + pow(x, 3);
    }

    cout << "Ответ: " << r << endl;
    
    return 0; 
}       

