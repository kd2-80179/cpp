#include <iostream>
using namespace std;

class employee // base class
{
private:
    int id;
    float sal;

public:
    employee()
    {
        cout << "Employee Class Constructor" << endl;
        this->id = 0;
        this->sal = 0;
    }
    employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void accept()
    {
        cout << "Enter the ID = ";
        cin >> this->id;
        cout << "Enter the Salary = ";
        cin >> this->sal;
    }
    void display()
    {
        cout << "ID = " << this->id << endl;
        cout << "Salary = " << this->sal << endl;
    }
};
class manager : virtual public employee // derived class1
{
private:
    float bonus;

public:
    manager()
    {
        cout << "Manager Class Constructor" << endl;
        this->bonus = 0;
    }
    manager(float bonus, int id, float sal)
    {
        employee::set_id(id);
        employee::set_sal(sal);
        this->bonus = bonus;
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the Bonus = ";
        cin >> this->bonus;
    }
    void display()
    {
        employee::display();
        cout << "Bonus = " << this->bonus << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Bonus = ";
        cin >> this->bonus;
    }
    void display_manager()
    {
        cout << "Bonus is = " << bonus << endl;
    }
};
class salesman : virtual public employee // derived class2
{
private:
    float comm;

public:
    salesman()
    {
        cout << "Salesman Class Constructor" << endl;
        this->comm = 0;
    }
    salesman(float comm, float bonus, int id, float sal)
    {
        employee::set_id(id);
        employee::set_sal(sal);
        this->comm = comm;
    }
    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the Commison = ";
        cin >> this->comm;
    }
    void display()
    {
        employee::display();
        cout << "Comm = " << this->comm << endl;
    }

protected:
    void accept_salesman()
    {
        cout << "Commison = ";
        cin >> this->comm;
    }
    void display_salesman()
    {
        cout << "Commision is = " << comm << endl;
    }
};
class sales_manager : public salesman, public manager // indirect derived class
{
public:
    sales_manager()
    {
        cout << "Sales Manager Class Constructor" << endl;
    }
    sales_manager(int id, float sal, float bonus, float comm)
    {
        employee::set_id(id);
        employee::set_sal(sal);
        manager::set_bonus(bonus);
        salesman::set_comm(comm);
    }
    void accept()
    {
        employee::accept();
        manager::accept_manager();
        salesman::accept_salesman();
    }
    void display()
    {
        employee::display();
        manager::display_manager();
        salesman::display_salesman();
    }
};
int main()
{
    sales_manager sm;
    sm.accept();
    sm.display();
    return 0;
}
