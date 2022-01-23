#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{    
    srand(time(NULL));
    int N;
    cout << "Введите размерность массива A(M): ";
    cin >> N;
    
    int *arr = new int[N];

    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < N; i++)
    {
        arr[i] = rand()%10;
        cout<<arr[i]<<" ";
    }

    cout << endl;

    bool flag = true;

    for(int i = 0; i < N - 1; i++)
    {
        if((arr[i] % 2 == 0) && (arr[i + 1] % 2 != 0))
        {
            cout<<"arr["<<i+1<<"]"<<endl;
            flag = false;
            break;
        }
        if((arr[i] % 2 != 0) && (arr[i + 1] % 2 != 0))
        {
            cout<<"arr["<<i+1<<"]"<<endl;
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
        cout << "0" << endl;
    }

    delete [] arr;
    arr = NULL;
    
    return 0;
}