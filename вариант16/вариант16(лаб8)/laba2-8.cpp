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
    
    int *mas = new int[a];

    if(mas == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++) {
        mas[i] = rand() % 11;  
        cout << mas[i] << " "; 
    }   
    
    int sum = 0;
    for(int i = 0; i < a; i++) {
        sum += mas[i];
    }

    cout << endl;

    double res = sum/a;

    cout << "Среднее арифметическое: " << res << endl;
    
    int index = 0;
    for(int i = 0; i < a; i++) {
        if(mas[i] > res) {
            index = i;
        }
    }

    int sum2 = 0;
    for(int i = index + 1; i < a; i++) {
        sum2 += mas[i];
    }

    cout << "Сумма элементов расположенных после последнего элемента, значение которого больше сред.арифм: " << sum2 << endl;




 

    delete [] mas;
    mas = NULL;

    return 0;
}