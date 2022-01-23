#include<iostream>
#include<string.h>

 
using namespace std;

const int n = 50;
struct train {

    char place[n];
    int num;
    double time;  
        
};

int main() {
    
    const int a = 10;
    train arr[a];

    for(int i = 0; i < a; i++) {

        cout << "Введите место прибывание поезда: ";
        cin >> arr[i].place;

        cout << "Введите номер поезда: ";
        cin >> arr[i].num;

        cout << "Введите время: ";
        cin >> arr[i].time;
    }

    
    for(int i = 0; i < a; i++) {  
        for(int j = 0; j < a - 1; j++) {
            if(arr[j].time > arr[j + 1].time) {
                double b = arr[j].time;
                arr[j].time = arr[j + 1].time;
                arr[j + 1].time = b;
            } 
        }
    }

    cout << "\nВсе рейсы:\n";
    for(int i = 0; i < a; i++) {

        cout << " | " << arr[i].place << " | " << arr[i].num << " | " << arr[i].time << " | ";
        cout << endl;
    }

    double time2;
    int index = 0;   
    
    cout << "\nВведите время нужного вам поезда: ";
    cin >> time2;

    int i = 0;
    while (time2 < arr[i].time) {
        cout << "К сожалению нет поезда на это время.\nПопробуйте ввести время ещё раз: ";
        cin >> time2;
    }
    
    for(int i = 0; i < a; i++) {
        if(time2 == arr[i].time) {
            index = i;
            break;
        }
    }

    cout << "Поезда которые отправляются после указанного времени:\n";
    for(int i = index; i < a; i++) {
        cout << " | " << arr[i].place << " | " << arr[i].num << " | " << arr[i].time << " | ";
        cout << endl;
    }

    return 0;
}