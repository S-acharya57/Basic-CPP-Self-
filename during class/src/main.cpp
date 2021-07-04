//Operator overloading class
//return_type class_name :: operator op(arglist);
/* 


#include <iostream>

using namespace std;


class complex 
{
    float real, imag;
public:
    void setComplex(float, float);
    void putComplex();
    complex operator +(complex);
    // friend complex operator +(complex, complex);
};

void complex::setComplex(float a, float b)
{
    real = a;
    this->imag = b;
}

void complex::putComplex()
{
    cout<<"(a+jb): ("<<real<<" + j"<<imag<<")\n";
}

complex complex ::operator+(complex c)
{
    complex temp;
    temp.real = this->real +c.real;
    temp.imag = this->imag + c.imag;
    return temp;
}
/* 
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real =  c1.real+c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;

}
 */
/* 
int main()
{
    complex c1, c2, c3, c4;
    c1.setComplex(1.1, 2.2);
    c2.setComplex(3.3, 4.4);
    c3.setComplex(5.5, 6.6);
    c1.putComplex();
    c2.putComplex();
    c3.putComplex();
    c4 = c1+c2+c3;
    c4.putComplex();
    return 0;
}  */


/* 

#include <iostream>

using namespace std;


class Test
{
    
public:
    int a;
    Test operator*(int n)
    {
        Test temp;
        temp.a =n*this->a;
        return temp;

    }
};

//** first operand calls the operator function!!!!!
//##When we are overloadin  binary operator, left hand side ma object nai huna parxa!! (if there can be more number of object types!)



int main()
{
    Test t1, t2;
    t2 = t1*2;
    cout<<t2.a<<endl;
    return 0;
}

 */



//Data conversion==========================================================================================
//=========================================================================================================







/* 
#include <iostream>

using namespace std;

class TIme
{
public:
    int hr, min;
    Time(int hr, int min)
    {
        this->hr = hr;
        this->min = min;
    }

    void display()
    {
        cout<<"hour is "<<hr<<"min is "<<min<<endl;
    }

};


int main()
{
    Time t1 = 20, 30;
    t1.display();
    return 0;
}




 */




//===================================================================================================
//===================================================================================================

//casting operator 
/* 
#include <iostream>

using namespace std;
 
class basic{


};

int main()
{

    return 0;
}
 */







































