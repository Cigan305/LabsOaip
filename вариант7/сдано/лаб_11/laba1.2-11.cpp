#include<iostream>
#include<time.h>
#include<cmath>

using namespace std;
void FillArray(double arr[], const int a);

double Root(double arr[], const int a);

double Sum(double arr[], const int a);

double Multiply(double arr[], const int a);

int main()
{
    const int a = 5;
    double arr[a];

    FillArray(arr, a);
    Root(arr, a);
    cout << Sum(arr, a) << endl;
    cout << Multiply(arr, a) << endl;

    return 0;
}

void FillArray(double arr[], const int a)
{
    srand(time(NULL));
    for(int i = 0; i < a; i++)
    {
        arr[i] = rand() % 20;
        cout << arr[i] << "  ";
    }
    cout << endl;
}


double Root(double arr[], const int a)
{
    int res;
    for(int i = 0; i < a; i++)
    {
        arr[i] = sqrt(arr[i]);
    }

}

double Sum(double arr[], const int a)
{
    double sum = 0;
    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double Multiply(double arr[], const int a)
{
    double multiply = 1;
    for(int i = 0; i < a; i++)
    {
        multiply *= arr[i];
    }
    return multiply;
}