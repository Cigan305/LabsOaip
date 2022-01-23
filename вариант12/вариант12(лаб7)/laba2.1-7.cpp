#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    const int a = 5;
    const int b = 3;
    char matrix[a][b] = {'s', '3', 'k', '#', '@', '!', 'd', '*', ')', '-', '+', '~', '?', 'p', 'a'};

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

    


 






