#include<iostream>
#include<time.h>


using namespace std;

void FillArray(uint arr[], const int a);

bool Sum(uint arr[], const int a, int x);

int main()
{
    const int a = 10;
    uint arr[a];
    int x;

    cout << "Введите число: ";
    cin >> x;
    
    FillArray(arr, a);
    cout << Sum(arr, a, x) << endl;

}

void FillArray(uint arr[], const int a)
{
    srand(time(NULL));
    for(int i = 0; i < a; i++)
    {
        arr[i] = rand() % 20;
        cout << arr[i] << "  ";
    } 
    cout << endl;
}


bool Sum(uint arr[], const int a, int x)
{
    int sum = 0, res;
    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
    }

    cout << "Сумма элемнтов массива: " << sum << endl; 

    return sum > x; 
}