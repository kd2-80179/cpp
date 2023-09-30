#include <iostream>

using namespace std;

class Shop
{
    protected:
        int id;
        string title;
        double price;
    public:
        Shop()
        {
            this->id = 0;
            this->title = "";
            this->price = 0;
        }

        Shop(int id, string title, double price)
        {
            this->id = id;
            this->title = title;
            this->price = price;
        }
};

class Book : public Shop
{
    private:
        string author;
        
    public:
        Book()
        {
            this->author = "";
        }
        Book(int id, string title, string author, double price) : Shop(id, title, price)
        {
            this->author = author;
        }
        void acceptBook()
        {
            cout<<"Enter id: ";
            cin>>this->id;
            cout<<"Enter title: ";
            cin>>this->title;
            cout<<"Enter author: ";
            cin>>this->author;
            cout<<"Enter price: ";
            cin>>this->price;
        }
        double applyDiscount()
        {
            int discounted_price = this->price * 0.05;
            this->price = this->price - discounted_price;
            return this->price;
        }
};

class Tape : public Shop
{
    private:
        string artist;
    public:
        Tape()
        {
            this->artist = "";
        }
        Tape(int id, string title, string artist, double price) : Shop(id, title, price)
        {
            this->artist = artist;
        }
        void acceptTape()
        {
            cout<<"Enter id: ";
            cin>>this->id;
            cout<<"Enter title: ";
            cin>>this->title;
            cout<<"Enter author: ";
            cin>>this->artist;
            cout<<"Enter price: ";
            cin>>this->price;
        }
        double applyDiscount()
        {
            int discounted_price = this->price * 0.1;
            this->price = this->price - discounted_price;
            return this->price;
        }
};

enum EMenu
{
    FINAL_BILL,
    PURCHASE_BOOK,
    PURCHASE_TAPE
};

EMenu menu()
{
    int choice;
    cout<<"---------MENU-------------"<<endl;
    cout<<"0. FINAL_BILL"<<endl;
    cout<<"1. PURCHASE_BOOK"<<endl;
    cout<<"2. PURCHASE_TAPE"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    return (EMenu)choice;
}

int main()
{
    Shop **shop = new Shop*[3];
    int index = 0;
    EMenu choice;
    double final_bill;

    while((choice = menu()) != FINAL_BILL)
    {
        switch (choice)
        {
            case PURCHASE_BOOK:
                if(index < 3){
                    shop[index] = new Book(); // upcasting
                    Book *book = (Book*)shop[index]; // downcasting
                    book->acceptBook();
                    final_bill += book->applyDiscount();
                    index++;
                }else{
                    cout<<"Sorry reached the limit..."<<endl;
                }
                break;

            case PURCHASE_TAPE:
                if(index < 3){
                    shop[index] = new Tape(); // upcasting
                    Tape *tape = (Tape*)shop[index]; // downcasting
                    tape->acceptTape();
                    final_bill += tape->applyDiscount();
                    index++;
                }else{
                    cout<<"Sorry reached the limit..."<<endl;
                }
                break;
            
            default:
                cout<<"Enter correct choice..."<<endl;
                break;
        }
    }

    for(int i=0; i<index; i++)
    {
        delete shop[i];
    }
    delete[] shop;  
    
    cout<<"---------------------------"<<endl;
    cout<<"Final Bill = "<<final_bill<<endl;
    cout<<"---------------------------"<<endl;

    cout<<"Thank you for shopping..."<<endl;

    return 0;   
}