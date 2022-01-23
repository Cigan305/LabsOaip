#include <iostream>

using namespace std;

bool sort(int *arr, int a);

int main() {
    const int a = 10;
    int arr[a] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sort(arr, a) << endl;
    return 0;
}

bool sort(int *arr, int a) {
    for(int i = 0; i < a; i++) {
        for(int j = i + 1; j < a; j++) {
            if(arr[i] > arr[j]) {
                return false;
            }
        }
    }
    return true;
}
