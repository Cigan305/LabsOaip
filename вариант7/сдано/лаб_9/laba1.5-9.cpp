#include <iostream>
#include<cmath>

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

    cout << "Print array:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = (rand() % 20)/7.7; 
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    cout << "New vision of array: \n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(j % 2 != 0)
            {
                cout << arr[i][j] << "  ";
            }
        }
    }    
    
    cout << endl;

    for(int i = 0; i < rows; i++)
    {
        delete [] *(arr + i);
    }
    delete [] arr;
    arr = NULL;
    return 0;
}