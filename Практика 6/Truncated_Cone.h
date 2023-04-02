#pragma once
#include "Cone.h"
#include <iostream>

class Truncated_Cone : public Cone
{
protected:
	double radius2; 

public:
	Truncated_Cone(); 
	Truncated_Cone(double r, double r2, double h); 
	Truncated_Cone(double x, double y, double z, double r, double r2, double h); 
	void setCoordinate(double x, double y, double z);
	void setRadius(double r);
	void setHeight(double h);
	void setRadius2(double r2);
	double getRadius2();
	double area();
	double volume();
	friend std::ostream& operator<<(std::ostream& out, Truncated_Cone cone);
	friend std::istream& operator>>(std::istream& in, Truncated_Cone cone);
	bool operator==(Truncated_Cone cone);
	bool operator!=(Truncated_Cone cone);
	bool operator>(Truncated_Cone cone);
	bool operator<(Truncated_Cone cone);
	bool operator>=(Truncated_Cone cone);
	bool operator<=(Truncated_Cone cone);
};

