#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int t = 0;

    cout << "Введите t: ";
    cin >> t;

    int a = 0;
    cout << "Введите размерность массива A(M): ";
    cin >> a;
    
    int *masA = new int[a];

    if(masA == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

     int d = 0;
    for(int i = 0; i < a; i++)
    {
        masA[i] = -10 + rand() % 21;
        if(masA[i] > t)
        {
            d += 1;
        }
    } 


    int b = 0;
    cout << "Введите размерность массива B(M): ";
    cin >> b;

    int *masB = new int[b];
    if(masB == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    int e = 0;
    for(int i = 0; i < b; i++)
    {
        masB[i] = -10 + rand() % 21;
        if(masB[i] > t)
        {
            e += 1;
        }
    } 


    if(d < e)
    {
        cout << "Количество элементов которые больше в t masA: " << d << endl;

        for(int i = 0; i < a; i++)
        {
            cout << masA[i] << "  ";
        }   
        
        cout << endl;
        cout << "Количество элементов которые больше в t masA: " << d << endl;

        for(int i = 0; i < b; i++)
        {
            cout << masB[i] << "  ";
        } 

    }

    
    else if(e < d)
    {
        cout << "Количество элементов которые больше в t masB: " << e << endl;

        for(int i = 0; i < b; i++)
        {
            cout << masB[i] << "  ";
        }   
        
        cout << endl;
        cout << "Количество элементов которые больше в t masA: " << d << endl;

        for(int i = 0; i < a; i++)
        {
            cout << masA[i] << "  ";
        } 
    }

    else
    {
        cout << "Нет элементов больше t.";
    }

    cout << endl;
    

    delete [] masA;
    masA = NULL;
    
    delete [] masB;
    masB = NULL;
    return 0;
}