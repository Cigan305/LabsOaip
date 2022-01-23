#include<iostream>
#include<string.h>

using namespace std;

struct Kino { 
    int many;
    double time;
    char currency;
    bool corometrag;
    char name[50];
} k;
bool f = false;

int main() {
    int p, a;

    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Заполнить текстом текстовый файл.\n2) Вывод данного текста.\n3) Заполнить файл вещ. числами через массив\n4) Вывод элементов массива\n5) Заполнить файл используя струтуру\n6) Вывод структур из файла\n7) Ввести данные о фильме\n8) Записать (дописать в конце бинарног файла) данные о текущем фильме из ОП\n9) Вывод данных о фильме\n";
        cin >> p;
        switch (p) {
            case 1: {
                char text[100];
                FILE* wf;

                if(!(wf = fopen("Emelanova.txt", "wt"))) {
                    cout << "Не удалость открыть файл." << endl;
                    return 0;
                }

                cout << "Введите текст: ";
                cin.get();
                cin.getline(text, 100);

                int i = 0;
                while (text[i] != 0) {
                    fputc(text[i++], wf);
                }

                fclose(wf);
                break;
            }
            case 2: {
                FILE* rf;

                if (!(rf = fopen("Emelanova.txt", "rt"))) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;
                }

                char c = fgetc(rf);
                while (!feof(rf)) {
                    cout << c;
                    c = fgetc(rf);
                }

                fclose(rf);
                break;
            }
            case 3: {
                FILE* wf;

                if (!(wf = fopen("Emelanova1.txt", "wr"))) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;
                }

                int n = 0;

                cout << "Введите размерность массива: ";
                cin >> n;

                while (n < 0) {
                    cout << "Введите размерность массива: ";
                    cin >> n;
                }

                int* arr = new int[n];

                if (arr == NULL) {
                    cout << "Нет памяти." << endl;
                    return 0;
                }

                for (int i = 0; i < n; i++) {
                    arr[i] = rand() % 20;
                    fprintf(wf, "%d # ", arr[i]);
                }
                
                delete [] arr;
                fclose(wf);
                break;
            }
            case 4: {
                FILE* rf;

                if (!(rf = fopen("Emelanova1.txt", "rt"))) {
                    cout << "Не удалось открыть файл" << endl;
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

                if (!(wf = fopen("Emelanova2.txt", "wt"))) {
                    cout << "Не удалось открыть файл." << endl;
                    return 0;
                }
                
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
                    cin >> arr[i].many;

                    cout << "Введите длительность фильма: ";
                    cin >> arr[i].time;

                    cout << "Введите валюту: ";
                    cin >> arr[i].currency;

                    cout << "Введите это короткометражный фильм(1 если да/ 0 если нет)? ";
                    cin >> arr[i].corometrag;
                }

                
                for(int i = 0; i < n2; i++) {
                    fprintf(wf, "%s|", arr[i].name);
                    fprintf(wf, "%d|", arr[i].many);
                    fprintf(wf, "%lf|", arr[i].time);
                    fprintf(wf, "%c|", arr[i].currency);
                    fprintf(wf, "%d\n", arr[i].corometrag);
                }
                
                delete [] arr;
                fclose(wf);
                break;
            }
            case 6: {
                FILE* rf;

                if (!(rf = fopen("Emelanova2.txt", "rt"))) {
                    cout << "Не удалось открыть файл" << endl;
                    return 0;
                }

                char c = fgetc(rf);
                while (!feof(rf)) {
                    cout << c;
                    c = fgetc(rf);
                }

                fclose(rf);
                break;   
            }
            case 7: {
                cout << "Введите название фильма: ";
                cin >> k.name;

                cout << "Введите бюджет фильма: ";
                cin >> k.many;

                cout << "Введите длительность фильма: ";
                cin >> k.time;

                cout << "Введите валюту: ";
                cin >> k.currency;

                cout << "Введите это короткометражный фильм(1 если да/ 0 если нет)? ";
                cin >> k.corometrag;

                f = true;
                break;
            }
            case 8: {
                if (f == false) {
                    cout << "Нет даннных для записи." << endl;
                    break;
                }

                FILE* wf;
                if (!(wf = fopen("Emelanova3.bin", "ab"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }
                fwrite(&k, sizeof(Kino), 1, wf);
                fclose(wf);
                break;
            }
            case 9: {  
                Kino s0;
                FILE* rf;

                if (!(rf = fopen("Emelanova3.bin", "rb"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                fread(&k, sizeof(Kino), 1, rf);
                while (!feof(rf)) {
                    cout << k.name << " | " << k.many << " | " << k.time << " | " << k.currency << " | " << k.corometrag;
                    fread(&k, sizeof(Kino), 1, rf);
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