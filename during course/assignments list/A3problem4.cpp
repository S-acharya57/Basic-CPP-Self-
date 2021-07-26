//  Define a class Complex with members real and imag. Use constructor to construct the objects of the class Complex. Using friend function calculate the magnitude of the Complex number.


#include <iostream>
#include<cmath>

using namespace std;

class Complex
{
    float real;
    float imag;
public:
    Complex(float real, float imag)
    {
        this->real = real;
        this->imag = imag;
    }

    friend float magnitude(Complex c1);//friend function returning int
};

float magnitude(Complex c1)
{
    int a, b;
    a = pow(c1.real, 2);
    b= pow(c1.imag, 2);
    return sqrt(a+b);
}

int main()
{
    Complex c1(3,4);
    cout<<"The magnitude of (3+4i) is "<<magnitude(c1)<<endl;
    return 0;
}