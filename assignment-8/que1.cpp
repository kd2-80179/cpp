#include<iostream>
using namespace std;

class Stack
{
    private:
        int *arr;
        int size;
        int top;
    public:
        Stack()
        {
            this->size = 5;
            this->arr = new int[this->size];
            this->top = -1;
        }

        Stack(int size = 5)
        {
            this->arr = new int[this->size];
            this->size = size;
            this->top = -1;
        }

        Stack(Stack &other)
        {
            this->size = other.size;
            this->arr = new int[this->size];
            this->top = other.top;
            for(int i=0; i<=top; i++){
                this->arr[i] = other.arr[i];
            }
        }

        Stack operator=(Stack &other)
        {
            this->size = other.size;
            this->arr = new int[this->size];
            this->top = other.top;
            for(int i=0; i<=top; i++){
                this->arr[i] = other.arr[i];
            }   
            return *this;
        }

        void push(int value){
            if (isFull()) {
                cout << "Stack is full. Cannot push " << value << "."<<endl;
            }else{
                arr[++top] = value;
                cout << "Pushed " << value << " onto the stack."<<endl;
            }
        }

        void pop(){
            if (isEmpty()) {
                cout << "Stack is empty. Cannot pop."<<endl;
            }else{
                cout << "Popped " << this->arr[top--] << " from the stack."<<endl;
            }
        }

        int peek(){
            if (isEmpty()) {
                cout << "Stack is empty."<<endl;
            }
            return this->arr[top];
        }

        bool isEmpty(){
            return this->top == -1;
        }

        bool isFull(){
            return this->top == this->size - 1;
        }   

        void print(){
            if (isEmpty()) {
                cout << "Stack is empty."<<endl;
                return;
            }
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }

        ~Stack() {
            delete[] this->arr;
        }
};

int menu()
{
    int choice;

    cout << "\nMenu:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peek\n";
    cout << "4. Print\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

int main()
{
    int size;
    cout << "Enter the size of the stack : ";
    cin >> size;
    
    Stack st(size);

    int choice;

    while((choice = menu()) != 5)
    {
        switch (choice) {
            case 1: 
                int value;
                cout << "Enter a value to push onto the stack: ";
                cin >> value;
                st.push(value);
                break;
            
            case 2:
                st.pop();
                break;

            case 3: 
                if (st.peek() != -1) {
                    cout << "Top element: " << st.peek() << endl;
                }
                break;
            
            case 4:
                st.print();
                break;

            default:
                cout << "Invalid choice. Please try again."<<endl;
        }
    }

    Stack st2 = st;
    cout<<"----------Stack ST2 assigned from ST1------------"<<endl;
    st2.print();

    Stack st3(st);
    cout<<"----------Stack ST3 copied from ST1------------"<<endl;
    st3.print();

    cout<<"Exiting..."<<endl;

    return 0;
}