#include<iostream>

const int n = 20;
using namespace std;

struct monitor {
    double diagonal;
    char choice[n];

    enum size {
        p2160,
        p1080,
        p720,
        p240
    };
};
    
struct keyboard {
   int kButton;
    bool rusif;
};

struct mouthe {
    char name[n];
    int mButton;
    bool wire;
    char choice2[n];
};

int main() {
    int a = 0;

    cout << "Введите количество комплектующих для PC: ";
    cin >> a;

    while (a < 0) {
        cout << "Введите количество комплектующих для PC: ";
        cin >> a;
    }

    monitor* monik = new monitor[a];

    if (monik == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

    for (int i = 0; i < a; i++) {
        cout << "Введите диагональ монитора: ";
        cin >> monik[i].diagonal;

        cout << "Введите у вас ЖK/ЭЛТ: ";
        cin >> monik[i].choice;
    }

    keyboard* keyb = new keyboard[a];

    if (keyb == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

    for (int i = 0; i < a; i++) {
        cout << "Введите количество клавиш: ";
        cin >> keyb[i].kButton;

        cout << "Введите у вас русификация (1 если да/ 0 если нет): ";
        cin >> keyb[i].rusif;
    }

    mouthe* mouth = new mouthe[a];

    if (mouth == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

    for (int i = 0; i < a; i++) {
        cout << "Введите производителя: ";
        cin >> mouth[i].name;

        cout << "Введите количество кнопок: ";
        cin >> mouth[i].mButton;

        cout << "Введите есть ли провод (1 если да/ 0 если нет): ";
        cin >> mouth[i].wire;

        cout << "Введите ваша мышь оптическая/механическая: ";
        cin >> mouth[i].choice2;
    }

    cout << endl;

    for (int i = 0; i < a; i++) {
        cout << " | " << monik[i].diagonal << " | " << monik[i].choice << " | " << keyb[i].kButton << " | " << keyb[i].rusif << " | " << mouth[i].name << " | " << mouth[i].mButton << " | " << mouth[i].wire << " | " << mouth[i].choice2 << " | " << endl; 
    }


    delete [] monik;
    monik = NULL;

    delete [] keyb;
    keyb = NULL;

    delete [] mouth;
    mouth = NULL;

    return 0;
}
    
