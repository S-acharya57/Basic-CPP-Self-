// Re-write a program for above problem to show the order of invocation of constructor and destructor in inheritance.


#include<iostream>

using namespace std;

class Course
{
public:
    int grade = 6;

    Course()
    {
        cout<<"Constructor of Course called!"<<endl;
    }

    int grade_course()
    {
        return grade;
    }

    void display()
    {
        cout<<"Display of the parent class of all! This is course of grade: "<<grade<<endl;
    }

    ~Course()
    {
        cout<<"Destructor of Course called!"<<endl;
    }
};

class Mathematics:public Course{
public:
    int maths_marks;

    Mathematics()
    {
        cout<<"Constructor of Mathematics called!"<<endl;
    }

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


    ~Mathematics()
    {
        cout<<"Destructor of Mathematics called!"<<endl;
    }
};

class Science: public Course{
public:
    int science_marks;

    Science()
    {
        cout<<"Constructor of Science called!"<<endl;
    }


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

    ~Science()
    {
        cout<<"Destructor of Science called!"<<endl;
    }


};

class Physics: public Science
{
public:
    int physics_marks;

    Physics()
    {
        cout<<"Constructor of Physics called!"<<endl;
    }


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

    ~Physics()
    {
        cout<<"Destructor of Physics called!"<<endl;
    }

};

class Chemistry: public Science{
public:
    int chemistry_marks;

    Chemistry()
    {
        cout<<"Constructor of Chemistry called!"<<endl;
    }


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

    ~Chemistry()
    {
        cout<<"Destructor of Chemistry called!"<<endl;
    }
};



class Engineering: public Course{
public:
    int engineering_marks;

    Engineering()
    {
        cout<<"Constructor of Engineering called!"<<endl;
    }


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

    ~Engineering()
    {
        cout<<"Destructor of Engineering called!"<<endl;
    }
};




int main()
{
    Mathematics M;
    cout<<endl<<endl;
    Physics P;
    cout<<endl<<endl;
    Chemistry C;
    cout<<endl<<endl;
    Engineering E;
    cout<<endl<<endl;
    

    return 0;
}