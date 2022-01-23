#include <iostream>

using namespace std;
int main() 
{       
    const int a = 7;
    const int b = 5;
    double arr[a][b] = {5.1, 2.7, 3.3, 4.4, 5.5, 9.6, 7.7, 8.8, 2.9, 1.1, 2.2, 333.3, 44.4, 565.5, 66.6, 77.7, 878.8, 989.9, 434.6, 662.7, 215.4, 2.4, 3.5, 2.5, 25.3, 2.7, 7.8, 2.9, 5.7, 6.9, 3.9, 44.5, 67.9, 12.4, 44.7};

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
            if(i % 2 == 0)
            {
                cout << arr[i][j] << "    ";
            }
        }
        cout << endl;
    }

    return 0;
}