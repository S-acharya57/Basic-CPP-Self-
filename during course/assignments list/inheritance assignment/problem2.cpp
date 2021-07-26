/* Problem2: Define a class named Course. Derive three classes from this class named: Mathematics, 
Science and Engineering. Then, derive two classes from Science named: Physics and Chemistry. 
Define data members and member functions as appropriate. Illustrate the concept of member function 
overriding and accessing overridden member from the derived class in your program */

#include<iostream>

using namespace std;

class Course
{
public:
    int grade = 6;

    int grade_course()
    {
        return grade;
    }

    void display()
    {
        cout<<"Display of the parent class of all! This is course of grade: "<<grade<<endl;
    }
};

class Mathematics:public Course{
public:
    int maths_marks;

    void input_marks(int maths_marks)
    {
        this->maths_marks = maths_marks;
    }

    int get_maths_marks()
    {
        return maths_marks;
    }

    void display()
    {
        cout<<"Display of class Mathematics. The marks of maths is: "<<maths_marks<<endl;
    }
};

class Science: public Course{
public:
    int science_marks;

    void input_science_marks(int science_marks)
    {
        this->science_marks = science_marks;
    }
    
    int get_science_marks()
    {
        return science_marks;
    }

    void display()
    {
        cout<<"This one is science class display now. And the marks in science overall is: "<<science_marks<<endl;
    }
};

class Physics: public Science
{
public:
    int physics_marks;

    void input_physics_marks(int physics_marks)
    {
        this->physics_marks = physics_marks;
    }
    
    int get_physics_marks()
    {
        return physics_marks;
    }

    void display()
    {
        cout<<"Display of Physics class. Physics marks is: "<<physics_marks<<endl;
    }

};

class Chemistry: public Science{
public:
    int chemistry_marks;

    void input_chemistry_marks(int chemistry_marks)
    {
        this->chemistry_marks = chemistry_marks;
    }
    
    int get_chemistry_marks()
    {
        return chemistry_marks;
    }

    void display()
    {
        cout<<"Display of Chemistry class. Chemistry marks is: "<<chemistry_marks<<endl;
    }
};



class Engineering: public Course{
public:
    int engineering_marks;

    void input_engineering_marks(int engineering_marks)
    {
        this->engineering_marks = engineering_marks;
    }
    
    int get_engineering_marks()
    {
        return engineering_marks;
    }

    void display()
    {
        cout<<"Display of Engineering class. Engineering marks is: "<<engineering_marks<<endl;
    }
};




int main()
{
    Mathematics M;
    Physics P;
    Chemistry C;
    Engineering E;
    M.input_marks(80);
    P.input_physics_marks(76);
    C.input_chemistry_marks(66);
    E.input_engineering_marks(50);
    cout<<endl<<"Example of member function overriding!"<<endl<<endl;
    cout<<"Calling display function of the derived class:"<<endl;
    M.display();
    P.display();
    C.display();
    E.display();
    cout<<endl<<endl<<"Example of accessing overridden member from the derived class"<<endl;
    cout<<"Calling the overridden function from each class along with their method consecutively:"<<endl<<endl;
    cout<<"Display of Parent called from Mathematics class is:"<<endl;
    M.Course::display();
    M.display();
    cout<<endl<<"Display of Parent Science called from Physics class is:"<<endl;
    P.Science::display();//garbage value
    P.display();
    cout<<endl<<"Display of Parent Science called from Chemistry class is:"<<endl;
    C.Science::display();//garbage value
    C.display();
    cout<<endl<<"Display of Parent called from Engineering class is:"<<endl;
    E.Course::display();
    E.display();

    return 0;
}