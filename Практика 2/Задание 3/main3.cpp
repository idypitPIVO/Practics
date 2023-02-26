#include <iostream>
#include < locale>
#include "figure.h"
using namespace std;
int main(){
  setlocale(LC_ALL, "Russian");
  figure A;
  figure B;
  figure C;
  float X1, X2, X3, X4, Y1, Y2, Y3, Y4;
  cout << "Введите координаты четырехуголька  A ([x1, y1], [x2, y2], [x3, y3], [x4, y4])" << endl;
  cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
  A.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);
  cout << "Введите координаты четырехуголька B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])" << endl;
  cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
  B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);
  cout << "Введите координаты четырехуголька C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])" << endl;
  cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
  C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);
  
  cout << "Параметры четырехугольника A: "; A.show();
  cout << "Параметры четырехугольника B: "; B.show();
  cout << "Параметры четырехугольника C: "; C.show();
  cout << "\n";
 
  if (A.is_prug()) cout << "Четырехугольник A - прямоугольный\n";
  if (B.is_prug()) cout << "Четырехугольник B - прямоугольный\n";
  if (C.is_prug()) cout << "Четырехугольник C - прямоугольный\n";
  
  cout << "\n";
  
  if (A.is_square()) cout << "Четырехугольник A -квадрат\n";
  if (B.is_square()) cout << "Четырехугольник B -квадрат\n";
  if (C.is_square()) cout << "Четырехугольник C -квадрат\n";
  
  cout << "\n";
  
  if (A.is_romb()) cout << "Четырехугольник A - ромб\n";
  if (B.is_romb()) cout << "Четырехугольник B - ромб\n";
  if (C.is_romb()) cout << "Четырехугольник C - ромб\n";

  cout << "\n";

  if (A.is_in_circle()) cout << "Четырехугольник A можно вписать в окружность\n";
  if (B.is_in_circle()) cout << "Четырехугольник B можно вписать в окружность\n";
  if (C.is_in_circle()) cout << "Четырехугольник C можно вписать в окружность\n";

  cout << "\n";

  if (A.is_out_circle()) cout << "Окружность можно вписать в четырехугольник A\n";
  if (B.is_out_circle()) cout << "Окружность можно вписать в четырехугольник B\n";
  if (C.is_out_circle()) cout << "Окружность можно вписать в четырехугольник C\n";
}
