#include "Chuzhavko.h"

long double sumDiag(long double** arr, int rows, int cols)
{
    long double sum2 = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j && i % 2 != 0)
            {
                sum2 += arr[i][j];
            }        
        }
    }

    return sum2;
}  

long double srednArifm(long double** arr, int rows, int cols)
{
    long double sum1 = 0, res;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
           sum1 += arr[i][j];
           res = sum1/(rows * cols); 
        }
    }
    return res;
}

long double multiply(long double** arr, int rows, int cols) {
    long double Myltiply = 1;
    long double foo = srednArifm(arr, rows, cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
           if(i != j && arr[i][j] > foo) {
               Myltiply *= arr[i][j];
           }
        }
    }
    return Myltiply;
}

long double zamen(long double** arr, int rows, int cols) {

    long double max = arr[0][0];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    long double min = arr[0][0];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == max) {
                min = max;
            }
        }
    }
    return max;
}

long double count(long double** arr, int rows, int cols) {

    long double count = 0;
    long double foo = srednArifm(arr, rows, cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] < foo) {
                count++;
            }
        }
    }
    return count;
}


