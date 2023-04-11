#include <iostream>
#include <cmath>
using namespace std;

class type5 {
private:
    double B, C;
public:
    type5() {
        B = NULL;
        C = NULL;
    }
    void get_b(int b2) {
        B = b2;
    }
    void get_c(int c2) {
        C = c2;
    }
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "Корень уравнения: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x + " << C << " = 0" << endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6() {
        A = NULL;
        B = NULL;
        C = NULL;
    }
    void get_a(int a2) {
        A = a2;
    }
    void get_b(int b2) {
        B = b2;
    }
    void get_c(int c2) {
        C = c2;
    }
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
};

int main()
{
    setlocale(LC_ALL,"Russian");
    type5 one_zero;
    type6 no_zero;
    cout << "Введите коэффициенты квадратных уравнений" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b != 0 && c != 0) {
        one_zero.get_b(b);
        one_zero.get_c(c);
        one_zero.Get_answer();
        one_zero.show();
    }
    if (a != 0 && b != 0 && c != 0) {
        no_zero.get_a(a);
        no_zero.get_b(b);
        no_zero.get_c(c);
        no_zero.Get_answer();
        no_zero.show();
    }
    return 0;
}