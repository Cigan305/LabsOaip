#include<iostream>
#include "Kureshev.h"

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
    
    double** arr = new double* [rows];

    if(arr == NULL)
    {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < rows; i++)
    {
        arr[i] = new double[cols];
    }

    randValue(arr, rows, cols);
    cout << "Среденее ариметическое: " << srednArifm(arr, rows, cols) << endl;

    cout << "Сумма элементов главной диагонали: " << sumDiag(arr, rows, cols) << endl;

    cout << "Произведение элементов, которые не лежат в главной диагонали: " << Multiply(arr, rows, cols) << endl;

    cout << "Максимальный элемент массива: " << maxValue(arr, rows, cols) << endl;

    cout << "Количество элементов которые меньше сред.арифм: " << proverka(arr, rows, cols) << endl; 

    for(int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
    arr = NULL;

    return 0;
}


