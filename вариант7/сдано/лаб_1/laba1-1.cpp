#include <iostream>
#include <math.h>  // математическая библиотека
using namespace std;

int main() {
    
    int x, y;
    double result;

    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    result = sqrt(10* x- 5) /3.0 * y; //решения уравнения 
    cout << "Ответ" << result <<  endl; 
    
 system("pause");
 return 0; 
}