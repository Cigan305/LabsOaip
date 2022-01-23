#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a;
    cout << "Введите а" << endl;
    cin >> a;
    if (a > -120 && a < -100)
    {
        cout << "Число "  << a << " относится к группе А" << endl;
    }
    else if (a > 100 && a % 5 == 0) 
    {
        cout << "Число "  << a << " относится к группе B" << endl;
    }
    else if (a % 2 == 0 && a < 0)
    {
        cout << "Число "  << a << " относится к группе C" << endl;
    }
    else
    {
         cout << "Число "  << a << " относится к группе D" << endl;
    }
    
    return 0; 
}       

