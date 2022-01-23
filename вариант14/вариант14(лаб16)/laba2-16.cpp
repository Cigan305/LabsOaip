#include<iostream>
#include<string.h>

using namespace std;

const int n = 50;
struct note {
    
    char name[n];
    char tel[n];
    int year;
};


int main() {

    const int a = 10;
    note arr[a];
    
    for(int i = 0; i < a; i++) {

        cout << "Введите имя: ";
        cin >> arr[i].name;

        cout << "Введите год рождения: ";
        cin >> arr[i].year;

        cout << "Введите номер телефона: \n";
        cin >> arr[i].tel;
        
    }

    for(int i = 0; i < a; i++) {  
        for(int j = 0; j < a - 1; j++) {
            if(arr[j].year > arr[j + 1].year) {
                int b = arr[j].year;
                arr[j].year = arr[j + 1].year;
                arr[j + 1].year = b;
            } 
        } 
    }

     for(int i = 0; i < a; i++) {
        cout << arr[i].name << " | " << arr[i].year << " | " << arr[i].tel << " | ";
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
            cout << arr[i].name << " | " << arr[i].year << " | " << arr[i].tel << " | ";
            cout << endl;
        }    
        else if(flag == false)
        {
            cout << "Нет человека с таким годом рождения." << endl;
        }
    }
   
    
    return 0;
}