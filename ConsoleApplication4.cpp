#include <iostream>
#include <cmath>
using namespace std;

class type7 {
private:
    double B;
public:
    type7() {
        B = NULL;
    }
    void get_b(int b2) {
        B = b2;
    }
    type7(double b1) {
        B = b1;
    }
    void Get_answer() {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x = 0" << endl;
    }
};

class type8 {
private:
    double A, B;
public:
    type8() {
        A = NULL;
        B = NULL;
    }
    void get_a(int a2) {
        A = a2;
    }
    void get_b(int b2) {
        B = b2;
    }
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer() {
        double x = ((-1) * B) / A;
        cout << "Корни уравнения: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    type7 two_zero;
    type8 one_zero;
    cout << "Введите коэффициенты квадратного уравнения :" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b != 0 && c == 0) {
        two_zero.get_b(b);
        two_zero.Get_answer();
        two_zero.show();
    }
    if (a != 0 && b != 0 && c == 0) {
        one_zero.get_a(a);
        one_zero.get_b(b);
        one_zero.Get_answer();
        one_zero.show();
    }
    return 0;
}