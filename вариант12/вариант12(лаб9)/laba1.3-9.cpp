#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int rows = 0;
    int cols = 0;

    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    while(rows < 0 || cols < 0)
    {
        cout << "Отрицательные значения недопустимы, введите количество строк: ";
        cin >> rows;
        cout << "Отрицательные значения недопустимы, введите количество столбцов: ";
        cin >> cols;
    }  

    int **arr = new int* [rows];  

    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < rows; i++)
    {
        *(arr + i) = new int[cols];
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = -95 + rand() % (-81 - (-95) + 1);
        }
    }

    cout << "Print array:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "  |   ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Print new array:\n";
    for(int i = rows - 1; i >= 0; i--)
    {
        for(int j = cols - 1; j >= 0; j--)
        {
            cout << arr[i][j] << "  |   ";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++)
    {
        delete [] *(arr + i);
    }
    delete [] arr;
    arr = NULL;
    return 0;
}       
