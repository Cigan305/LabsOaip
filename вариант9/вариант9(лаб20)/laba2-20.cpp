#include<iostream>
#include<fstream>
#include<string.h>
#include<unistd.h>
#include<time.h>

using namespace std;
int main() {
    srand(time(NULL));
    sleep(2);
    int p, a;

    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Заполнить текстом текстовый файл.\n2) Перенос заглавных букв в другой файл.\n";
        cin >> p;
        switch (p) {
            case 1: {
                ofstream fout1;

                fout1.open("Emalanova.txt", ios::out | ios::trunc);

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
                ifstream read_file;
                read_file.open("Emalanova.txt", ios::in);

                if (!read_file.is_open()) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;
                }

                ofstream fout2;
                fout2.open("Emalanova2.txt", ios::out);

                if (!fout2.is_open()) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;
                }

                else {
                    char d;
                    while (!read_file.eof()) {
                        read_file >> d;
                        fout2 << (char)toupper(d);
                    }
                }   
                cout << endl;

                read_file.close();
                fout2.close();

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