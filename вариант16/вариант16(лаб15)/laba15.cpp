#include<iostream>
#include<string.h>

using namespace std;

struct Employee {
    
    int age;
    double height;
    char zp;
    bool standing;
    char name[50];

    void foo() {
        cout << " | " << "Имя: " << name << "\n | " << "Рост: " << height << "\n | " << "Cтаж работы: " << standing << "\n | " << "Валюта вашей ЗП: " << zp << "\n | " << "Возраст " << age << endl;
    }
    
};


int main() {

    Employee firstEmployee;

    firstEmployee.height = 1.90;
    firstEmployee.standing = 1;
    firstEmployee.zp = '$';
    firstEmployee.age = 23;

    firstEmployee.foo();


    Employee secondEmployee;

    cout << "Введите ваше имя: ";
    cin >> secondEmployee.name;

    cout << "Введите ваш рост: ";
    cin >> secondEmployee.height;

    cout << "Введите валюту в которой получаете ЗП: ";
    cin >> secondEmployee.zp;

    cout << "Введите есть ли у вас стаж(1 если да/ 0 если нет): ";
    cin >> secondEmployee.standing;

    cout << "Введите ваш возраст: ";
    cin >> secondEmployee.age;

    secondEmployee.foo();

    Employee thertEmployee;
    Employee *p = &thertEmployee;


    cout << "Введите ваше имя: ";
    cin >> (*p).name;

    cout << "Введите ваш рост: ";
    cin >>  (*p).height;

    cout << "Введите валюту в которой получаете ЗП: ";
    cin >>  (*p).zp;

    cout << "Введите есть ли у вас стаж(1 если да/ 0 если нет): ";
    cin >>  (*p).standing;

    cout << "Введите ваш возраст: ";
    cin >>  (*p).age;

    (*p).foo();

    Employee fourthEmployee;
    Employee &pRef = fourthEmployee;

   cout << "Введите ваше имя: ";
    cin >> pRef.name;

    cout << "Введите ваш рост: ";
    cin >> pRef.height;

    cout << "Введите валюту в которой получаете ЗП: ";
    cin >> pRef.zp;

    cout << "Введите есть ли у вас стаж(1 если да/ 0 если нет): ";
    cin >> pRef.standing;

    cout << "Введите ваш возраст: ";
    cin >> pRef.age;

    (pRef).foo();

    

    return 0;
}