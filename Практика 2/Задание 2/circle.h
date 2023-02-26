#pragma once
class circle{
private:
  float r, float x, float y;
public:
  circle (float r, float x, float y);
  circle();
  void set_circle (float r1, float x1, float y1);
  float square ();
  bool triangle_around (float a, float b, float c);
  bool triangle_in (float a, float b, float c);
  bool check_circle (float r,float x_cntr, float y_cntr);
};