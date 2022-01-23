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
        cin >> mas[i];
    }   


    for(int i = 0; i < a; i++) {  
        cout << mas[i] << " "; 
    }   

    cout << endl;

    bool flag = true;
    for(int i = 0; i < a; i++) {
        for(int j = i + 1; j < a; j++) {
            if(mas[i] > mas[j]) {
                flag = false;
                break;
            }
        }
    }   

    if(flag == true) {
        cout << "Монотонноый." << endl;
    }
    else
    {
        cout << "Немонотонный." << endl;
    }
    
    
   

  


 

    delete [] mas;
    mas = NULL;

    return 0;
}