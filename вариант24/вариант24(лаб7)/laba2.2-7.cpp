#include <iostream>

using namespace std;
int main() 
{       
    const int a = 4;
    const int b = 2;
    double arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << "Введите arr["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }

    cout << endl;

    cout << "Print array:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "\t | \t";
        }
        cout << endl;
    }

    return 0;
}