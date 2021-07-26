/* Types of Polymorphisms
Run time polymorphims
Virtual Functions
Pure Virtual Functions and Abstract Class
Problem1: Write a program having Polygon as an abstract class with Length and Height as its data member. 
Create derived class Rectangle and Triangle. Make Area() as pure virtual function and redefine it in 
derived class to calculate respective area */
#include<iostream>

using namespace std;

class Polygon{
    public:

    int Length=10;
    int Height=5;

    virtual int Area() = 0;//pure virtual function


};

class Rectangle:public Polygon
{
    public:

    int Area()
    {
        return Length*Height;
    }
};

class Triangle:public Polygon
{
    public:
    
    int Area()
    {
        return 0.5*Length*Height;
    }


};

int main()
{
    Polygon *rectangle_pointer, *triangle_pointer;//base pointer for runtime polymorphism
    Rectangle rect;
    Triangle tri;
    rectangle_pointer = &rect;
    triangle_pointer = &tri;
    cout<<"Area of rectangle is:"<<rectangle_pointer->Area()<<endl;
    cout<<"Area of triangle is:"<<triangle_pointer->Area()<<endl;

    return 0;
}