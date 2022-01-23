#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    double x, y, z, w;
    
    cout << "Введите x" << endl;// 4000
    cin >> x;
    cout << "Введите y" << endl;//-0.875
    cin >> y;
    cout << "Введите z" << endl;//-0.000475
    cin >> z;
    
    w = pow(fabs(cos(x) - cos(y)), (1 + 2 * pow(sin(y), 2))) * (1 + z + pow(z,2)/2 + pow(z,3)/3 + pow(z, 4)/4);//1.9873
    cout << "Ответ: " << w << endl;
return 0;
}