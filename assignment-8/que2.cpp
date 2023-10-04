#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        double inches;
    public:
        Distance()
        {
            this->feet = 0;
            this->inches = 0;
        }
        Distance(int feet, double inches)
        {
            this->feet = feet;
            this->inches = inches;
        }

        Distance operator+(Distance &other)
        {
            Distance d;
            d.feet = this->feet + other.feet;
            d.inches = this->inches + other.inches;
            return d;
        }

        Distance operator++(int)
        {
          this->inches = this->inches+1;
          return Distance(this->feet, this->inches);
        }

        friend void operator--(Distance &other);
        friend bool operator==(Distance &d1, Distance &d2);
        friend void operator>>(istream &in, Distance &d);
        friend void operator<<(ostream &out, Distance &d);
};

void operator--(Distance &other)
{
    other.inches = other.inches-1;
}

bool operator==(Distance &d1, Distance &d2)
{
    bool feet_matches, inches_matches;
    if(d1.feet == d2.feet)
        feet_matches = true;
    else
        feet_matches = false;

    if(d1.inches == d2.inches)
        inches_matches = true;
    else
        inches_matches = false;
    
    return feet_matches && inches_matches;
}

void operator>>(istream &in, Distance &d)
{
    cout<<"Enter feet: ";
    in>>d.feet;
    cout<<"Enter inches: ";
    in>>d.inches;
}

void operator<<(ostream &out, Distance &d)
{
    out<<"Feet = "<<d.feet<<endl;
    out<<"Inches = "<<d.inches<<endl;
}

int main()
{
    Distance d1;
    cin>>d1;
    cout<<"--------Distance d1-----------"<<endl;
    cout<<d1;

    cout<<"--------------------"<<endl;

    Distance d2;
    cin>>d2;
    cout<<"--------Distance d2-----------"<<endl;
    cout<<d2;

    cout<<"--------------------"<<endl;

    Distance d3;
    d3 = d1 + d2;
    cout<<"--------Distance d3-----------"<<endl;
    cout<<d3;

    if(d1 == d2)
        cout<<"Distance d1 and d2 matches..."<<endl;
    else
        cout<<"Distance d1 and d2 not matches..."<<endl;

    cout<<"--------Distance d1 after increment inches-----------"<<endl;
    d1++;
    cout<<d1;

    cout<<"--------Distance d2 after decrement inches-----------"<<endl;
    --d2;
    cout<<d2;

    return 0;
}