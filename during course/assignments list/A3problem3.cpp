// Define a class Complex with members real and imag. Use constructor to construct the objects of the class Complex. Using static data member and static function, display the total number of object created before terminating the program.

#include <iostream>

using namespace std;

class Complex
{
    float real;
    float imag;
    static int total_count;//static variable
public:
    Complex(float real, float imag)
    {
        this->real = real;
        this->imag = imag;
        total_count+=1;
    }

    static void count()//static member function
    {
        cout<<"Total objects created are: "<<total_count<<endl;
    }


};
int Complex::total_count;//necessary after declring static member-variable 

int main()
{
    Complex c1(4,5);
    Complex c2(6,4);
    Complex c3(9,23);
    Complex c4(43,34);
    Complex::count();

    return 0;
}