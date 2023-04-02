#include <iostream>
#include <cmath>
#include <windows.h>
#include "Cone.h"
#include "Truncated_Cone.h"

int main()
{
	setlocale(LC_ALL, "");
	Cone c1(1, 2, 3, 4, 5);
	Truncated_Cone c2(1, 2, 3, 4, 5, 6);
	std::cout << "������� ������ ����������� ������: " << c1.area() << std::endl;
	std::cout << "����� ������: " << c1.volume() << std::endl;
	std::cout << "������� ������ ����������� ���������� ������: " << c2.area() << std::endl;
	std::cout << "����� ���������� ������: " << c2.volume() << std::endl;
	std::cout << std::endl;

	Cone c3;
	std::cout << "������� ���������� ������ (x,y,z): ";
	double x, y, z;
	std::cin >> x >> y >> z;
	c3.setCoordinate(x, y, z);
	std::cout << "������� ������ � ������ ������: ";
	double r, h;
	std::cin >> r >> h;
	c3.setRadius(r);
	c3.setHeight(h);
	std::cout << std::endl;
	std::cout << " >> ������ 3" << std::endl;
	c3.print();
	std::cout << std::endl;

	Truncated_Cone c4(x, y, z, r, 3, h);
	Truncated_Cone c5(x, y, z, r, 4, h);
	Truncated_Cone c6(x, y, z, r, 5, h);
	std::cout << " >> ������ 4" << c4 << std::endl;
	std::cout << " >> ������ 5" << c5 << std::endl;
	std::cout << " >> ������ 6" << c6 << std::endl;
	std::cout << std::endl;
	std::cout << "c2 != c6: " << (c2 != c6 ? "��" : "���") << std::endl;
	std::cout << "c2 > c6 : " << (c2 > c6 ? "��" : "���") << std::endl;
	std::cout << "c2 < c6 : " << (c2 < c6 ? "��" : "���") << std::endl;
	std::cout << "c2 >= c6: " << (c2 >= c6 ? "��" : "���") << std::endl;
	std::cout << "c2 <= c6: " << (c2 <= c6 ? "��" : "���") << std::endl;

	return 0;
}
