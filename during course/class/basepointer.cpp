#include<iostream>

using namespace std;

class Base{
public:
    void displayb()
    {
        cout<<"Base displayb()"<<endl;
    }
    void display()
    {
        cout<<"Base display"<<endl;
    }
};

class Derived : public Base
{
public:
    void displayd()
    {
        cout<<"Derived displayd()"<<endl;
    }
    void display()
    {
        cout<<"Derived display"<<endl;
    }

};

int main()
{
    Base *ptr, b;
    Derived d;
    ptr = &d;
    ptr->displayb();
    //ptr->displayd() --> invalid hunxa
    ptr->display();
    ptr = &b;
    //ptr->displayd() -->invalid hunxa 
    ptr->displayb();
    ptr->display();
    ((Derived *)ptr)->displayd();
    ((Derived*)ptr)->display();

    return 0;
}