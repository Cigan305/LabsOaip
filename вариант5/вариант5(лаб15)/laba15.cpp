#include<iostream>
#include<string.h>

using namespace std;

struct house {
    
    int number;
    double area;
    char type;
    bool wifi;
    char street[50];

    void foo() {
        cout << " | " << "Улица: " << street << "\n | " << "Площадь: " << area << "\n | " << "Тип: " << type << "\n | " << "WIFI: " << wifi << "\n | " << "Номер: " << number << endl;
    }
    
};


int main() {

    house firsthouse;

    firsthouse.number = 9;
    firsthouse.area = 223.9;
    firsthouse.type = 'D';
    firsthouse.wifi = 1;
    firsthouse.foo();

    house secondhouse;

    cout << "Введите улицу: ";
    cin >> secondhouse.street;

    cout << "Введите номер дома: ";
    cin >> secondhouse.number;

    cout << "Введите площадь: ";
    cin >> secondhouse.area;

    cout << "Введите тип: ";
    cin >> secondhouse.type;

    cout << "Введите есть у вас WIFI(1 если да/ 0 если нет)? ";
    cin >> secondhouse.wifi;

    secondhouse.foo();

    house therthouse;
    house *p = &therthouse;


    cout << "Введите улицу: ";
    cin >> (*p).street;

    cout << "Введите номер дома: ";
    cin >> (*p).number;

    cout << "Введите площадь: ";
    cin >> (*p).area;

    cout << "Введите тип: ";
    cin >> (*p).type;

    cout << "Введите есть у вас WIFI(1 если да/ 0 если нет)? ";
    cin >> (*p).wifi;

    (*p).foo();

    house fourthhouse;
    house &pRef = fourthhouse;

    cout << "Введите улицу: ";
    cin >> pRef.street;

    cout << "Введите номер дома: ";
    cin >> pRef.number;

    cout << "Введите площадь: ";
    cin >> pRef.area;

    cout << "Введите тип: ";
    cin >> pRef.type;

    cout << "Введите есть у вас WIFI(1 если да/ 0 если нет)? ";
    cin >> pRef.wifi;

    (pRef).foo();

    

    return 0;
}