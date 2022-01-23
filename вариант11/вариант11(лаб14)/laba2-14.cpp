#include<iostream>
#include<cmath>

using namespace std;

void foo(int x, int n) {
    int y = 0;
    if(n == 0) {
        return;
    }
    
    y = (n % 2 == 0) ? pow(pow(x, n/2), 2) : x * pow(x, n-1); 

    cout << y << endl;
    foo(x, n - 1);
}

int main() {
    int x = 0;

    cout << "Введите x: ";
    cin >> x;

    int n = 0;

    cout << "Введите n: ";
    cin >> n;

    foo(x, n);

    return 0;
}