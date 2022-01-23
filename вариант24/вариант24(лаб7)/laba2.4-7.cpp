 #include <iostream>

using namespace std;
int main() 
{       
    const int a = 19;
    const int b = 10;
    int arr[a][b];
    int k = 99;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = k;
            k -= 2;   
        }
    }

    cout << "Print masiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }
   
    cout << "Print new masiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] += 11; 
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    return 0;
}