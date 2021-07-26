//Modify above program for constant object.

#include <iostream>

using namespace std;

class Complex
{
    const int real;
    float imag;
public:
    Complex(int a, float b): real(a), imag(b) {}

//constant member function that does not change the variable's value
    int return_real_value() const
    {
        return real;
    }

    float return_imag_value()
    {
        return imag;

    }

    void display() const;//constant functions
};

void Complex::display() const
{
    
    cout<<"Real part is "<<return_real_value()<<endl;
    cout<<"Imaginary part is "<<const_cast<Complex *>(this)->return_imag_value()<<endl;//casting return_imag_number() function as a constant  
}



int main()
{
    const Complex c1(3, 4.0);
    c1.display();
    return 0;
}
