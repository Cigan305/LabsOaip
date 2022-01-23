#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int a = 0;
    cout << "Введите размерность массива A(M): ";
    cin >> a;
    
    int *masA = new int[a];

    if(masA == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++) {
        cout << "Введите arr["<<i<<"]: ";
        cin >> masA[i];
    }
    
    int max1 = masA[0];
    for(int i = 0; i < a; i++) {
        if(masA[i] > max1) {
            max1 = masA[i];
        }
    }

    cout << "Максимальное: " << max1 << endl;

    int multiply1 = 1;
    for(int i = 0; i < a; i++) {
        multiply1 = max1 * masA[i];
        cout << multiply1 << endl;
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

    for(int i = 0; i < b; i++) {
        cout << "Введите arr["<<i<<"]: ";
        cin >> masB[i];
    }

    int max2 = masB[0];
    for(int i = 0; i < b; i++) {
        if(masB[i] > max2) {
            max2 = masB[i];
        }
    }

    cout << "Максимальное: " << max2 << endl;   
    
    int multiply2 = 1;
    for(int i = 0; i < b; i++) {
        multiply2 = max2 * masB[i];
        cout << multiply2 << endl;
    }

    delete [] masA;
    masA = NULL;
    
    delete [] masB;
    masB = NULL;
    return 0;
}