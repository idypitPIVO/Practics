#include <iostream>
#include <cmath>
using namespace std;

class type3 {
private:
    double C;
public:
    type3() {
        C = NULL;
    }
    type3(double c1) {
        C = c1;
    }
    void set_c(int c2) {
        C = c2;
    }
    void Get_answer() {
        cout << "Корней нет" << endl;
    }
    void show() {
        cout << C << " = 0" << endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4() {
        A = NULL;
        C = NULL;
    }
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void set_a(int a2) {
        A = a2;
    }
    void set_c(int c2) {
        C = c2;
    }
    void Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << C << " = 0" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    type3 two_zeroC;
    type4 one_zeroC;
    std::cout << "Введите коэффициенты квадратных уравнений: " << endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == 0 && b == 0 && c != 0) {
        two_zeroC.set_c(c);
        two_zeroC.Get_answer();
        two_zeroC.show();
    }
    if (a != 0 && b == 0 && c != 0) {
        one_zeroC.set_a(a);
        one_zeroC.set_c(c);
        one_zeroC.Get_answer();
        one_zeroC.show();
    }
    return 0;
}
