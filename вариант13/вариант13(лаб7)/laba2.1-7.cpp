#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    const int a = 3;
    const int b = 2;
    char matrix[a][b] = {'s', '3', 'k', '#', '@', '!'};

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

    


 






