#include<iostream>

using namespace std;
int main()
{
    const int a = 15;
    int arr[a];
    int sum = 0;
    double res, subtract;

    for(int  i = 0; i < a; i++)
    {
        cout << " Введите arr["<<i<<"]: ";
        cin >> arr[i];
    }

    for(int  i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма всех элементов = " << sum << endl;
    res = sum/a;
    cout << "Среднее арифметическое = " << res << endl;

    cout << "Разность между элементами исходного массива и его средним арифметическим: ";
    for(int  i = 0; i < a; i++)
    {
        subtract = arr[i] - res;
        cout << subtract << " ";
    }

    cout << endl;

    return 0;
}