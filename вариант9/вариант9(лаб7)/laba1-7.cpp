#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    srand(time(NULL));
    const int a = 6;
    const int b = 6;
    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    int d = 0;
    for(int i = 0; i < a; i++)
    {
        int sum = 0;
        double res;
        for(int j = 0; j < b; j++)
        {
            sum += arr[j][i];      
        }
        res = sum/a;
        cout << "Среднее арифметическое " << d << " столбца: " << res << endl;
        d++;
    }

    cout << "===================================" << endl;

    int e = 0, f = 0;
    for(int i = 0; i < a; i++)
    {
        int max = arr[0][0], min = arr[0][0];
        for(int j = 0; j < b; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }  
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }      
        }
        cout << "Максимальное значение " << e << " строки: " << max << endl;
        cout << "Минимальное значение " << f << " строки: " << min << endl;
        cout << "===================================" << endl;
        e++;
        f++;
    }







return 0;
}