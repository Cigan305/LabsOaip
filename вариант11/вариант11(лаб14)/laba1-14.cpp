#include<iostream>

using namespace std;

void foo(int arr[], int a) {
    if(a == 0) {
        return;
    }
    cout << arr[a - 1] << " ";
    foo(arr, a - 1);

}

int main() {
    const int a = 5;
    int arr[a];

    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    foo(arr, a);
}