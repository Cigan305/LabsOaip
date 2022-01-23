#include<iostream>
#include<string.h>

using namespace std;
const int a = 50;
struct Employee {
    
    int age;
    double height;
    char zp;
    bool standing;
    char name[a];
    
};


int main() {

    int n = 0;

    cout << "Введите число работников: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Введите число работников: ";
        cin >> n;
    }

    Employee* arr = new Employee[n];

    if(arr == NULL) 
    {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < n; i++) 
    {
        cout << "Введите ваше имя: ";
        cin >> arr[i].name;

        cout << "Введите ваш рост: ";
        cin >> arr[i].height;

        cout << "Введите валюту в которой получаете ЗП: ";
        cin >> arr[i].zp;

        cout << "Введите есть ли у вас стаж(1 если да/ 0 если нет): ";
        cin >> arr[i].standing;

        cout << "Введите ваш возраст: ";
        cin >> arr[i].age;
    }

    

    for(int i = 0; i < n; i++) 
    {
        cout << arr[i].name << " | " << arr[i].height << " | " << arr[i].zp << " | " << arr[i].standing << " | " << arr[i].age << " | ";
        cout << endl;
    }

    char name1[a];
    int x = 0;

    cout << "Введите имя работника которого хотите найти: ";
    cin >> name1;

    for(int i = 0; i < n; i++) {
        int y = strcmp(arr[i].name, name1);
        if(y == 0) {
            x++;
        }
    }

    if(x == 0) {
        cout << "Работника с таким именем в списке нет." << endl;
    }
    else {
        cout << "В списке есть " << x << " работник/работников с точно таким же имнем." << endl;;
    }   
    
    return 0;
}