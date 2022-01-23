#include <iostream>
#include <cmath>

using namespace std;
double U(double x)
{
    if (x <= 1.5)
        return x*x-x+1;
    if (x > 2.5)
        return pow(sin(x-1),3) + cos(x+1);
    return atan(x);
}


double Y(double x)
{
    return 1.5 + log(abs(sin(U(x))));
}

void Show(double a, double b, double h)
{
    for (double i = a; i < b; i+=h) {
        cout<< i << "\t|\t" << Y(i) << "\t|\t" <<  endl;
    }
}

bool foo(int a) {
    
    for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    double a,b,h;
    int n;
    cout << "Левый предел: ";
    cin >> a;
    cout << "Правый предел: ";
    cin >> b;
    cout << "Прирост (>0): ";
    cin >> h;
    if (a>b){
        cout << "Ошибка! Левый предел больше правого!" << endl;
        return -1;
    }
    if (h<=0)
    {
         cout << "Ошибка! Прирост меньше или равен нулю!" << endl;
        return -1;
    }
    Show(a,b,h);
    return 0;
}
