#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    const int a = 1159;
    int arr[a];

    for(int  i = 0; i < a; i++)
    {
        arr[i] = 1 + rand() % 11; 
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int  i = 365; i <= 691; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int  i = 902; i <= 1100; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;


    return 0;
}