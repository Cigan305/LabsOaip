#include<iostream>
#include<string.h>

using namespace std;

struct avto {
    
    int detals;
    double precent;
    char currency;
    bool garand;
    char name[50];

};


int main() {

    int counter = 0;

    cout << "Введите количество мастерсих: ";
    cin >> counter;

    if(counter < 0) {

        counter = -counter;
        cout << "Число мастерских не может быть отрицательным: " << counter << endl; 
    }

    avto* arr = new avto[counter];

    if(arr == NULL) {
        cout << "Нет памяти." << endl;
        return 0;
    } 

    for(int i = 0; i < counter; i++) {

        cout << "Введите название: ";
        cin >> arr[i].name;

        cout << "Введите количество деталей: ";
        cin >> arr[i].detals;

        cout << "Введите процент деталей пригодных для работы: ";
        cin >> arr[i].precent;

        cout << "Введите валюту: ";
        cin >> arr[i].currency;

        cout << "Введите вы даёте гарантию(1 если да/ 0 если нет)? ";
        cin >> arr[i].garand;
    }
    
    cout << "\nМастерские:\n";
    for(int i = 0; i < counter; i++) {
        cout << arr[i].name << " | " << arr[i].detals << " | " << arr[i].precent << " | " << arr[i].currency << " | " << arr[i].garand << " | ";
        cout << endl;
    }

    char name1[50];
    int x = 0;

    cout << "Введите мастерскую которую хотите найти: ";
    cin >> name1;

    for(int i = 0; i < counter; i++) {
        int y = strcmp(arr[i].name, name1);
        if(y == 0) {
            x++;
        }
    }

    if(x == 0) {
        cout << "Мастерских с таким названием в списке нет." << endl;
    }
    else {
        cout << "В списке есть " << x << " мастерских с точно таким же названием." << endl;;
    }   

    delete [] arr;
    

    return 0;
}