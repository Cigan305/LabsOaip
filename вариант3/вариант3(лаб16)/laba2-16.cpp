#include<iostream>
#include<string.h>

using namespace std;

struct student {
    
    char surname[20];
    int num;
    int ocenki[5];
     
};

int main() {

    int a;

    cout << "Введите количество студентов: ";
    cin >> a;

    while (a < 0) {
        cout << "Введите количесво студентов: ";
        cin >> a;
    }

    student* arr = new student[a];

    if(arr == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++) {

        cout << "Введите вашу Фаимилию: ";
        cin >> arr[i].surname;

        cout << "Введите номер группы: ";
        cin >> arr[i].num;

        for(int j = 0; j < 5; j++) {

            cout << "Введите вашу текущую оценку: ";
            cin >> arr[i].ocenki[j];
        }
    }

    cout << "Студенты: \n";
    for(int i = 0; i < a; i++) {
        cout << "\nФамилия: " << arr[i].surname << "\nНомер группы: " << arr[i].num << "\nОценки: ";
        for (int j = 0; j < 5; j++) {
            cout << arr[i].ocenki[j] << " ";
        }
    }

    cout << endl;

    bool flag = true;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 5; i++)
        {
            if(arr[i].ocenki[j] < 4) {
                flag = false;
                cout << arr[i].surname << endl;
                break;
            }   
        }
    }
    
    if (flag == true) 
    {
        cout << "У всех зачёт:";
    }
     
    return 0;
}