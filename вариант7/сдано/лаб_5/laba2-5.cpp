#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int a, b;
    int c;
    cin >> a >> b;

    a > b ? c = a : c = b;

    for (int i = c; i > 0; i--) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            cout << "Наибольший делитель = " << i << endl;
            break;
        }
    }
    return 0;
}