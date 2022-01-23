#include<iostream>
#include<string.h>

using namespace std;
const int n0 = 100;

class Firm {   
private:    
    string name;
    int year;
    double price;
    char currency;
    bool soft;
public: 
    Firm() {
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
    int Getyear() {
        return year;
    }
    int Setyear(int value) {
        year = value;
        return year;   
    } 
    ///////////////////////
    double GetPrice() {
        return price;
    }
    double SetPrice(double value) {
        price = value;
        return price;
    }
    //////////////////////
    char GetCurrency() {
        return currency;
    }
    char SetCurrency(char value) {
        currency = value;
        return value;
    }
    //////////////////////
    bool Getsoft() {
        return soft;
    }
    bool Setsoft(bool value) {
        soft = value;
        return soft;
    }

    Firm(string name, int year, double price, char currency, bool soft) {
        this->name = name;
        this->year = year;
        this->price = price;
        this->currency = currency;
        this->soft = soft;
    }

    void Print() {
        cout << "\nНазвание: " <<  GetName() << "\nГод издания: " <<  Getyear() << "\nЦена: " << GetPrice() << "\nВалюта: " <<  GetCurrency() << "\nМягкая ли игрушка(1-да/0-нет): " << Getsoft() << endl;
    }

    ~Firm() {
        cout << "\nОбъект был удалён." << endl;
    }
};

int main() {
    int p, a;
    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Инициализация через Set\n2) Инициализация через конструктор\n3)Создание динамического объекта типа класса Toy путем вызова конструктора без параметров\n4)Создайте динамический объект типа класса Toy путем вызова конструктора с параметрами\n";
        cout << "Ввод: ";
        cin >> p;
        switch (p) {
            case 1: {
                Firm f2;
                Firm *p = &f2;
                Firm &r = f2;

                f2.SetName("Konina2D");
                f2.Setyear(789);
                f2.SetPrice(9.9);
                f2.SetCurrency('$');
                f2.Setsoft(1);

                cout << "\nОбычный вывод:";
                f2.Print();

                cout << "\nВывод через указатель:";
                p->Print();

                cout <<"\nВывод чере ссылку:";
                (&r)->Print();
                f2.~Firm();
                break;
            }
            case 2: {
                string name;
                int year;
                double price;
                char currency;
                bool soft;

                cout << "\nВведите название игрушки: ";
                cin >> name;

                cout << "Введите год создание игрушки: ";
                cin >> year;

                cout << "Введите цену игрушки: ";
                cin >> price;

                cout << "Введите валюту: ";
                cin >> currency;

                cout << "Мягкая ли игрушка(1-да/0-нет): ";
                cin >> soft;

                Firm f3(name, year, price, currency, soft);
                f3.Print();
                
                break;
            }
            case 3: {
                string value1;
                int value2;
                double value3;
                char value4;
                bool value5;

                Firm* f3 = new Firm;
                Firm** p = &f3;
                Firm &r = *f3;

                if (f3 == NULL) {
                    cout << "Нет памяти." << endl;
                    return 0;
                }
                    
                cout << "Введите название игрушки: ";
                cin >> value1;
                f3->SetName(value1);

                cout << "Введите год создание игрушки: ";
                cin >> value2;
                f3->Setyear(value2);

                cout << "Введите рейтинг: ";
                cin >> value3;
                f3->SetPrice(value3);

                cout << "Введите валюту: ";
                cin >> value4;
                f3->SetCurrency(value4);

                cout << "Мягкая ли игрушка(1-да/0-нет): ";
                cin >> value5;
                f3->Setsoft(value5);

                cout << "\nОбычный вывод:";
                f3->Print();

                cout << "\nВывод через указатель";
                (*p)->Print();

                cout <<"\nВывод чере ссылку:";
                (&r)->Print();
                
                f3->~Firm();
                break;
            }
            case 4: {
                string name;
                int year;
                double price;
                char currency;
                bool soft;
                int n;

                cout << "\nВведите название игрушки: ";
                cin >> name;

                cout << "Введите год создание игрушки: ";
                cin >> year;

                cout << "Введите цену игрушки: ";
                cin >> price;

                cout << "Введите валюту: ";
                cin >> currency;

                cout << "Мягкая ли игрушка(1-да/0-нет): ";
                cin >> soft;


                Firm* f4 = new Firm(name, year, price, currency, soft);
                Firm** p = &f4;
                Firm &r = *f4;

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
