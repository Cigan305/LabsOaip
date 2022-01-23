#include<iostream>
#include<time.h>

using namespace std;

int foo(int *arr, int n, int i);

int main() {

    srand(time(NULL));
    int n = 0, i = 0; 
    cout << "Введите размерность массива: ";
    cin >> n;
    
    int *arr = new int[n];
    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    cout << "Print array:\n";
    for(int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 21 + (- 10);
        cout << *(arr + i) << "\t";
    }

    cout << endl;
    cout << "Максимальный элемент массива: " << foo(arr, n, i) << endl;

    delete [] arr;
    arr = NULL;
}

int foo(int *arr, int n, int i) {
    static int max = arr[0];

    if(i > n){
        return max;
    }

    if(arr[i] > max) {
        max = arr[i];
    }

    return foo(arr, n, i + 1);
}