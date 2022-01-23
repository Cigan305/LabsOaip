#include<iostream>
#include<string.h>
#include<time.h>

using namespace std;

struct Employee {
    
    int age;
    double height;
    char zp;
    bool standing;
    char name[50];
    
} e;
bool f = false;

int main() {
    srand(time(NULL));
    int p, a;

    do {
        cout << "Выберете пункт меню:\n";
        cout << "1) Заполнить текстом текстовый файл.\n2) Вывод данного текста.\n3) Заполнить файл вещ. числами через массив\n4) Вывод элементов массива\n5) Заполнить файл используя струтуру\n6) Вывод структур из файла\n7) Ввести данные о работнике\n8) Записать (дописать в конце бинарног файла) данные о текущем человеке из ОП\n9) Вывод данных о человеке\n";
        cin >> p;
        switch (p) {
            case 1: {
                FILE* wf;
                char s[100];

                if (!(wf = fopen("Kurishev.txt", "wt"))) {
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
                if ((rf = fopen("Kurishev.txt", "rt")) == 0) {
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
                
                if (!(wf = fopen("Kurishev0.txt", "wt"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                int n = 0;

                cout << "Введите размерность массива: ";
                cin >> n;

                long int* arr = new long int[n];

                if (arr == NULL) {
                    cout << "Нет памяти." << endl;
                    return 0;
                }

                for(int i = 0; i < n; i++) {
                    arr[i] = rand() % 20;

                    fprintf(wf, "%d * ", arr[i]);
                }

                delete [] arr;
                arr == NULL;

                fclose(wf);

                break;
            }
            case 4: {
                FILE* rf;
                if ((rf = fopen("Kurishev0.txt", "rt")) == 0) {
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
            case 5: {
                FILE* wf;
                
                if (!(wf = fopen("Kurishev1.txt", "wt"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                int n2 = 0;
                    
                cout << "Введите количество работников: ";
                cin >> n2;

                while (n2 <= 0) {
                    cout << "Введите количество работников: ";
                    cin >> n2;
                }

                Employee* arr = new Employee[n2];

                if(arr == NULL) {
                    cout << "Нет памяти.";
                    return 0;
                }

                for(int i = 0; i < n2; i++) {
                    cout << "Введите имя: ";
                    cin >> arr[i].name;

                    cout << "Введите возраст: ";
                    cin >> arr[i].age;

                    cout << "Введите рост: ";
                    cin >> arr[i].height;

                    cout << "Введите валюту вашей ЗП: ";
                    cin >> arr[i].zp;

                    cout << "Введите есть ли у вас стаж(1 если да/ 0 если нет)? ";
                    cin >> arr[i].standing;
                }

                for(int i = 0; i < n2; i++) {
                    fprintf(wf, "%s | %d | %lf | %c | %d\n", arr[i].name, arr[i].age, arr[i].height, arr[i].zp, arr[i].standing);
                }
                    
                delete [] arr;
                arr = NULL;

                fclose(wf);

                break;
            }
            case 6: {
                FILE* rf;
                if ((rf = fopen("Kurishev1.txt", "rt")) == 0) {
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

                cout << "Введите имя: ";
                cin >> e.name;

                cout << "Введите возраст: ";
                cin >> e.age;

                cout << "Введите рост: ";
                cin >> e.height;

                cout << "Введите валюту вашей ЗП: ";
                cin >> e.zp;

                cout << "Введите есть ли у вас стаж(1 если да/ 0 если нет)? ";
                cin >> e.standing;

                f = true;
                break;
            }
            case 8: {
                if (f == false) {
                    cout << "Нет даннных для записи." << endl;
                    break;
                }

                FILE* wf;
                if (!(wf = fopen("Kurishev2.bin", "ab"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }
                fwrite(&e, sizeof(Employee), 1, wf);
                fclose(wf);
                break;
            }
            case 9: {
                Employee e0;
                FILE* rf;

                if (!(rf = fopen("Kurishev2.bin", "rb"))) {
                    cout << "Ошибка открытие файла." << endl;
                    return 0;
                }

                fread(&e, sizeof(Employee), 1, rf);
                while (!feof(rf)) {
                    cout << e.name << " | " << e.age << " | " << e.height << " | " << e.zp << " | " << e.standing;
                    fread(&e, sizeof(Employee), 1, rf);
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