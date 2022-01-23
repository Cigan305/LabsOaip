#include<iostream>
#include<cmath>

using namespace std;

double foo(int a, int b) {
    if(a > b) {
        return sqrt(81 + sqrt(100));
    }
    return sqrt(a + foo(a + 3, b));
}

int main()
{
    int a = 0;
    int b = 0;
    
    cout << "Введите начало: ";
    cin >> a;

    cout << "Введите конец: ";
    cin >> b;

    cout << foo(a, b) << endl;
    return 0;
}
