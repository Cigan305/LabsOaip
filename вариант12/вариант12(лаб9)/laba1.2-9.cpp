#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

int main()
{
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

    double **arr = new double* [rows];

    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < rows; i++)
    {
        *(arr + i) = new double[cols];
    }


    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "Введите arr["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Print array:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "    ;    ";
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