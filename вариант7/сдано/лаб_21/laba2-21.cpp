#include <iostream>

using namespace std;
class Calculator
{
private:
	double a;
	double b;
	char c;
	double r;
public:
	double getA();
	double getB();
	char getC();
	double getR();
	void setA(double a0);
	void setB(double a0);

	Calculator(double a1, double b1);
	void vychislenie(char x);
};

Calculator::Calculator(double a1, double b1)
{
	a = a1;
	b = b1;
}

double Calculator::getA()
{
	return a;
}
double Calculator::getB()
{
	return b;
}
char Calculator::getC()
{
	return c;
}
double Calculator::getR()
{
	return r;
}

void Calculator::setA(double a0)
{
	a = a0;
}
void Calculator::setB(double b0)
{
	a = b0;
}

void Calculator::vychislenie(char x)
{
	c = x;
	switch (x)
	{
	case '+':
	{
		r = a + b;
		break;
	}
	case '-':
	{
		r = a - b;
		break;
	}
	case '*':
	{
		r = a * b;
		break;
	}
	case '/':
	{
		r = a / b;
		break;
	}
	default:
	{
		cout << "такого нет\n";
		break;
	}
	}
	return;
}



int main()
{
	double a1, b1;
	char x0;
	bool f;
	do
	{
		cout << "введите число-операнд1: ";
		cin >> a1;
		cout << "введите арифметический знак:";
		cin >> x0;
		cout << "введите число-операнд2: ";
		cin >> b1;
		Calculator k(a1, b1);
		k.vychislenie(x0);
		double rez = k.getR();
		cout << k.getA() << ' ' << k.getC() << ' ' << k.getB() << '=' << k.getR() << endl;
		cout << "Продолжить?(да 1 нет 0";
		cin >> f;
	} while (f == true);

	return 0;
}