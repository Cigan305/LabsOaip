#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    double x, y, R;

    cout << "Введите R " << endl;
    cin >> R;
    cout << "Введите x " << endl;
    cin >> x;
    cout << "Введите y " << endl;
    cin >> y;
    
    if (x > R || y > R)
   {
       cout << "Точка A("<< x << "," << y << ")лежит за пределами окружности" << endl;
   }
   else 
   {
       cout << "Точка A("<< x << "," << y << ")лежит в окружности" << endl;
   }
return 0;
}
