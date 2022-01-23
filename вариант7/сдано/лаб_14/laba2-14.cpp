#include<iostream>
#include<cmath>


using namespace std;

double foo(int start, int end, int n) {
    if(start > end){
        return sqrt(n);
    }
    return sqrt(start + foo(start + 1, end, n));

}

int main() {

    int start = 0;
    int end = 0;
    int n = 0;

    cout << "Введите начало: ";
    cin >> start;

    cout << "Введите конец: ";
    cin >> end;

    cout << "Введите число n: ";
    cin >> n;

    cout << "Ответ: " << foo(start, end, n) << endl;

    return 0;
}    
