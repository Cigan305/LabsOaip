#include<iostream>
using namespace std;

class GruzPer {
protected:
    double price, weight, V3, s, v;
    int time;
public:
    GruzPer() {}

    GruzPer(double a, double b, double c, double d) : s(a), v(b), weight(c), V3(d){}

    virtual void Time() {
        time = s/v;
        cout << "\nВремя грузоперевозки: " << time << "ч" << endl;
    }

    virtual void Price() {
        price = V3/weight;
        cout << "Цена грузоперевозки: " << price << '$' << endl;
    }

    ~GruzPer() {}
};

class Train : public GruzPer {
public:
    Train() {}

    Train(double a, double b, double c, double d) : GruzPer(a, b, c, d) {}

    void Time() override {
        time = s/v;
        cout << "\nВремя перевозки на поезде: " << time << "ч" << endl;
    }

    void Price() override {
        price = V3/weight;
        cout << "Стоимость перевозки на поезде: " << price << '$' << endl;
    }

    ~Train() {}
};

class Plain : public GruzPer {
public:
    Plain() {}

    Plain(double a, double b, double c, double d) : GruzPer(a, b, c, d) {}

    void Time() override {
        time = s/v;
        cout << "\nВремя перевозки на самолёте: " << time << "ч" << endl;
    }

    void Price() override {
        price = V3/weight;
        cout << "Стоимость перевозки на самолёте: " << price << '$' << endl;
    }

    ~Plain() {}
};

class Car : public GruzPer {
public:
    Car() {}

    Car(double a, double b, double c, double d) : GruzPer(a, b, c, d) {}

    void Time() override {
        time = s/v;
        cout << "\nВремя перевозки на машине: " << time << "ч" << endl;
    }

    void Price() override {
        price = V3/weight;
        cout << "Стоимость перевозки на машине: " << price << '$' << endl;
    }

    ~Car() {}
};

int main() {
    GruzPer p1(130.3, 15.7, 3.4, 40.7);
    Plain p2(240.2, 14.6, 2.4, 30.7);
    Train p3(310.1, 13.6, 1.4, 20.7);
    Car p4(400.4, 12.3, 4.4, 10.7);

    p1.Time();
    p1.Price();

    GruzPer* q2 = &p2;
    q2->Time();
    q2->Price();

    GruzPer* q3 = &p3;
    q3->Time();
    q3->Price();

    GruzPer* q4 = &p4;
    q4->Time();
    q4->Price();
    return 0;
}