#include <iostream>

using namespace std;
int main()
{

    const int a = 100;
    char arr[a];
    cin.getline(arr, 100);   
    for (int i = 0; i < a; i++)
    {
        if((isupper(*(arr + i))))
        {
            cout << *(arr + i) << "  ";
        }  
    }
    cout << endl;

return 0;
}