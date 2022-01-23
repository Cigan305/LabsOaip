#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    const int N = 12;
    char mas[N] = {'s', '3', 'k', '#', '@', '!', '<', '?', '+', '%', '*', '~'};
    for(int i = 0; i < N; i++)
    {
        cout << mas[i] << " "; 
    }
    cout << endl;
    
    for(int i = 0; i < N; i++)
    {
        cout << mas[i] << endl; 
    }
    return 0; 
}       

