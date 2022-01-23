#include<iostream>
#include<string.h>

using namespace std;

struct avto {
    
    int detals;
    double precent;
    char currency;
    bool garand;
    char name[50];

    void foo() {
        cout << " | " << "Название: " << name << "\n | " << "Детали: " << detals << "\n | " << "Процент: " << precent << "\n | " << "Валюта: " << currency << "\n | " << "Гарантия " << garand << endl;
    }
    
};


int main() {

    avto firstAvto;

    firstAvto.detals = 123450;
    firstAvto.precent = 50.4;
    firstAvto.currency = '$';
    firstAvto.garand = 1;
    firstAvto.foo();

    avto secondAvto;

    cout << "Введите название мастерской: ";
    cin >> secondAvto.name;

    cout << "Введите количество деталей: ";
    cin >> secondAvto.detals;

    cout << "Введите процент деталей пригодных для работы: ";
    cin >> secondAvto.precent;

    cout << "Введите валюту: ";
    cin >> secondAvto.currency;

    cout << "Введите вы даёте гарантию(1 если да/ 0 если нет)? ";
    cin >> secondAvto.garand;

    secondAvto.foo();

    avto thertAvto;
    avto *p = &thertAvto;


    cout << "Введите название мастерской: ";
    cin >> (*p).name;

    cout << "Введите количество деталей: ";
    cin >> (*p).detals;

    cout << "Введите процент деталей пригодных для работы: ";
    cin >> (*p).precent;

    cout << "Введите валюту: ";
    cin >> (*p).currency;

    cout << "Введите вы даёте гарантию(1 если да/ 0 если нет)? ";
    cin >> (*p).garand;

    (*p).foo();

    avto fourthAvto;
    avto &pRef = fourthAvto;

    cout << "Введите название мастерской: ";
    cin >> pRef.name;

    cout << "Введите количество деталей: ";
    cin >> pRef.detals;

    cout << "Введите процент деталей пригодных для работы: ";
    cin >> pRef.precent;

    cout << "Введите валюту: ";
    cin >> pRef.currency;

    cout << "Введите вы даёте гарантию(1 если да/ 0 если нет)? ";
    cin >> pRef.garand;

    (pRef).foo();

    

    return 0;
}