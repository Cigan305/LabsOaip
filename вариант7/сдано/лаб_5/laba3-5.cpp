#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14;
double S(double x, uint n)
{
    double result = 0;
    for (int k = 1; k < n; k++) {
        result += (pow(x,k)*cos(k*pi/3.0))/k;
    }
    return result;
}

double Y(double x)
{
    return -1/2.0*log(1-2*x*cos(pi/3)+x*x);
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
        cout << "Левый предел больше правого!" << endl;
        return -1;
    }
    if (h<=0)
    {
        cout << "Прирост меньше или равен нулю!" << endl;
        return -1;
    }
    cout << "Точность вычислений (натуральное число): ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Точность должна быть натуральным числом!" << endl;
        return -1;
    }
    cout<< "x" << "\t|\t" << "S(x)" << "\t\t|\t" << "Y(x)" << "\t\t|\t" << "|S(x) - S(y)|" << endl;
    for (double i = a; i < b; i+=h) {
        cout<< i << "\t|\t" << S(i, n) << "\t|\t" << Y(i) << "\t|\t" << abs(S(i,n) - Y(i)) << endl;
    }
    return 0;
}
