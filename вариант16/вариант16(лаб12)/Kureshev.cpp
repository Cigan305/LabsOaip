#include <iostream>
#include "Kureshev.h"
#include<time.h>

using namespace std;
double srednArifm(double** arr, int rows, int cols)
{
    double sum1 = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
           sum1 += arr[i][j];
        }
    }
    return sum1/(rows * cols); 
}


double sumDiag(double** arr, int rows, int cols)
{
    double sum2 = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j)
            {
                sum2 += arr[i][j];

            }        
        }
    }

    return sum2;
}

double Multiply(double** arr, int rows, int cols)
{
    double multiply = 1;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i != j)
            {
                multiply *= arr[i][j];
            }
        }
    }
    return multiply;
}

double maxValue(double** arr, int rows, int cols)
{
    double max = arr[0][0], indexI = 0, indexJ = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] > max)
            {
                max =arr[i][j];
            }
        }
    }

    return max;
}

int proverka(double** arr, int rows, int cols)
{
    double foo = srednArifm(arr, rows, cols);
    int count = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {   
            if(arr[i][j] < foo)
            {
                count++;
            }    
        }
    }
    return count;
}

void randValue(double** arr, int rows, int cols)
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
    return;
}