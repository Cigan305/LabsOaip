#include<iostream>
#include<string.h>

using namespace std;

struct moto {
    
    int horse;
    double speed;
    char marka;
    bool rab;
    char name[50];
    
};


int main() {

    int a;

    cout << "Введите количесво мотоциклов: ";
    cin >> a;

    while (a < 0) {
        cout << "Введите количесво мотоциклов: ";
        cin >> a;
    }

    moto* arr = new moto[a];

    if(arr == NULL) {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++) {
        
        cout << "Введите название: ";
        cin >> arr[i].name;

        cout << "Введите количество лошадиных сил ";
        cin >> arr[i].horse;

        cout << "Введите разгон до 100  км/ч: ";
        cin >> arr[i].speed;

        cout << "Введите марку : ";
        cin >> arr[i].marka;

        cout << "Введите работает ли (1 если да/ 0 если нет)? ";
        cin >> arr[i].rab;
    }

    cout << "Мотоциклы: \n";
    for(int i = 0; i < a; i++) {
        cout  << arr[i].name << " | " << arr[i].horse << " | " << arr[i].speed << " | " << arr[i].marka << " | " << arr[i].rab;
        cout << endl;
    }

    char name2[50];
    int x = 0;

    cout << "Введите мотоцикл которую хотите найти: ";
    cin >> name2;

    for(int i = 0; i < a; i++) {
        int y = strcmp(arr[i].name, name2);
        if(y == 0) {
            x++;
        }
    }

    if(x == 0) {
        cout << "Страны с таким мотоцикл в списке нет." << endl;
    }
    else {
        cout << "В списке есть " << x << " мотоциклов с точно таким же названием." << endl;;
    }   
    
    
    return 0;
}