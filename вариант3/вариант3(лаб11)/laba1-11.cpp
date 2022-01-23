#include<iostream>
#include<string.h>

 
using namespace std;

bool foo(int arr[], int a) {
    for(int i = 0; i < a; i++) {
        for(int j = i+1; i < a; i++) {
            if(arr[i] != arr[j + 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    
    const int a = 10;
    int arr[a] = {3,3,3,3,3,3,3,3,3,3};
    cout << foo(arr, a) << endl;
    return 0;

}