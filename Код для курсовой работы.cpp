#include <iostream>
#include <cmath>
using namespace std;


class  course_work {
private:
    double A, B, C;
public:
    course_work() {
        A = NULL;
        B = NULL;
        C = NULL;
    }
    void get_a(double a1) {
        A = a1;
    }
    void get_b(double b1) {
        B = b1;
    }
    void get_c(double c1) {
        C = c1;
    }

    void three_zero() {
        cout << "Ответом является любое значение Х" << endl;
        cout << "Уравнение 0 = 0" << endl;
    }

    void two_zero() {
        if (C != 0) {
            cout << "Корней нет" << endl;
            cout << C << " = 0" << endl;
        }
        else {
            cout << "Ответом является: Х = 0" << endl;
            if (A != 0) cout << "Уравнение имеет вид: " << A << "*x^2 = 0" << endl;
            else cout << "Уравнение имеет вид: " << B << "*x = 0" << endl;          
        }
    }

    void one_zero() {
        if (A == 0) {
            cout << "Корень уравнения: " << (-1) * (C / B) << endl;
            if (C > 0) cout << "Уравнение имеет вид: " << B << "*x + " << C << " = 0" << endl;
            else cout << "Уравнение имеет вид: " << B << "*x - " << abs(C) << " = 0" << endl;           
        }
        else if (B == 0) {
            double k = ((-1) * C) / A;
            if (k >= 0) {
                double x1 = sqrt(k);
                double x2 = sqrt(k) * (-1);
                cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
            else {
                cout << "Корней нет" << endl;
            }
            if (C < 0) cout << "Уравнение имеет вид: " << A << "*x^2 - " << abs(C) << " = 0" << endl;
            if (C > 0) cout << "Уравнение имеет вид: " << A << "*x^2 + " << C << " = 0" << endl;
        }
        else {
            double x = ((-1) * B) / A;
            cout << "Корни уравнения: " << endl;
            cout << "X1 = 0" << endl << "X2 = " << x << endl;
            if (B > 0) cout << "Уравнение имеет вид: " << A << "*x^2 + " << B << "*x = 0 " << endl;
            if (B < 0) cout << "Уравнение имеет вид: " << A << "*x^2 - " << abs(B) << "*x = 0 " << endl;           
        }
    }

    void no_zeros() {
        double x, x1, x2;
        if (A > 0 && C > 0) {
            if (abs(B) == 2 * sqrt(A) * sqrt(C)) {
                if (B > 0) {
                    cout << "По формуле сокращенного умножения уравнение имеет вид: (" << sqrt(A) << "x + " << sqrt(C) << ")^2 = 0\n";
                }
                if (B < 0) {
                    cout << "По формуле сокращенного умножения уравнение имеет вид: (" << sqrt(A) << "x - " << sqrt(C) << ")^2 = 0\n";
                }
            }
        }
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            if (D == 0) {
                x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                x1 = ((-1) * B - sqrt(D)) / (2 * A);
                x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
        if (B > 0 && C > 0) cout << "Уравнение имеет вид: " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
        if (B > 0 && C < 0) cout << "Уравнение имеет вид: " << A << "*x^2 + " << B << "*x - " << abs(C) << " = 0" << endl;
        if (B < 0 && C > 0) cout << "Уравнение имеет вид: " << A << "*x^2 - " << abs(B) << "*x + " << C << " = 0" << endl;
        if (B < 0 && C < 0) cout << "Уравнение имеет вид: " << A << "*x^2 - " << abs(B) << "*x - " << abs(C) << " = 0" << endl;       
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    course_work term_paper;
    float a, b, c;
    int k = 0;
    cout << "Введите коэффициенты квадратного уравнения: ";
    cin >> a >> b >> c;

    int array[3] = { a, b, c };
    for (int i = 0; i < 3; i++) {
        if (array[i] == 0) {
            k++;
        }
    }
    
    term_paper.get_a(a);
    term_paper.get_b(b);
    term_paper.get_c(c);
    if (k == 3) {
        term_paper.three_zero();
    }
    if (k == 2) {
        term_paper.two_zero();
    }
    if (k == 1) {
        term_paper.one_zero();
    }
    if (k == 0) {
        term_paper.no_zeros();
    }
    return 0;
}