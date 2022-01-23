#include <iostream>
using namespace std;

int main() {

    const int a = 1, c = 2; 
    int b, x; 
    double result;
        
    cout << "Введите число b: " << endl;
    cin >> b;
    cout << "Введите число x: " << endl;
    cin >> x;
    result = (x * x) - a * x + b - c; // решения уравнения 
    cout << "Результат уравнения: " << result << endl;

return 0;
}
