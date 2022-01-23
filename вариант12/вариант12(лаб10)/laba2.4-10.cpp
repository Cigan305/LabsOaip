#include <iostream>

using namespace std;
int main()
{

    const int a = 100;
    char arr[a];
    cin.getline(arr, 100);   
    for (int i = 0; i < a; i++)
    {
        if(arr[i] == ' ')
        {
            cout << &i << "  ";
        }  
    }
    cout << endl;

return 0;
}