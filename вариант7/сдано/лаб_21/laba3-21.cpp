#include<iostream>
#include<string.h>

using namespace std;
const int n0 = 100;

class Firm {   
private:    
    string name;
    int employees;
    double rating;
    char currency;
    bool vacation_pay;
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
    int GetEmployees() {
        return employees;
    }
    int SetEmployees(int value) {
        employees = value;
        return employees;   
    } 
    ///////////////////////
    double GetRaiting() {
        return rating;
    }
    double SetRaiting(double value) {
        if (value > 10) {
            rating = 10;
        }
        else if(value < 0) {
            rating = 0;
        }
        else {
            rating = value;
        }
        return rating;
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
    bool GetVacation_pay() {
        return vacation_pay;
    }
    bool SetVacation_pay(bool value) {
        vacation_pay = value;
        return vacation_pay;
    }

    Firm(string name, int employees, double rating, char currency, bool vacation_pay) {
        this->name = name;
        this->employees = employees;
        this->rating = ((rating > 10) || (rating < 0)) ? 10 : rating;
        this->currency = currency;
        this->vacation_pay = vacation_pay;
    }

    void Print() {
        cout << "\nНазвание: " <<  GetName() << "\nКоличество работников: " <<  GetEmployees() << "\nРейтинг: " << GetRaiting() << "\nВалюта: " <<  GetCurrency() << "\nВыдаёт отпускные(1-да/0-нет): " << GetVacation_pay() << endl;
    }

    void Tax(int profit, int expenses, double fszn, double tax_profit, double nds) {
        double x = 0;
        double A = 0;
        double sum = 0;

        x = ((profit - expenses) * ((fszn + nds) / 100));
        A = (profit - expenses - x);

        if (A > 0) {
            sum = x + A * (tax_profit/100);
        }
        else {
            sum = x;
        }

        cout << "Сумма налогов: " << sum << endl;
    }

    ~Firm() {
        cout << "\nОбъект был удалён." << endl;
    }
};

//указателем
//Firm **s = &h0;
//(*s)->Print();
//
//ссылкой
//Firm &g = *h0;
//(&g)->Print();

int main() {
    int p, a;
    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Инициализация через Set\n2) Инициализация через конструктор\n3)Создание динамического объекта типа класса Firm путем вызова конструктора без параметров\n4)Создайте динамический объект типа класса Firm путем вызова конструктора с параметрами\n";
        cout << "Ввод: ";
        cin >> p;
        switch (p) {
            case 1: {
                Firm f2;
                Firm *p = &f2;
                Firm &r = f2;

                f2.SetName("Konina2D");
                f2.SetEmployees(789);
                f2.SetRaiting(9.9);
                f2.SetCurrency('$');
                f2.SetVacation_pay(1);

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
                int employees;
                double rating;
                char currency;
                bool vacation_pay;

                cout << "\nВведите название фирмы: ";
                cin >> name;

                cout << "Введите количество работников: ";
                cin >> employees;

                cout << "Введите рейтинг фирмы: ";
                cin >> rating;

                cout << "Введите валюту: ";
                cin >> currency;

                cout << "Выдаёт отпускные(1-да/0-нет): ";
                cin >> vacation_pay;

                Firm f3(name, employees, rating, currency, vacation_pay);
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
                    
                cout << "Введите название фирмы: ";
                cin >> value1;
                f3->SetName(value1);

                cout << "Введите количество работников: ";
                cin >> value2;
                f3->SetEmployees(value2);

                cout << "Введите рейтинг: ";
                cin >> value3;
                f3->SetRaiting(value3);

                cout << "Введите валюту: ";
                cin >> value4;
                f3->SetCurrency(value4);

                cout << "Выдаёт отпускные(1-да/0-нет): ";
                cin >> value5;
                f3->SetVacation_pay(value5);

                cout << "\nОбычный вывод:";
                f3->Print();

                cout << "\nВывод через указатель";
                (*p)->Print();

                cout <<"\nВывод чере ссылку:";
                (&r)->Print();
                
                int profit;
                int expenses;
                double fszn;
                double tax_profit;
                double nds;

                cout << "\nВведите прибыль за месяц: ";
                cin >> profit;

                cout << "Введите затраты на зарплаты, энергию, сырье, аренду и т.д: ";
                cin >> expenses;

                cout << "Введите налог в ФСЗН (проценты): ";
                cin >> fszn;

                cout << "Введите налог на прибыль (проценты): ";
                cin >> tax_profit;

                cout << "Введите НДС (проценты): ";
                cin >> nds;

                f3->Tax(profit, expenses, fszn, tax_profit, nds);
                f3->~Firm();
                break;
            }
            case 4: {
                string name;
                int employees;
                double rating;
                char currency;
                bool vacation_pay;
                int n;

                cout << "\nВведите название фирмы: ";
                cin >> name;

                cout << "Введите количество работников: ";
                cin >> employees;

                cout << "Введите рейтинг фирмы: ";
                cin >> rating;

                cout << "Введите валюту: ";
                cin >> currency;

                cout << "Выдаёт отпускные(1-да/0-нет): ";
                cin >> vacation_pay;


                Firm* f4 = new Firm(name, employees, rating, currency, vacation_pay);
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

                int profit;
                int expenses;
                double fszn;
                double tax_profit;
                double NDC;
                
                cout << "\nВведите прибыль за месяц: ";
                cin >> profit;

                cout << "Введите затраты на зарплаты, энергию, сырье, аренду и т.д: ";
                cin >> expenses;

                cout << "Введите налог в ФСЗН (проценты): ";
                cin >> fszn;

                cout << "Введите налог на прибыль (проценты): ";
                cin >> tax_profit;

                cout << "Введите НДС (проценты): ";
                cin >> NDC;

                f4->Tax(profit, expenses, fszn, tax_profit, NDC);
                
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
