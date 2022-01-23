#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    const int a = 3;
    const int b = 6;
    double matrix[a][b] = {2.53, 14.8, 41.3, 5.61, 3.05, 5.55, 5.56, 48.3, 1.01, 3.15, 10.9, 18.9, 38.4, 69.9, 15.3, 81.1, 30.1, 90.9};
    
     for(int i = 0; i < a; i ++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << matrix[i][j] << "   |   ";
        } 
        cout << endl;
    }

    cout << "New vision of array\n";
    for(int i = 0; i < a; i ++)
    {
        for(int j = 0; j < b; j++)
        {
            if(i % 2 != 0 || j % 2 != 0)
            {
                cout << matrix[i][j] << "   ,   ";
            }
        } 
    }
    
    return 0;
}

    


 






