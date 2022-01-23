#include<iostream>
#include<string.h>
using namespace std;

class Young {
protected:
    int age;
public:
    Young() {
        cout << "Объект создан." << endl;
    }

    int GetAge() {
        return age;
    }

    Young(int a) : age(a) {}

    virtual void Show()const {
        cout << "Возраст: " << age << ", отдыхает молодой!" << endl;
    }

    Young operator*(Young x) {
        cout << "Multiply: ";
        this->age = this->age * x.GetAge();
        return *this;
    }

    Young operator--(int) {
        this->age-- ;
        return *this;
    }

    bool operator>=(Young p1)const {
        return ((this->age >= p1.GetAge()) ? true : false);
    }

    ~Young() {
    }
};

class Student : public Young {
public:
    Student() {
        cout << "Объект создан." << endl;
    };

    Student(int a) : Young(a) {}

    void Show()const override {
        cout << age << ", учится(отсрочка)." << endl; 
    }

    ~Student() {
        cout << "Объект удалён." << endl;
    }
};

class Soldar : public Young {
public:
    Soldar() {
        cout << "Объект создан." << endl;
    }

    Soldar(int a) : Young(a) {}

    void Show()const override {
        cout << age << ", проходит военную службу! " << endl;
    }

    ~Soldar() {
        cout << "Объект удалён." << endl;
    }
};

class SoldarStud : public Young {
public:
    SoldarStud() {
        cout << "Объект создан." << endl;
    }
    
    SoldarStud(int a) : Young(a) {};

    void Show()const override {
        cout << age << ", проходит профисиональное обучение для военной службы!" << endl; 
    }

    ~SoldarStud() {
        cout << "Объект удалён." << endl;
    }
};
int main() {
    int x, y;
    int p, a;

    cout << "Введите возраст 1-го объекта: ";
    cin >> x;
    cout << "Введите возраст 2-го объекта: ";
    cin >> y;
    
    Young p1(x);
    Young p2(y);

    cout << "Возраст объектов:" << p1.GetAge() << " " << p2.GetAge() << endl;
    do {
        cout << "\nВыберете пункт меню:\n1)перемножение объекта класса и целого числа\n2)префиксный декремент\n3)сравнение двух объектов" << endl;
        cout << "Ввод: ";
        cin >> p;
        switch(p) {
            case 1: {
                int x = 5;
                p1 * p2;
                cout << p1.GetAge() << endl;
                break;
            }
            case 2: {
                p1--;
                p2--;
                cout << p1.GetAge() << " " << p2.GetAge() << endl;
                break;
            }
            case 3: {
                if (p1 >= p2) {
                    cout << true << endl;
                }
                else {
                    cout << false << endl;
                }
                break;
            }
            default: {
                cout << "Нет такого пункта меню!!!" << endl;
            }
        }
        cout << "Для выхода нажмите(1).\nДля продолжение нажмите(2)\n";
        cout << "Ввод: ";
        cin >> a;   
        if (a == 1) {
            cout << "ББ" << endl;
        }
    } while (a != 1);
    
    return 0;
}