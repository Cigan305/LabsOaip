#include<iostream>
#include<string.h>

using namespace std;
const int a = 50;
struct znak {
    
    char name[a];
    char zadiak[a];
    int year;
    
};


int main() {

    const int n = 10;
    znak arr[n];

    for(int i = 0; i < n; i++) 
    {
        cout << "Введите имя: ";
        cin >> arr[i].name;

        cout << "Введите знак зодиака: ";
        cin >> arr[i].zadiak;

        cout << "Введите год рождения: ";
        cin >> arr[i].year;

    }

    for(int i = 0; i < n; i++) {  
        for(int j = 0; j < n - 1; j++) {
            if(arr[j].year > arr[j + 1].year) {
                int b = arr[j].year;
                arr[j].year = arr[j + 1].year;
                arr[j + 1].year = b;
            } 
        } 
    }


    for(int i = 0; i < n; i++) 
    {
        cout << arr[i].name << " | " << arr[i].zadiak << " | " << arr[i].year << " | ";
        cout << endl;
    }


    int year2;

    cout << "Введите год человека которого хотите найти: ";
    cin >> year2;

    bool flag = true;
    for(int i = 0; i < n; i++) 
    {
        flag = false;
        if(year2 == arr[i].year)
        {
            flag = true;
            cout << arr[i].name << " | " << arr[i].zadiak << " | " << arr[i].year << " | ";
            cout << endl;
        }
    }
    if(flag == false)
    {
        cout << "Нет человека с таким годом рождения." << endl;
    }
    
    return 0;
}