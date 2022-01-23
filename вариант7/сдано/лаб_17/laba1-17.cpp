#include<iostream>
#include<string.h>
using namespace std;

const int n = 50;

struct sklad {
    char name[n];
    double price;
    int numCeh : 4;//10 цехов
    int row : 5;//20 рядов
    int rack : 7;//100 стеложей
    int rackShelf : 1;//2 полки в стеложе
};

enum shops {
    EVROOPT,
    SANTA,
    KORONA,
    PROSTORE,
    HIT
};

int main() {

    char shops[5][10] = {"EVROOPT", "SANTA", "KORONA", "PROSTORE", "HIT"};

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    cout << "Введите количество складов: ";
    cin >> a;

    while (a < 0) {
        cout << "Введите количество складов: ";
        cin >> a;
    }

    sklad* arr = new sklad[a];

    if(arr == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

       
    for(int j = 0; j < a; j++) {
        cout << "\nМагазин: " << shops[j] << endl;

        cout << "Введите название товара: ";
        cin >> arr[j].name;

        cout << "Введите цену товара: ";
        cin >> arr[j].price;

        arr[j].price = (arr[j].price / 2) + arr[j].price;

        cout << "Введите номер цеха: ";
        cin >> b;
        arr[j].numCeh = b;

        cout << "Введите номер ряда: ";
        cin >> c;
        arr[j].row = c;

        cout << "Введите номер стелажа: ";
        cin >> d;
        arr[j].rack = d;

        cout << "Введите номер полки стелажа: ";
        cin >> e;
        arr[j].rackShelf = e;
    }

    cout << endl;

    for(int j = 0; j < a; j++) {
        cout << "\nМагазин: " << shops[j] << endl;
        cout << " | " << "Название товара: " << arr[j].name << " | " << "Цена товара: " << arr[j].price  << " | " << "Номер цеха: " << arr[j].numCeh << " | " << "Номер ряда: " << arr[j].row << " | " << "Номер стелажа: " << arr[j].rack << " | " << "Номер полки стеложа: " << arr[j].rackShelf << " | ";
        cout << endl;
    }

    delete [] arr;
    arr = NULL;
    return 0;
}