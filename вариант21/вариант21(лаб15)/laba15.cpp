#include<iostream>
#include<string.h>

using namespace std;

struct aeraport {
    
    int plain;
    double area;
    char type;
    bool obmen;
    char place[50];

    void foo() {
        cout << " | " << "Место: " << place << "\n | " << "Самолёты: " <<plain << "\n | " << "Площадь: " << area << "\n | " << "Тип: " << type << "\n | " << "Валютообненник: " << obmen << endl;
    }
    
};


int main() {

    aeraport firstAeraport;

    firstAeraport.plain = 9;
    firstAeraport.area = 223.9;
    firstAeraport.type = '$';
    firstAeraport.obmen = 1;
    firstAeraport.foo();

    aeraport secondaeraport;

    cout << "Введите место прибывание: ";
    cin >> secondaeraport.place;

    cout << "Введите количество самолётов: ";
    cin >> secondaeraport.plain;

    cout << "Введите площадь: ";
    cin >> secondaeraport.area;

    cout << "Введите тип безопаносити: ";
    cin >> secondaeraport.type;

    cout << "Введите у вас есть валютаобменник(1 если да/ 0 если нет)? ";
    cin >> secondaeraport.obmen;

    secondaeraport.foo();

    aeraport thertaeraport;
    aeraport *p = &thertaeraport;


    cout << "Введите место прибывание: ";
    cin >> (*p).place;

    cout << "Введите количество самолётов: ";
    cin >> (*p).plain;

    cout << "Введите площадь: ";
    cin >> (*p).area;

    cout << "Введите тип безопаносити: ";
    cin >> (*p).type;

    cout << "Введите у вас есть валютаобменник(1 если да/ 0 если нет)? ";
    cin >> (*p).obmen;

    (*p).foo();

    aeraport fourthaeraport;
    aeraport &pRef = fourthaeraport;

    cout << "Введите место прибывание: ";
    cin >> pRef.place;

    cout << "Введите количество самолётов: ";
    cin >> pRef.plain;

    cout << "Введите площадь: ";
    cin >> pRef.area;

    cout << "Введите тип безопаносити: ";
    cin >> pRef.type;

    cout << "Введите у вас есть валютаобменник(1 если да/ 0 если нет)? ";
    cin >> pRef.obmen;

    (pRef).foo();

    

    return 0;
}