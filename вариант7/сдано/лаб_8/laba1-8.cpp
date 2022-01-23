#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int a = 0;
    cout << "Введите размерность массива A(N): ";
    cin >> a;
    
    int *masA = new int[a];

    if(masA == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++)
    {
        *(masA + i) = rand() % 20;
    }

    int max1 = masA[0];
    for(int i = 0; i < a; i++)
    {
        if(*(masA + i) > max1)
        {
            max1 = *(masA + i);
        }   
    }
    cout << "Максимальное = " <<  max1 << endl;

    int b = 0;
    cout << "Введите размерность массива B(M): ";
    cin >> b;

    int *masB = new int[b];
    if(masB == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < b; i++)
    {
        *(masB + i) = rand() % 20;
    } 

    int max2 = masB[0];

    for(int i = 0; i < b; i++)
    {
        if(*(masB + i) > max2)
        {
            max2 = *(masB + i);
        }   
    }
    cout << "Максимальное = " <<  max2 << endl;
    
    if(max1 > max2)
    {
        for(int i = 0; i < a; i++)
        {
            cout << *(masA + i) << "    ";
        }
        cout << endl;
        for(int i = 0; i < b; i++)
        {
            cout << *(masB + i) << "    ";
        }
    }
    else if(max2 > max1)
    {
        for(int i = 0; i < b; i++)
        {
            cout << *(masB + i) << "    ";
        }
        cout << endl;
        for(int i = 0; i < a; i++)
        {
            cout << *(masA + i) << "    ";
        }
    }
    else
    {
        cout << "Максимальные числа обоих массивов равны!!!" << endl;
    }

    delete [] masA;
    masA = NULL;
    
    delete [] masB;
    masB = NULL;
    return 0;
}