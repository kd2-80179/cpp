#include <iostream>
using namespace std;
class volume
{
private:
    int length;
    int breath;
    int hight;

public:
    volume()
    {
        length = 0;
        breath = 0;
        hight = 0;
    }

    void calculatevolume()
    {
        cout << "volume=" << length * breath * hight<<endl;
    }

    void acceptVolume()
    {
        cout << "enter the length = ";
        cin >> length;
        cout << " enter the breath=";
        cin >> breath;
        cout << "enter hight=";
        cin >> hight;
    }
    void displayVolume()
    {
        cout << "length=" << length<<endl;
        cout << "breath=" << breath<<endl;
        cout << "length=" << hight<<endl;
        cout << "volume=" << length * breath * hight<<endl;
    }
};
int menu()
{
    int choice;
    cout << "0.  Exit" << endl;

    cout << "1.  accept volume" << endl;
    cout << "2.  display volume" << endl;
    cout << "3.  calculate volume" << endl;
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
            v.displayVolume();
            break;
        case 3:
            v.calculatevolume();
            break;
        }
    return 0;
}
