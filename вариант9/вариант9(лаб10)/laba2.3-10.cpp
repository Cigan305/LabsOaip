#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    const int a = 2;
    const int b = 5;
    const int c = 4;

    char arr[a][b][c];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            for(int k = 0; k < c; k++) {
                *(*(*(arr + i) + j) + k) = 65 + rand() % (90 -65 + 1);
                cout <<  *(*(*(arr + i) + j) + k) << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            for(int k = 0; k < c; k++) {
                if(arr[i][j][k] > 'K' && arr[i][j][k] < 'S') {
                cout << arr[i][j][k] << "  "; 
                }
            }
        }
    }
    return 0;
}