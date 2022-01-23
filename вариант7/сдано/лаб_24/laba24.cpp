#include<iostream>

using namespace std;

class Point {
protected:
    double x, y;
public:
    Point() {
        cout << "Объект создан" << endl;
    }    

    Point(double a, double b) {
        x = a;
        y = b;
    }

    virtual void Show()  = 0;
    virtual double Length() = 0;
    virtual double LenghtCircle() = 0;

    ~Point() {
        cout << "Объект удалён" << endl;
    }
};

class Circle : public Point{
protected:
    double r, p, l;
public:        
    Circle() {
        cout << "Объект создан" << endl;
    }    

    Circle(double a0, double b0, double r0) : Point(a0, b0) {
        r = r0;
    }

    double LenghtCircle() override {
		return l = (x + y) * 2;
	}

    double Length() override {
		return  p = 2.0 * 3.14 * r;
	};

    void Show() override {
        cout << "Длинна круга = " << l << endl;
		cout << "Периметр = " << p << endl;
        cout << "Радиус = " << r << endl;
    }

    ~Circle() {
        cout << "Объект удалён" << endl;
    }
};

double Min(Point** mas, int n) {
    double min = mas[0]->LenghtCircle();
    for (int i = 0; i < n; i++) {
        if (mas[i]->LenghtCircle() < min) {
            min = mas[i]->LenghtCircle();
        }
    }
    return min;
}

int main() {
    int n;
    cout << "Введите количество объектов: ";
	cin >> n;
	double a, b, c;
	Point** mas = new Point * [n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите координаты точочек\n";
		cin >> a >> b;
		cout << "Введите радиус\n";
		cin >> c;
		mas[i] = new Circle(a, b, c);
		mas[i]->LenghtCircle();
		mas[i]->Length();
	}

    for (int i = 0; i < n; i++) {
		mas[i]->Show();
	}

    double min = Min(mas, n);
    cout << "Минимальное: " << min << endl;
	
    return 0;
}