#include<iostream>

using namespace std;

class complex
{
	float real, imag;
public:
	void setComplex(float, float)
	void putComplex();

	complex operator +(complex);
};


	void complex::setComplex(float a, float b)
	{
		real  = a;
		this->imag = b;
	}

void complex:: putComplex()
{
	cout<<"(a+jb): ("<<real<<" + j"<<imag<<")\n";

}

complex complex::operator+(complex c){
	complex temp;
	temp.real = this->real+ c.real;
	temp.imag = this->imag + c.imag;
	return temp;
}


int main()
{
	complex c1, c2,c3;
	c1.setComplex(1.1, 2.2);
	c2.setComplex(3.3, 4.4);
	c1.putComplex();
	c2.putComplex();
	c3 = c1+c2;
	c3.putComplex();
	return 0;

}


int main()
{
	

}