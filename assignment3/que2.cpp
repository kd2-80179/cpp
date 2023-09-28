#include <iostream>
using namespace std;
class tollboth
{
    unsigned int tot_cars;
    double tot_amount;
    int unpay_car;


public:
tollboth()
{
    tot_car=0;
    unpay_car=0;
    tot_amount=0;

}
void payingcar()
{
    tot_amount=tot_amount+0.50;
    tot_cars=tot_cars+1;

}
void nopayCar()
{
    unpay_car=unpay_car+1;

}
void printonconsole()
{
   cout<<"total amount="<<tot_amount <<endl;
   cout << "total no of cars="<<tot_car+unpay_car <<endl;
   cout <<"total no of unpaid cars="<<unpaid_car <<endl;
   cout <<"total no of paying class="<<tot_cars<<endl;


}
};
int menu()
{
   int choice;
   cout<<"*************tollboth***********\n";
   cout<<"0.exit \n";
   cout << "1.paying car\n";
   cout<< "2.no paying car\n";
    cout<<"3.print details \n";
    cout <<"enter your choice \n";
    cout <<"********************\n";
    cin >>choice;
    return choice;
    

}
int main()
{
    int choice;
    tollbooth tb;

    while((choice=menu())!=0)
    {
        switch (choice)
        {
        case 1:
             tb.payingcar()
            break;
        case 2:
             tb.nopaycar()  
             break;
        case 3:
             tb.printonconsole()
            break;       
        
        default:
            cout<<"enter valid choice \n"
            break;
        }
        return 0;
    }
}
