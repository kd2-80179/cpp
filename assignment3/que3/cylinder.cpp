#include "./cylinder.h"
#include ""
Cylinder(){

};

Cylinder(double radius,double height)
{

    this->radius = radius;

    this->height =height;
};




void getradius()
{
    cout << "Radius";
}
_ void set_radius()
{
    cout << "ENTER RADIUS = ";
    CIN >> this->radius;
}
void getheight()
{
    cout << "hight";
} 
void set_height()
{
    cout<<"Enter height=";
    cin>>this->height;

}
void  getvolume()
{
    cout <<"volume";
}
void printvolume()
{
    cout<<"this volume=";
    cin>>this->volume;
}


void Cylinder ::cal_volume()
{

    volume = 3.14 * radius * radius * hight;

    cout << volume;
}
