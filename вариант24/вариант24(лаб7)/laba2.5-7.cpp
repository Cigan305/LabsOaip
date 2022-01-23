#include <iostream>

using namespace std;
int main() 
{       
    const int a = 4;
    const int b = 7;
    double arr[a][b] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9, 44.6, 66.7, 21.4, 22.44, 23.5, 24.5, 25.6, 26.7, 27.8, 28.9};

    cout << "Show massiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    cout << "Show new massiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(j % 2 != 0)
            {
                cout << arr[i][j] << "    ";
            }
        }
        cout << endl;
    }

    return 0;
}