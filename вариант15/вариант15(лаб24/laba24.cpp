#include<iostream>
#include<string.h>
#include <cmath>

using namespace std;

class Point {
protected:
    double x, y;
public:
    Point() {}

    Point(double a, double b) : x(a), y(b) 
    {}

    virtual void Show() = 0;
    virtual double Length() = 0;
    virtual double Distance1() = 0;
    virtual double Distance2() = 0;
    virtual double Distance3() = 0;
    virtual double Distance4() = 0;
    virtual double AvDistance() = 0;

    ~Point() {
        cout << "Îáúåêò óäàëží" << endl;
    }
};


class Rectangle : public Point
{
protected:
	double x2, y2, x3, y3, x4, y4;
public:
	Rectangle() {}

	Rectangle(double a1, double b1, double a2, double b2, double a3, double b3, double a4, double b4) : Point(x, y), x2(a2), y2(b2), x3(a3), y3(b3), x4(a4), y4(b4)
	{}

	double Length() override
	{
        double l1, l2, l3, l4, P;
        l1 = y2 - y;
        l2 = x3 - x2;
        l3 = y3 - y4;
        l4 = x4 - x;
        P = l1 + l2 + l3 + l4;
		return P;
	}

    double Distance1() override
    {
        double p1 = pow(x, 2) + pow(y, 2);
        return p1;
    }

    double Distance2() override
    {
        double p2 = pow(x2, 2) + pow(y2, 2);
        return p2;
    }

    double Distance3() override
    {
        double p3 = pow(x3, 2) + pow(y3, 2);
        return p3;
    }

    double Distance4() override
    {
        double p4 = pow(x4, 2) + pow(y4, 2);
        return p4;
    }

    double AvDistance() override
    {
        double av = (Distance1() + Distance2() + Distance3() + Distance4()) / 4;
        return av;
    }

    void Show() override
    {
        cout << "Ïåðèìåòð ïðÿìîóãîëüíèêà ðàâåí: " << Length() << "\nÐàññòîÿíèå îò íà÷àëà êîîðäèíàò äî òî÷êè 1 ðàâíî: " << Distance1() << "\nÐàññòîÿíèå îò íà÷àëà êîîðäèíàò äî òî÷êè 2 ðàâíî: " << Distance2() << "\nÐàññòîÿíèå îò íà÷àëà êîîðäèíàò äî òî÷êè 3 ðàâíî: " << Distance3() << "\nÐàññòîÿíèå îò íà÷àëà êîîðäèíàò äî òî÷êè 4 ðàâíî: " << Distance4() << "Ñðåäíåå ðàññòîÿíèå îò íà÷àëà êîîðäèíàò äî âåðøèí: " << AvDistance() << endl;
    }
};

int main()
{
    int n;
    cout << "Ââåäèòå êîëè÷åñòâî îáúåêòîâ: ";
    cin >> n;
    double a1, b1, a2, b2, a3, b3, a4, b4;
    Point** mas = new Point * [n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ââåäèòå êîîðäèíàòû âñåõ âåðøèí ïðÿìîóãîëüíèêà\n";
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
        mas[i] = new Rectangle(a1, b1, a2, b2, a3, b3, a4, b4);
        mas[i]->Show();
    }

    double summ=0;
    for (int i = 0; i < n; i++)
    {
        summ += mas[i]->Distance1();
        summ += mas[i]->Distance2();
        summ += mas[i]->Distance3();
        summ += mas[i]->Distance4();
    }
    double Av = summ / (n * 4);
    cout << "Ñðåäíåå ðàññòîÿíèå îò íà÷àëà êîîðäèíàò äî âåðøèí ïðÿìîóãîëüíèêîâ: " << Av << endl;

    system("pause");
    return 0;
}