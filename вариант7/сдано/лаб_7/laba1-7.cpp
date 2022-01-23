#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int a = 3;
    const int b = 4;
    int matrix[a][b];

    cout << "Print array:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            matrix[i][j] = rand() % 16 + 5;
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }

    int min = matrix[0][0];
    for(int j = 0; j < b; j++)
    {
        if(matrix[0][j] < min )
        {
            min = matrix[0][j];
        }
    }   

    cout << endl;
    
    cout << "Наименьшее значение 1-ой строки: " << min << endl;

    int min3 = matrix[2][0];
    for(int j = 0; j < b; j++)
    {
        if(matrix[2][j] < min3)
        {
            min3 = matrix[2][j];
        }
    }   
    
    cout << "Наименьшее значение 3-ей строки: " << min3 << endl;

    for(int j = 0; j < b; j++)
    {
        if(matrix[0][j] == min)
        {
            matrix[0][j] = min3;
            break;
        }
        
    }   

    for(int j = 0; j < b; j++)
    {
        if(matrix[2][j] == min3)
        {
            matrix[2][j] = min;
            break;
        } 
    }   

    cout << endl;
    cout << "Print new array:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }
    return 0;
}

    


 






