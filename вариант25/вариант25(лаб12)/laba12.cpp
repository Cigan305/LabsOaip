#include<iostream>
#include "Chuzhavko.h"

void randValue(long double** arr, int rows, int cols);

using namespace std;
int main()
{
    int rows = 0;
    int cols = 0;

    cout << "Введите количество строк: ";
    cin >> rows;

    cout << "Введите количество столбцов: ";
    cin >> cols;


    while (rows < 0 || cols < 0)
    {
        cout << "Введите количество строк: ";
        cin >> rows;

        cout << "Введите количество столбцов: ";
        cin >> cols;
    }
    
    long double**arr = new long double* [rows];

    if(arr == NULL)
    {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < rows; i++)
    {
        arr[i] = new long double[cols];
    }

    randValue(arr, rows, cols);

    cout << "Сумма элементов главной диагонали, не относящихся к четным строкам: " << sumDiag(arr, rows, cols) << endl;
    cout << "Средн. арифм: " << srednArifm(arr, rows, cols) << endl;
    cout << "Произведение всех элементов, не входящих в главную диагональ и больших средне арифм: " << multiply(arr, rows, cols) << endl;
    cout << "Максимальный элемент: " << zamen(arr, rows, cols) << endl;
    cout << "Количество чисел которые меньше средне арифм: " << count(arr, rows, cols) << endl;

    for(int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
    arr = NULL;

    return 0;
}


void randValue(long double** arr, int rows, int cols)
{
    srand(time(NULL));
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = ( 10 + rand() % (50 - 10 + 1))/7.7;
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
