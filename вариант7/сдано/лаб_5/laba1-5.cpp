#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a=0.1, b=1, h, n=100, x;
    int f=1;
    h = (b - a) / n;
    double s0 = 0, s = 0, y = 0;
    cout << "x |\t\t S(x) | \tY(x)" << endl;
    for (x = a; x <= b; x = x + h)
    {
        for (int i = 0; i < n + 1; i += 2)
        {
            for (int j = 1; j < i; j++)
            {
                f = f * j;
            }
            s0 = pow(2*x, i)/i;
            s = s + s0;
        }
    
        y = exp(2 * x);
        cout << x << " |\t\t" << s << " |\t" << y << endl;
    }

    return 0;
}