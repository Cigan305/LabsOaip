#include<iostream>
#include<fstream>
#include<string.h>
#include<time.h>

using namespace std;

struct Kino {  
    int money;
    double time;
    char currency;
    bool corometrag;
    char name[50];
} k;


int main() {
    srand(time(NULL));
    int p, a;

    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Заполнить текстом текстовый файл.\n2) Вывод текств на консоль.\n3) Заполнить файл вещественными числами.\n4) Вывод элементов массива из файла\n5) Заполнить файл используя структуру(Кино).\n6) Вывести содержимое структуры на консоль.\n7) Ввод структуры в бинарный файл.\n8) Вывод структуры из бинарного файла.\n9) Заполнить текстом текстовый файл(дозапись).\n10) Вывод текств на консоль.\n";
        cin >> p;
        switch (p) {
            case 1: {
                ofstream fout1;

                fout1.open("Emalanova.txt", ofstream::app);

                if (!fout1.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char text[100];
                    cout << "Введите текст: ";
                    cin.get();
                    cin.getline(text, 100);
                   
                    fout1 << text << "\n";
                }
    
                fout1.close();  

                break;
            }
            case 2: {
                ifstream read_file;

                read_file.open("Emalanova.txt");

                if (!read_file.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Emalanova.txt" << endl;
                    while (read_file.get(symbol)) {
                        cout << symbol;
                    }
                }
    
                read_file.close(); 
                break;      
            }
            case 3: {
                ofstream fout2;

                fout2.open("Emalanova0.txt", ofstream::app);

                if (!fout2.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    int n1 = 0;
                    cout << "Введите размерность массива: ";
                    cin >> n1;

                    while (n1 < 0) {
                        cout << "Введите размерность массива: ";
                        cin >> n1;
                    }

                    int* arr = new int[n1];

                    if (arr == NULL) {
                        cout << "Нет памяти.";
                        return 0;
                    }

                    for (int i = 0; i < n1; i++) {
                        arr[i] = rand() % 10;
                        fout2 << arr[i] << " # ";
                    }    

                    fout2 << endl;

                    delete [] arr;    
                    arr = NULL;                    
                }

                fout2.close();
                break;
            }
            case 4: {
                ifstream read_file;

                read_file.open("Emalanova0.txt");

                if (!read_file.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Emalanova0.txt" << endl;
                    while (read_file.get(symbol)) {
                        cout << symbol;
                    }
                }
    
                read_file.close(); 
                break;      
            }
            case 5: {
                ofstream fout3;

                fout3.open("Emalanova1.txt", ofstream::app);

                if (!fout3.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    int n2 = 0;
                    
                    cout << "Введите количество фильмов: ";
                    cin >> n2;

                    while (n2 <= 0) {
                        cout << "Введите количество фильмов: ";
                        cin >> n2;
                    }

                    Kino* arr = new Kino[n2];

                    if(arr == NULL) {
                        cout << "Нет памяти.";
                        return 0;
                    }

                    for(int i = 0; i < n2; i++) {
                        cout << "Введите название фильма: ";
                        cin >> arr[i].name;

                        cout << "Введите бюджет фильма: ";
                        cin >> arr[i].money;

                        cout << "Введите длительность фильма: ";
                        cin >> arr[i].time;

                        cout << "Введите валюту: ";
                        cin >> arr[i].currency;

                        cout << "Введите это короткометражный фильм(1 если да/ 0 если нет)? ";
                        cin >> arr[i].corometrag;
                    }

                    for(int i = 0; i < n2; i++) {
                        fout3 << arr[i].name << " | " << arr[i].money << " | " << arr[i].time << " | " << arr[i].currency << " | " << arr[i].corometrag << " | " << endl;
                    }

                    fout3 << endl;
                    
                    delete [] arr;
                    arr = NULL;
                }

                fout3.close();
                break;
            }
            case 6: {
                ifstream read_file;

                read_file.open("Emalanova1.txt");

                if (!read_file.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Emalanova1.txt" << endl;
                    while (read_file.get(symbol)) {
                        cout << symbol;
                    }
                }
    
                read_file.close(); 
                break;      
            }
            case 7: {

                fstream fout4("Emalanova2.bin", ios::app | ios::binary );

                if (!fout4) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;                
                }

                cout << "Введите название фильма: ";
                cin >> k.name;

                cout << "Введите бюджет фильма: ";
                cin >> k.money;

                cout << "Введите длительность фильма: ";
                cin >> k.time;

                cout << "Введите валюту: ";
                cin >> k.currency;

                cout << "Введите это короткометражный фильм(1 если да/ 0 если нет)? ";
                cin >> k.corometrag;

                fout4.write((char*)&k, sizeof(k));
                fout4.close();

                break;
            }
            case 8: {
                ifstream read_file4("Emalanova2.bin", ios::in | ios::binary);
                Kino ki;
                
                if (!read_file4.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    while (!read_file4.eof()) {
                        cout << ki.name << " | " << ki.money << " | " << ki.time << " | " << ki.currency << " | " << ki.corometrag;
                    }
                }

                read_file4.close();
                break;
            }
            case 9: {
                ofstream fout5;

                fout5.open("Emalanova3.txt", ios::out | ios::app);

                if (!fout5.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char text[100];
                    cout << "Введите текст: ";
                    cin.get();
                    cin.getline(text, sizeof(text));
                   
                    fout5 << text << "\n";
                }
    
                fout5.close();  
                break;
            }
            case 10: {
                ifstream read_file5;

                read_file5.open("Emalanova3.txt", ios::in);

                if (!read_file5.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Emalanova3.txt" << endl;
                    while (read_file5.get(symbol)) {
                        cout << symbol;
                    }
                }
                read_file5.close(); 
                break;      
            }
            default: {
                cout << "Нет такого пункта меню." << endl;
            }
        }

        cout << "\nХотите повторить операцию?\n1) Да\n2) Нет" << endl;
        cin >> a;

        if (a == 2) {
            cout << "Всего хорошего)" << endl;
        }
    } while (a == 1);
    
    return 0;
}