//Define a class Item1 with data members code, qty and price and class Item2 with data members code and value. (Hint: code = code, value = qty*price). Use the constructor in Item2 class to change the Item1 type data to Item2 type. Your code should be able to execute the statement I2=I1 (where I1 and DI2 are objects of respective item class).
#include<iostream>

using namespace std;



class Item1
{
public:    
    float code, qty, price;

    Item1()
    {
        code = 0;
        qty = 0;
        price = 0;
    }

    Item1(float code, float qty, float price)
    {
        this->code = code;
        this->qty = qty;
        this->price = price;
    }

    void display()
    {
        cout<<"The code is "<<code<<endl;
        cout<<"The qty is "<<qty<<endl;
        cout<<"The price is "<<price<<endl;
    }


};

class Item2
{
public:
    float code, value;

    Item2()
    {
        code = 0;
        value = 0;
    }
    Item2(Item1 i)
    {
        this->code = i.code;
        this->value = i.qty * i.price;

    }

    void display()
    {
        cout<<"The code is "<<code<<endl;
        cout<<"The value is "<<value<<endl;
    }


};

int main()
{
    Item1 I1(5000, 10, 30);
    Item2 I2(I1);
    I1.display();
    I2.display();
    return 0;
}