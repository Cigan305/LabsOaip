#include<iostream>
#include<string.h>

using namespace std;

struct moto {
    
    int horse;
    double speed;
    char marka;
    bool rab;
    char name[50];

    void foo() {
        cout << " | " << "Название: " << name << "\n | " << "Лошадиные силы: " <<horse << "\n | " << "Разгон: " << speed << "\n | " << "Марка: " << marka << "\n | " << "Работает ли: " << rab << endl;
    }
    
};


int main() {

    moto firstmoto;

    firstmoto.horse = 200;
    firstmoto.speed = 3.5;
    firstmoto.marka = 'H';
    firstmoto.rab = 1;
    firstmoto.foo();

    moto secondmoto;

    cout << "Введите название: ";
    cin >> secondmoto.name;

    cout << "Введите количество лошадиных сил ";
    cin >> secondmoto.horse;

    cout << "Введите разгон до 100  км/ч: ";
    cin >> secondmoto.speed;

    cout << "Введите марку : ";
    cin >> secondmoto.marka;

    cout << "Введите работает ли (1 если да/ 0 если нет)? ";
    cin >> secondmoto.rab;

    secondmoto.foo();

    moto thertmoto;
    moto *p = &thertmoto;


    cout << "Введите название: ";
    cin >> (*p).name;

    cout << "Введите количество лошадиных сил ";
    cin >> (*p).horse;

    cout << "Введите разгон до 100  км/ч: ";
    cin >> (*p).speed;

    cout << "Введите марку : ";
    cin >> (*p).marka;

    cout << "Введите работает ли (1 если да/ 0 если нет)? ";
    cin >> (*p).rab;

    (*p).foo();

    moto fourthmoto;
    moto &pRef = fourthmoto;

    cout << "Введите название: ";
    cin >> pRef.name;

    cout << "Введите количество лошадиных сил ";
    cin >> pRef.horse;

    cout << "Введите разгон до 100  км/ч: ";
    cin >> pRef.speed;

    cout << "Введите марку : ";
    cin >> pRef.marka;

    cout << "Введите работает ли (1 если да/ 0 если нет)? ";
    cin >> pRef.rab;

    (pRef).foo();

    

    return 0;
}