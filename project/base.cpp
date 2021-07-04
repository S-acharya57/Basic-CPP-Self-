#include <iostream>

using namespace std;

class Movie{
public:	
	string name;
	int year;
	int rating;


	Movie(string name, int year, int rating)
	{
		this->name = name;
		this->year = year;
		this-> rating= rating;
	}
	void display();
};


class Series{
public:	
	string name;
	int year;
	int rating;

	Series(string name, int year, int rating)
	{
		this->name = name;
		this->year = year;
		this-> rating= rating;
	}

	void display();
};


void Movie::display()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Year Released: "<<year<<endl;
	cout<<"Rating: "<<rating<<endl;
}

void Series::display()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Year Released: "<<year<<endl;
	cout<<"Rating: "<<rating<<endl;
}

int main()
{
	Movie m1("The Dark Knight", 2008, 9.0);
	Series s1("Game of Thrones", 2011, 9.2);

	m1.display();
	s1.display();

	return 0;
}