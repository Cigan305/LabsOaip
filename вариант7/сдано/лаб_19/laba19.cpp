#include<iostream>
#include<string.h>
#include<time.h>

using namespace std;

struct State {
    
    int population;
    double territory;
    char currency;
    bool sea;
    char name[50];

} s;
bool f = false;

int main() {
    srand(time(NULL));
    int p, a;

    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Заполнить текстом текстовый файл.\n2) Вывод данного текста.\n3) Заполнить файл вещ. числами через массив\n4) Вывод элементов массива\n5) Заполнить файл используя струтуру\n6) Вывод структур из файла\n7) Ввести данные о государстве\n8) Записать (дописать в конце бинарног файла) данные о текущем человеке из ОП\n9) Вывод данных о государстве\n";
        cin >> p;
        switch (p) {
            case 1: {
                FILE* wf;
                char s[100];

                if (!(wf = fopen("Grigorenko.txt", "wt"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                cout << "Ввод: ";
                cin.get();
                cin.getline(s, 100);


                int i = 0;
                while (s[i] != 0) {
                    fputc(s[i++], wf);
                }
                fclose(wf);

                break;
            }
            case 2: {
                FILE* rf;
                if ((rf = fopen("Grigorenko.txt", "rt")) == 0) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                char c = fgetc(rf);
                while (!feof(rf)) {
                    cout << c;
                    c = fgetc(rf);
                }
                fclose(rf);
                cout << "\nЧтение файла завершено." << endl;

                break;
            }
            case 3: {
                FILE* wf;
                
                if (!(wf = fopen("Grigorenko0.txt", "wt"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                int n = 0;

                cout << "Введите размерность массива: ";
                cin >> n;

                double* arr = new double[n];

                if (arr == NULL) {
                    cout << "Нет памяти." << endl;
                    return 0;
                }

                for(int i = 0; i < n; i++) {
                    arr[i] = (rand() % 20)/7.7;

                    fprintf(wf, "%lf ", arr[i]);
                }

                delete [] arr;
                arr == NULL;

                fclose(wf);

                break;
            }
            case 4: {
                FILE* rf;
                if ((rf = fopen("Grigorenko0.txt", "rt")) == 0) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                double x;
                while (!feof(rf)) {
                    fscanf(rf, "%lf ", &x);
                    cout << x << " | ";

                }
                fclose(rf);
                cout << "\nЧтение файла завершено." << endl;

                break;      
            }
            case 5: {
                FILE* wf;
                
                if (!(wf = fopen("Grigorenko1.txt", "wt"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

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
                    fprintf(wf, "%s | %d | %lf | %c | %d\n", country[i].name, country[i].population, country[i].territory, country[i].currency, country[i].sea);
                }
                    
                delete [] country;
                country = NULL;

                fclose(wf);

                break;
            }
            case 6: {
                FILE* rf;
                if ((rf = fopen("Grigorenko1.txt", "rt")) == 0) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                char c = fgetc(rf);
                while (!feof(rf)) {
                    cout << c;
                    c = fgetc(rf);
                }
                fclose(rf);
                cout << "\nЧтение файла завершено." << endl;

                break;   
            }
            case 7: {

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

                f = true;
                break;
            }
            case 8: {
                if (f == false) {
                    cout << "Нет даннных для записи." << endl;
                    break;
                }

                FILE* wf;
                if (!(wf = fopen("Grigorenko2.bin", "ab"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }
                fwrite(&s, sizeof(State), 1, wf);
                fclose(wf);
                break;
            }
            case 9: {
                State s0;
                FILE* rf;

                if (!(rf = fopen("Grigorenko2.bin", "rb"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                fread(&s, sizeof(State), 1, rf);
                while (!feof(rf)) {
                    cout << s.name << " | " << s.population << " | " << s.territory << " | " << s.currency << " | " << s.sea;
                    fread(&s, sizeof(State), 1, rf);
                }
                fclose(rf);
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