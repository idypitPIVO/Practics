#include <iostream>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "Ответом является любое значение Х" << endl;
    }
    void show() {
        cout << "Уравнение 0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2() {
        A = NULL;
    }

    type2(double a1) {
        A = a1;
    }
    void set_a(int a2) {
        A = a2;
    }
    void Get_answer() {
        cout << "Ответом является Х = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 = 0" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    type1 all_zero;
    type2 two_zero;
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Введите коэффициенты квадратных уравнений: " << endl;
    std::cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0) {
        all_zero.Get_answer();
        all_zero.show();
    }
    if ((b == 0 && c == 0) && a != 0) {
        two_zero.set_a(a);
        two_zero.Get_answer();
        two_zero.show();
    }
    return 0;
}
