#include <iostream>
#include <cmath>
#include "circle.h"
circle (float r, float x, float y){
    this->r = r;
    this->x = x;
    this->y = y; 
}
circle(){
    r = 0;
    x = 0;
    y = 0; 
}
void set_circle (float r1, float x1, float y1){
   r = r1;
   x = x1;
   y = y1;
}
float square (){
  float PI = 3.14153;
  return PI * r * r 
}
bool triangle_around (float a, float b, float c){
    float p, S;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a + b > c && a + c > b && c + b > a){
        if(r = (a * b * c)/(4 * S)){
            return true;
        }else{
            return false;
        }
    }
}
bool triangle_in (float a, float b, float c){
    float p, S;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a + b > c && a + c > b && c + b > a){
        if(r = 2 * S / p){
            return true;
        }else{
            return false;
        }
    }
}
bool check_circle (float r,float x_cntr, float y_cntr){
    R = sqrt((x - x_cntr) * (x - x_cntr) + (y - y_cntr) * (y - y_cntr))
    if (r == R) {
        return true;
    } else {
        return false;
    }
}