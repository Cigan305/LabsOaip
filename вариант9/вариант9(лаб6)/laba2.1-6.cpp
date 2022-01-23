#include<iostream>

using namespace std;
int main()
{
    const int a = 8;
    int arr[a] = {10, 20, 30, 40, 50, -60, 70, 80};

    for(int  i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int  i = 0; i < a; i++)
    {
        arr[i] -= 5;
        cout << arr[i] << " ";
    }

    cout << endl;

   
    return 0;
}