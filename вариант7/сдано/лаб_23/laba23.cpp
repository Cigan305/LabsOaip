#include<iostream>
#include<string.h>
using namespace std;

class Young {
protected:
    string name;
public:
    Young() {
        cout << "Объект создан." << endl;
    }

    Young(string a) : name(a) {   
    }

    virtual void Show() {
        cout << name << ", отдыхает молодой!" << endl;
    }

    ~Young() {
        cout << "Объект удалён." << endl;
    }
};

class Student : public Young {
public:
    Student() {
        cout << "Объект создан." << endl;
    };

    Student(string a) : Young(a) {}

    void Show() override {
        cout << name << ", учится(отсрочка)." << endl; 
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

    Soldar(string a) : Young(a) {}

    void Show() override {
        cout << name << ", проходит военную службу! " << endl;
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
    
    SoldarStud(string a) : Young(a) {};

    void Show() override {
        cout << name << ", проходит профисиональное обучение для военной службы!" << endl; 
    }

    ~SoldarStud() {
        cout << "Объект удалён." << endl;
    }
};
int main() {
    Young p1("Иван");
    Student p2("Толик");
    Soldar p3("Вася");
    SoldarStud p4("Петя");

    p1.Show();

    Young* q2 = &p2;
    q2->Show();

    Young* q3 = &p3;
    q3->Show();

    Young* q4 = &p4;
    q4->Show();

    return 0;
}