#include <iostream>

using namespace std;

int main()
{
 
    //№1
    int *a;
    int b[2];
    a = b;
    b[0] = 7;
    b[1] = 10;
    (*(b+1))++;
    cout << *(a+1) << endl;

    //№2

    char lines[10][20];
    char *pl= lines[0];
    *(lines[2] + 5) = 'D';
    cout << lines[2][5] << endl;

    //№ 3
    
    //a
    int x[][2]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int *px = &x[0][0];// присвоил указателю *px адрес первого элемента массива
    //b. 
    int a, *pb, *pc;
    //c
    int x = 5;
    int *px = &x; //конструкции вида &(x-1) и &3 незаконны (нет отдельной ячейки памяти, хранящей значение x-1 или 3).
    x -= 1;
    //d
    int x = 5, y = 3, z;
    int *px = &x, *py = &y;//присвоил адресса переменных x и y указателям *px и *py
    z = *px + *py;//нашёл сумму элементов через указатели
    //e
    int x[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};//проинициализировал массив
    int *px = &x[0];
    //f
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};// создал и проинициализировал массив
    int *px = &x[4], *py = &x[8];
    cout << *px + *py ? "yes" : "no";// разименовал адресса
    

}    