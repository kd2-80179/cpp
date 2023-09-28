#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
using namespace std;



class Cylinder
{
private:
    double radius;
    double hight;

 public:
         Cylinder();
         Cylinder (double radius,double hight);
         void getradius();
         void setradius();
         void gethight();
         void sethight();
         void getvolume();
         void printvolume();


   

};
#endif


