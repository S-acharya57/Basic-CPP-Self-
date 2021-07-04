/*

#include <iostream>
#include <string>

using namespace std;

// class Worker
{
public:
	int age;
	string name;
	int salary;

	Worker()
	{
		age = 20;
		name = "sajjan";
		salary = 20000;
	}

	Worker(int age, string name, int salary)
	{
		this->age = age;
		this->name = name;
		this->salary  =salary;
	}

	void display();

	~Worker()
	{}
};

void Worker::display()
{
	cout<<"The age is "<<age<<endl;
	cout<<"The name is "<<name<<endl;
	cout<<"The salary is "<<salary<<endl;
}

int main()
{
	Worker w1(87, "raame", 75033);
	w1.display();
	return 0;
}

*/


//=======================================================================================================
//=======================================================================================================






//friend function ==  non-member function :: June 27, 2021


/*
#include <iostream>
#include <string>

using namespace std;

class Test{
	int a;
public:
	
	Test()
	{
		a = 5;
	}

	friend void disp(Test);//argument ma class ko naam pass garna parxa
};

void disp(Test t){
	cout<<"a = "<<t.a<<endl;
}


int main()
{
	Test t;
	disp(t);

	return 0;
}

*/

//======================================================================================================
//======================================================================================================


//multiple classes


/*
#include <iostream>

using namespace std;


class B;

class A{
	int a;
public:
	A()
	{
		a = 5;
	}
		friend void sum(A, B);
	
};

class B{
	int b;
public:
	B()
	{
		b = 6;
}
		friend void sum(A, B);
	
};

void sum(A p, B q){
	int temp;
	temp =p.a+q.b;
	cout<<"The sum is "<<temp<<endl;
}




int main()
{
	A first;
	B second;
	sum(first,second);

	return 0;
}

*/


//=======================================================================================================
//======================================================================================================


//friend class

/*
#include<iostream>

using namespace std;

class B;
class A{
	int a;
	friend class B;
public:
	A()
	{
		a = 10;
	}
};

class B{
	int b;
public:
	B()
	{
		b = 20;

	}

	int add()
	{
		A a_element;
		return a_element.a+b;

	}
};

int main()
{
	B b_element;
	cout<<"Sum: "<<b_element.add()<<endl;

	return 0;
}

*/


