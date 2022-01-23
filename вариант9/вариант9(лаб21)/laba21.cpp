#include<iostream>
#include<string.h>

using namespace std;
const int n0 = 100;

class Plant {   
private:    
    string name;
    int age;
    double height;
    char view;
    bool home;
public: 
    Plant() {
        cout << "ОбЪект был создан." << endl;
    }

    string GetName() {
        return name;
    }
    string SetName(string value) {
        name = value;
        return name;
    }
    ///////////////////////
    int Getage() {
        return age;
    }
    int Setage(int value) {
        age = value;
        return age;   
    } 
    ///////////////////////
    double Getheight() {
        return height;
    }
    double Setheight(double value) {
        height = value;
        return height;
    }
    //////////////////////
    char Getview() {
        return view;
    }
    char Setview(char value) {
        view = value;
        return value;
    }
    //////////////////////
    bool Gethome() {
        return home;
    }
    bool Sethome(bool value) {
        home = value;
        return home;
    }

    Plant(string name, int age, double height, char view, bool home) {
        this->name = name;
        this->age = age;
        this->height = height;
        this->view = view;
        this->home = home;
    }

    void Print() {
        cout << "\nНазвание: " <<  GetName() << "\nВозраст: " <<  Getage() << "\nРост: " << Getheight() << "\nВид: " <<  Getview() << "\nДомашнее(1-да/0-нет): " << Gethome() << endl;
    }

    ~Plant() {
        cout << "\nОбъект был удалён." << endl;
    }
};

int main() {
    int p, a;
    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Инициализация через Set\n2) Инициализация через конструктор\n3)Создание динамического объекта типа класса Plant путем вызова конструктора без параметров\n4)Создайте динамический объект типа класса Plant путем вызова конструктора с параметрами\n";
        cout << "Ввод: ";
        cin >> p;
        switch (p) {
            case 1: {
                Plant f2;
                Plant *p = &f2;
                Plant &r = f2;

                f2.SetName("Konina2D");
                f2.Setage(789);
                f2.Setheight(9.9);
                f2.Setview('$');
                f2.Sethome(1);

                cout << "\nОбычный вывод:";
                f2.Print();

                cout << "\nВывод через указатель:";
                p->Print();

                cout <<"\nВывод чере ссылку:";
                (&r)->Print();
                f2.~Plant();
                break;
            }
            case 2: {
                string name;
                int age;
                double height;
                char view;
                bool home;

                cout << "\nВведите название растения: ";
                cin >> name;

                cout << "Введите возраст: ";
                cin >> age;

                cout << "Введите рост: ";
                cin >> height;

                cout << "Введите вид: ";
                cin >> view;

                cout << "Домашнее(1-да/0-нет): ";
                cin >> home;

                Plant f3(name, age, height, view, home);
                f3.Print();
                
                break;
            }
            case 3: {
                string value1;
                int value2;
                double value3;
                char value4;
                bool value5;

                Plant* f3 = new Plant;
                Plant** p = &f3;
                Plant &r = *f3;

                if (f3 == NULL) {
                    cout << "Нет памяти." << endl;
                    return 0;
                }
                    
                cout << "Введите название растения: ";
                cin >> value1;
                f3->SetName(value1);

                cout << "Введите возраст: ";
                cin >> value2;
                f3->Setage(value2);

                cout << "Введите рост: ";
                cin >> value3;
                f3->Setheight(value3);

                cout << "Введите вид: ";
                cin >> value4;
                f3->Setview(value4);

                cout << "Домашнее(1-да/0-нет): ";
                cin >> value5;
                f3->Sethome(value5);

                cout << "\nОбычный вывод:";
                f3->Print();

                cout << "\nВывод через указатель";
                (*p)->Print();

                cout <<"\nВывод чере ссылку:";
                (&r)->Print();
                
                f3->~Plant();
                break;
            }
            case 4: {
                string name;
                int age;
                double height;
                char view;
                bool home;
                int n;

                cout << "\nВведите название растения: ";
                cin >> name;

                cout << "Введите возраст: ";
                cin >> age;

                cout << "Введите рост: ";
                cin >> height;

                cout << "Введите вид: ";
                cin >> view;

                cout << "Домашнее(1-да/0-нет): ";
                cin >> home;


                Plant* f4 = new Plant(name, age, height, view, home);
                Plant** p = &f4;
                Plant &r = *f4;

                if (f4 == NULL) {
                    cout << "Нет памяти." << endl;
                    return 0;
                }

                cout << "\nОбычный вывод:";
                f4->Print();

                cout << "\nВывод через указатель";
                (*p)->Print();

                cout <<"\nВывод чере ссылку:";
                (&r)->Print();
                
                break;
            }
            default: {
                cout << "Нет такого пункта меню." << endl;
            }
        }
        cout << "\nХотите повторить операцию?\n1) Да\n2) Нет" << endl;
        cout << "Ввод: ";
        cin >> a;
        if (a == 2)
        {
            cout << "бб" << endl;
        }
    } while (a == 1);
    return 0;
}
