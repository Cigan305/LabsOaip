#include <iostream>

using namespace std;

int sum(int* arr, int a);
int proiz(int* arr, int a);
int count(int* arr, int a);

int main() {
    const int a = 10;
    int arr[a] = {18, 64, 3, 4, 24, 6, 7, 8, 9, 10};
    cout << "Сумма: " << sum(arr, a) << endl;
    cout << "Произведение: " << proiz(arr, a) << endl;
    cout << "Количество положительных элементов: " << count(arr, a) << endl;
    return 0;
}


int sum(int* arr, int a) {
    int sum = 0;
    for(int i = 0; i < a; i++) {
        if(arr[i] % 8 == 0) {
            sum += arr[i]; 
        }
    }
    return sum;
}

int proiz(int* arr, int a) {
    int proiz = 1;
    for(int i = 0; i < a; i++) {
        if(arr[i] % 8 == 0) {
            proiz *= arr[i]; 
        }
    }
    return proiz;
}

int count(int* arr, int a) {
    int count = 0;
    for(int i = 0; i < a; i++) {
        if(arr[i] > 0) {
            count++;
        }
    }
    return count;
}


