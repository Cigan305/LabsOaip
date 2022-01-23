#include <iostream>
#include <algorithm>
using namespace std;
 
double min1(double a, double b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}
double max1(double a, double b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int main () {

  double s, y, x;
  
  do
  {
  cout << "Введите x" << endl;
  cin >> x;
  cout << "Введите y" << endl;
  cin >> y;

  s = (max1(min1(x,5.0), max1(y,0.0)))/5;

  if( x == 5 && y == 0)
  {
    cout << "При х = 5 и y = 0 выражение не может быть вычесленно, введите другие значение x и y" << endl;
  }
  else if (x == 5)
   {
    cout << "При х = 5 выражение не может быть вычесленно, введите другое значение x" << endl;
   }
  else if (y == 0)
   {
    cout << "При y = 0 выражение не может быть вычесленно, введите другое значение y" << endl;
   }
  }

  while (x == 5 || y == 0);
  {
  s = max1(min1(x,5.0), max1(y,0.0))/5;
  }
  
  cout << "Ответ: " << s << endl; 
  return 0;
}