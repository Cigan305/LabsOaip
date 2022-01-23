#include<iostream>
#include<cmath>

using namespace std;

class Line {
public: 
    Line() {
        cout << "Объект был создан." << endl;
    }

    Line(double a) {
        L1 = a;
    }

    void Show() {
        cout << L1 << endl;
    }

    ~Line() {
        cout << "Объект был удалён." << endl;
    }
protected:
    double L1; 
};

class Rectangle : public Line {
public:
    Rectangle() {
        cout << "Объект был создан." << endl;
    }    

    Rectangle(double L1, double b) : Line(L1) {
        L2 = b;
        Perimetr();
        Square();
    }

    void Show() {
        Line::Show();
        cout << L2 << endl;
    }

    double Perimetr() {
        P = 2 * (L1 + L2);
        return P;
    }

    double Square() {
        S = (L1 * L2);
        return S;     
    }

    ~Rectangle() {
        cout << "Объект был удалён." << endl;
    }
protected:
    double L2;
    double P;
    double S;
};

class Circle : public Rectangle {
public:
    Circle() {
        cout << "Объект был создан." << endl;
    }

    Circle(double L1, double L2) : Rectangle(L1, L2){ 
        radius();
    }

    double radius() {
        R = sqrt(pow(L1, 2) + pow(L2, 2));
        return R;
    }

    ~Circle() {
        cout << "Объект был удалён." << endl;
    }
protected:
    double R;
};
int main() {
    Circle wf(4.4, 3.3);
    wf.Show();
    
    cout << "P = " << wf.Perimetr();
    cout << "S =" << wf.Square();
    cout << "R = " << wf.radius();

    wf.~Circle();

    return 0;
}