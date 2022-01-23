#include<iostream>
#include "Grigorenko.h"

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
    
    float** arr = new float* [rows];

    if(arr == NULL)
    {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < rows; i++)
    {
        arr[i] = new float[cols];
    }

    randValue(arr, rows, cols);
    cout << "Среденее ариметическое: " << srednArifm(arr, rows, cols) << endl;
    cout << "Сумма элементов главной диагонали, которые больше сред.арифм: " << sumDiag(arr, rows, cols) << endl;

    float x = 0;

    cout << "Введите x: ";
    cin >> x;

    cout << "Произведение элементов, которые не лежат в главной диагонал и больше значение х: " << Multiply(arr, rows, cols, x) << endl;

    cout << "Максимальный элемент массива: " << maxValue(arr, rows, cols) << endl;

    for(int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }

    cout << "Количество элементов которые больше сред.арифм индексы которых не пренадлежат к главной диагонале: " << Check(arr, rows, cols) << endl;

    delete [] arr;
    arr = NULL;

    return 0;
}


