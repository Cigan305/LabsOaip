#include <iostream>
#include <cmath>

using namespace std; 

double func(int *arr, int a);

int main() {

    const int a = 5;
    int arr[10] = {1, 2, 3, 4, 5};
    
    cout << "Произведение: " << func(arr, a) << endl;

    return 0;
}

double func(int *arr, int a) {
    if(a == 0) {
        return arr[0];
    }
    return arr[a - 1] * func(arr, a - 1);
    
}

