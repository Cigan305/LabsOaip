#include<iostream>
#include<string.h>
using namespace std;

struct moto {
    char marka[10];
    int year : 11;//с 1990-2009
    double V;
};

int main() {

    int a = 0;
    int x = 0;

    cout << "Введите количество мотоциклов: ";
    cin >> a;

    while (a < 0) {
        cout << "Введите количество мотоциклов: ";
        cin >> a;
    }

    moto* motocikle = new moto[a];

    if (motocikle == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++) {
        cout << "Введите марку: ";
        cin >> motocikle[i].marka;

        cout << "Введите год c 1990-2009: ";
        cin >> x;
        motocikle[i].year = x;

        cout << "Введите объем двигателя: ";
        cin >> motocikle[i].V;

    }

    for(int i = 0; i < a; i++) {
        cout << " | " << motocikle[i].marka << " | " << motocikle[i].year << " | " << motocikle[i].V << " | " << endl;
    }

    delete [] motocikle;
    motocikle = NULL;    
    return 0;
}