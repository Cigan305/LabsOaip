#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    const int a = 10;
    double mas[a] = {3.24, -7.16, 2.28, -0.16, -3.22, 7.14, 2.88, -3.20, 0.99, -4.15};

    //1
    int count  = 0;
    for(int i = 0; i < a; i++) {
        if(mas[i] < 0) {
            count++;
        }
    }
    cout << "Количество отрицательных элементов: " << count << endl;

    //2
    double min = mas[0];
    int index = 0;
    for(int i = 0; i < a; i++) {
        if(fabs(mas[i]) < fabs(min)) {
            min = mas[i];
            index = i;
        }
    }
    cout << "Минимальное значение по модулю: " << min << endl;

    double sum = 0;
    for(int i = index + 1; i < a; i++) {
        sum += mas[i];
    }
    cout << "Сумма элементов: " << sum << endl;

    //3
    double res = 0;
    for(int i = 0; i < a; i++) {
        if(mas[i] < 0) {
            mas[i] = pow(mas[i], 2);
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a - i - 1; j++) {
            if(mas[j] > mas[j + 1]) {
                double b = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = b;
            }
        }
    }

    cout << "Массив по возрастанию: ";
    for(int i = 0; i < a; i++) {
        cout << mas[i] << "  ";
    }
    cout << endl;
    return 0;
}