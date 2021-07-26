#include <iostream>

using namespace std;

class Base{
public:
    void display()
    {
        cout<<"Base one"<<endl;
    }

};

class Derived: public Base{
public:
    void display()
    {
        cout<<"Derived"<<endl;
    }
};



int main()
{
    Derived d;
    d.display();
    d.Base::display();
    d.Derived::display();
    return 0;
}