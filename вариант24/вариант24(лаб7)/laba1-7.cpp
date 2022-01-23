#include <iostream>

using namespace std;
int main()
{
    srand(time(NULL));
    const int N = 7;
    const int M = 6;
    int arr[N][M]; 

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "\t | \t"; 
        }
        cout << endl;
    }


    int sum = 0;
    for(int j = 0; j < M; j++)
    {
        sum += arr[1][j];
    }
    cout << "Сумма 2-ой строки: " << sum << endl;

    return 0; 
}