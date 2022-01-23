#include<iostream>
#include<fstream>
#include<string.h>
#include<unistd.h>
#include<time.h>

using namespace std;

struct State {
    
    int population;
    double territory;
    char currency;
    bool sea;
    char name[50];

} s;

int main() {
    srand(time(NULL));
    sleep(2);
    int p, a;

    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Заполнить текстом текстовый файл.\n2) Вывод текств на консоль.\n3) Заполнить файл вещественными числами.\n4) Вывод элементов массива из файла\n5) Заполнить файл используя структуру(Государство).\n6) Вывести содержимое структуры на консоль.\n7) Ввод структуры в бинарный файл.\n8) Вывод структуры из бинарного файла.\n9) Заполнить текстом текстовый файл(дозапись).\n10) Вывод текств на консоль.\n";
        cin >> p;
        switch (p) {
            case 1: {
                ofstream fout1;

                fout1.open("Grigorenko.txt", ios::out | ios::trunc);

                if (!fout1.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char text[100];
                    cout << "Введите текст: ";
                    cin.get();
                    cin.getline(text, sizeof(text));
                   
                    fout1 << text << "\n";
                }
    
                fout1.close();  

                break;
            }
            case 2: {
                ifstream read_file1;

                read_file1.open("Grigorenko.txt", ios::in);

                if (!read_file1.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Grigorenko.txt" << endl;
                    while (read_file1.get(symbol)) {
                        cout << symbol;
                    }
                }
                read_file1.close(); 
                break;      
            }
            case 3: {
                ofstream fout2;

                fout2.open("Grigorenko0.txt", ios::out | ios::app);

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

                    double* arr = new double[n1];

                    if (arr == NULL) {
                        cout << "Нет памяти.";
                        return 0;
                    }

                    for (int i = 0; i < n1; i++) {
                        arr[i] = (rand() % 10)/7.7;
                        fout2 << arr[i] << " ";
                    }    

                    fout2 << endl;

                    delete [] arr;    
                    arr = NULL;                    
                }

                fout2.close();
                break;
            }
            case 4: {
                ifstream read_file2;

                read_file2.open("Grigorenko0.txt", ios::in);

                if (!read_file2.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    double symbol;
                    read_file2 >> symbol;
                    cout << "\nЭлементы текстового файла: Grigorenko0.txt" << endl;
                    while (!read_file2.eof()) {
                        cout << symbol << " ";
                        read_file2 >> symbol;
                    }
                }
    
                read_file2.close(); 
                break;      
            }
            case 5: {
                ofstream fout3;

                fout3.open("Grigorenko1.txt", ios::out | ios::app);

                if (!fout3.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    int n2 = 0;
                    
                    cout << "Введите количество стран: ";
                    cin >> n2;

                    while (n2 <= 0) {
                        cout << "Введите количество государств: ";
                        cin >> n2;
                    }

                    State* country = new State[n2];

                    if(country == NULL) {
                        cout << "Нет памяти.";
                        return 0;
                    }

                    for(int i = 0; i < n2; i++) {
                        cout << "Введите страну: ";
                        cin >> country[i].name;

                        cout << "Введите население(млн): ";
                        cin >> country[i].population;

                        cout << "Введите размер территории(км^2): ";
                        cin >> country[i].territory;

                        cout << "Введите валюту: ";
                        cin >> country[i].currency;

                        cout << "Введите есть ли у вас выход к морю(1 если да/ 0 если нет)? ";
                        cin >> country[i].sea;
                    }

                    for(int i = 0; i < n2; i++) {
                        fout3 << country[i].name << " | " << country[i].population << " | " << country[i].territory << " | " << country[i].currency << " | " << country[i].sea << " | " << endl;
                    }

                    fout3 << endl;
                    
                    delete [] country;
                    country = NULL;
                }

                fout3.close();
                break;
            }
            case 6: {
                ifstream read_file3;

                read_file3.open("Grigorenko1.txt", ios::in);

                if (!read_file3.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Grigorenko1.txt" << endl;
                    while (read_file3.get(symbol)) {
                        cout << symbol;
                    }
                }
    
                read_file3.close(); 
                break;      
            }
            case 7: {

                fstream fout4("Grigorenko2.bin", ios::app | ios::binary );

                if (!fout4) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;                
                }

                cout << "Введите страну: ";
                cin >> s.name;

                cout << "Введите население(млн): ";
                cin >> s.population;

                cout << "Введите размер территории(км^2): ";
                cin >> s.territory;

                cout << "Введите валюту: ";
                cin >> s.currency;

                cout << "Введите есть ли у вас выход к морю(1 если да/ 0 если нет)? ";
                cin >> s.sea;

                fout4.write((char*)&s, sizeof(s));
                fout4.close();

                break;
            }
            case 8: {
                ifstream read_file4("Grigorenko2.bin", ios::in | ios::binary);
                State st;
                
                if (!read_file4.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    while (!read_file4.eof()) {
                        cout << st.name << " | " << st.population << " | " << st.territory << " | " << st.currency << " | " << st.sea;
                    }
                }

                read_file4.close();
                break;
            }
            case 9: {
                ofstream fout5;

                fout5.open("Grigorenko3.txt", ios::out | ios::app);

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

                read_file5.open("Grigorenko3.txt", ios::in);

                if (!read_file5.is_open()) {
                    cout << "Ошибка открытия файла." << endl;
                }
                else {
                    char symbol;
                    cout << "\nЭлементы текстового файла: Grigorenko3.txt" << endl;
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