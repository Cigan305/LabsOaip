#include <iostream>
#include <cmath>

using namespace std; 

double func(double start, double end, double n);

int main() {

    double start = 0;
    double end = 0;
    double n = 0;

    cout << "Введите с какого числа начать: ";
    cin >> start;

    cout << "Введите каким числом закончить: ";
    cin >> end;

    cout << "Введите число n: ";
    cin >> n;

    cout << "Ответ: " << func(start, end, n) << endl;
    return 0;
}

double func(double start, double end, double n) {
    if(start > end) {
        return sqrt(2*n);
    }
    return start + sqrt(func(start + 2, end, n));  
}