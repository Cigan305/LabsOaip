#include <iostream>

using namespace std; 
const int rows = 10;
const int cols = 10;
int a[rows][cols] = {{ -16, -78, 0, -6, -29, -19, 0, -65, -88, -51},
{ -79, -22, 0, -25, -62, -69, 0, -59, -75, -89},
{ -87, -95, 0, -85, -49, -75, 0, -73, -59, -52},
{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{ -99, -21, 0, 64, 22, -2, 0, -84, -1, -71},
{ -25, 47, 0, 43, 15, -44, 0, 61, 4, 74},
{ 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{ 98, 58, 0, -29, 95, 62, 0, 89, 36, -32}};
 
void deleteRow(int n, int m, int row)
{
    int i,j;
    cout<<"Удалена строка: "<< row <<endl;
    for(i = row; i < n - 1; i++)
    {
       for(j = 0; j < m; j++)
       {
            a[i][j]=a[i+1][j];
       }
    }
}
 
void deleteCol(int n, int m, int col)
{
    int i,j;
    cout<<"Удалён столбец: "<< col <<endl;
    for(j = col; j < m - 1; j++)
    {
       for(i = 0; i < n; i++)
       {
            a[i][j]=a[i][j+1];
       }
    }
}
 
void printArray(int n, int m)
{
    int i,j;
    for(i = 0; i < n; i++)
    {
       for(j = 0; j < m; j++)
            cout<<a[i][j]<<'\t';
       cout<<endl;
    }
    cout<<endl;
}
 
int main()
{
    int i, j, m = cols, n = rows;
    bool flag = true;
 
    cout <<"Массив: "<< endl;
    printArray(n,m);
 
    for(i = 0; i < n; i++)
    {
       flag = true;
       for(j = 0; j < m; j++)
       {
            if (a[i][j] !=0 )
            {
                flag = false;
                break;
            }
       }
       if(flag == true)
       {
            deleteRow(n,m,i);
            n--;
            i--;
            printArray(n,m);
       }
    }
 
 
    for(j=0; j<m; j++)
    {
       flag = true;
       for(i = 0; i < n; i++)
       {
            if (a[i][j]!=0)
            {
                flag = false;
                break;
            }
       }
       if(flag == true)
       {
            deleteCol(n,m,j);
            m--;
            j--;
            printArray(n,m);
       }
    }
 
    cout<<endl;
    system("pause");
    return 0;
}