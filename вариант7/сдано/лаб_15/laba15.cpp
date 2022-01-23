#include<iostream>
#include<string.h>

using namespace std;

struct State {
    
    int population;
    double territory;
    char currency;
    bool patriot;
    char name[50];

    void foo() {
        cout << " | " << "Страна: " << name << "\n | " << "Население(млн): " <<population << "\n | " << "Терриртия(км^2): " << territory << "\n | " << "Валюта: " << currency << "\n | " << "Вы партоит? " << patriot << endl;
    }
    
};


int main() {

    State firstState;

    firstState.population = 9;
    firstState.territory = 223.9;
    firstState.currency = '$';
    firstState.patriot = 1;
    firstState.foo();

    State secondState;

    cout << "Введите вашу страну: ";
    cin >> secondState.name;

    cout << "Введите население(млн): ";
    cin >> secondState.population;

    cout << "Введите размер территории(км^2): ";
    cin >> secondState.territory;

    cout << "Введите валюту: ";
    cin >> secondState.currency;

    cout << "Введите вы патриот(1 если да/ 0 если нет)? ";
    cin >> secondState.patriot;

    secondState.foo();

    State thertState;
    State *p = &thertState;


    cout << "Введите вашу страну: ";
    cin >> (*p).name;

    cout << "Введите население(млн): ";
    cin >> (*p).population;

    cout << "Введите размер территории(км^2): ";
    cin >> (*p).territory;

    cout << "Введите валюту: ";
    cin >> (*p).currency;

    cout << "Введите вы патриот(1 если да/ 0 если нет)? ";
    cin >> (*p).patriot;

    (*p).foo();

    State fourthState;
    State &pRef = fourthState;

    cout << "Введите вашу страну: ";
    cin >> pRef.name;

    cout << "Введите население(млн): ";
    cin >> pRef.population;

    cout << "Введите размер территории(км^2): ";
    cin >> pRef.territory;

    cout << "Введите валюту: ";
    cin >> pRef.currency;

    cout << "Введите вы патриот(1 если да/ 0 если нет)? ";
    cin >> pRef.patriot;

    (pRef).foo();

    

    return 0;
}