// Q3. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
// approach)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.

#include <iostream>
using namespace std;
class Cylinder
{
private:
    double radius;
    double radius;
    double height;

public:
    Cylinder()
    {
    }
    Cylinder(double radius, double hight)

    {
        this->radius = radius;
        this->height = height;
    }
    volume()
    {
        radius = 0;

        height = 0;
    }

    void calculatevolume()
    {
        cout << "volume=" << 3.14 * radius * radius * height << endl;
    }

    void acceptVolume()
    {
        cout << "enter the radius = ";
        cin >> radius;

        cout << "enter height=";
        cin >> height;
    }
    void displayVolume()
    {
        cout << "radius=" << radius << endl;
        cout << "height=" << height < endl;

        cout << "volume=" << 3.14 * radius * radius * height << endl;
    }

    void getradius()
    {
        cout << "Radius";
    }
    void setradius()
    {
        cout << "ENTER RADIUS = ";
        Cin >> this->radius;
    }
    void getheight()
    {
        cout << "hight";
    }
    void set_height()
    {
        cout << "Enter height=";
        cin >> this->height;
    }
    void getvolume()
    {
        cout << "volume";
    }
    void printvolume()
    {
    }
};
int menu()
{
    int choice;
    cout << "0.  Exit" << endl;

    cout << "1.  accept volume" << endl;
    cout << "2.  display volume" << endl;
    cout << "3.  get radius" << endl;
    cout << "4.  set radius" << endl;
    cout << "3.  get height" << endl;
    cout << "4.  set height" << endl;
    cout << "5.    get volume" << endl;
    cout << "5.print volume" << endl;

    cout << "enter your choice" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    volume v;

    int choice;
    while ((choice = menu()) != 0)

        switch (choice)
        {
        case 1:
            v.acceptVolume();
            break;
        case 2:
            v.getRadius();
            break;
        case 3:
            v.setRadius();
            break;
        
        case 4:
            v.getheight();
            break;
        case 5:
         v.setheight();
            break;
        case 6:
          v.getvolume(); 
           break;
        case 7:
           v.setvolume();
           break;
        case 8:
            v.getprintvolume();
            break;
        case 9:
            v.setprintvolume();
              break;
    return 0;
}
}

