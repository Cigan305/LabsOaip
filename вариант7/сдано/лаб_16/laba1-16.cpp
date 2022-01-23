#include<iostream>
#include<string.h>

using namespace std;

const int n0 = 20;
    
struct state {
        
    char name[n0];
    int population;
    double territory;
    char currency;
    bool sea;

};

int main() {

    int counter = 0;

    cout << "Введите количество стран: ";
    cin >> counter;

    if(counter < 0) {

        counter = -counter;
        cout << "Число стран не может быть отрицательным: " << counter << endl; 
    }

    state* country = new state[counter];

    if(country == NULL) {
        cout << "Нет памяти." << endl;
        return 0;
    } 

    for(int i = 0; i < counter; i++) {

        cout << "Введите страну: ";
        cin >> country[i].name;

        cout << "Введите население(млн): ";
        cin >> country[i].population;

        cout << "Введите размер территории(км^2): ";
        cin >> country[i].territory;

        cout << "Введите валюту: ";
        cin >> country[i].currency;

        cout << "Введите есть ли у вас выход к морю(1 если да/ 0 если нет)? ";
        cin >> country[i].sea;
    }
    
    cout << "\nСтраны:\n";
    for(int i = 0; i < counter; i++) {
        cout << country[i].name << " | " << country[i].population << " | " << country[i].territory << " | " << country[i].currency << " | " << country[i].sea << " | ";
        cout << endl;
    }

    char name1[n0];
    int x = 0;

    cout << "Введите страну которую хотите найти: ";
    cin >> name1;

    for(int i = 0; i < counter; i++) {
        int y = strcmp(country[i].name, name1);
        if(y == 0) {
            x++;
        }
    }

    if(x == 0) {
        cout << "Страны с таким названием в списке нет." << endl;
    }
    else {
        cout << "В списке есть " << x << " стран с точно таким же названием." << endl;;
    }   

    delete [] country;
    return 0;
}