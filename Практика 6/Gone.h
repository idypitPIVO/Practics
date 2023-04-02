#pragma once
class Cone {
protected:
	double x, y, z; 
	double radius; 
	double height; 
public:
	Cone(); 
	Cone(double r, double h); 
	Cone(double x, double y, double z, double r, double h); 
	void setCoordinate(double x, double y, double z);
	void setRadius(double r);
	void setHeight(double h);
	double getRadius();
	double getHeight();
	double area();
	double volume();
	void print();
};
