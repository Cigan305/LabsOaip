#include <iostream>
#include "Grigorenko.h"
#include<time.h>

using namespace std;
float srednArifm(float** arr, int rows, int cols)
{
    float sum1 = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
           sum1 += arr[i][j];
        }
    }
    return sum1/(rows * cols); 
}


float sumDiag(float** arr, int rows, int cols)
{
    float foo = srednArifm(arr, rows, cols);
    float sum2 = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j && arr[i][j] > foo)
            {
                sum2 += arr[i][j];

            }        
        }
    }

    return sum2;
}

float Multiply(float** arr, int rows, int cols, float x)
{
    float multiply = 1;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i != j && arr[i][j] > x)
            {
                multiply *= arr[i][j];
            }
        }
    }
    return multiply;
}

float maxValue(float** arr, int rows, int cols, int *p, int &r)
{
    float max = arr[0][0], indexI = 0, indexJ = 0;
    *p = indexI; 
    r = indexJ;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] > max)
            {
                max =arr[i][j];
                indexI = i;
                indexJ = j;
            }
        }
    }

    return max;
}

int Check(float** arr, int rows, int cols)
{
    float foo = srednArifm(arr, rows, cols);
    int count = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {   
            if(i != j && arr[i][j] > foo)
            {
                count++;
            }    
        }
    }
    return count;
}

void randValue(float** arr, int rows, int cols)
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