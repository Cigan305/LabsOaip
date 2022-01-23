#include<iostream>

using namespace std;
int main()
{
    const int a = 20;
    const int b = 5;
    int arr[a][b] = { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
                -79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
                -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
                30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
                -97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
                -25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
                88, -61, 0, -64, -83, 97, 0, 90, 15, -8,
                -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
                98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
                78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };

    int min = arr[0][0], indexI = 0, indexJ = 0;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
    }

    cout << "Индекс минимального элемента["<<indexI<<"]["<<indexJ<<"]." << endl;

    int max = arr[0][0], IndexI = 0, IndexJ = 0;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
                IndexI = i;
                IndexJ = j;
            }
        }
    }

    cout << "Индекс максимального элемента["<<IndexI<<"]["<<IndexJ<<"]." << endl;

    return 0;
}