      
#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    srand(time(NULL));
    const int a = 3;
    const int b = 4;
    char arr[a][b] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};


    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    return 0;
}