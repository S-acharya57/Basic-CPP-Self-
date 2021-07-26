/* Write a program with three classes Student, Test and Result by using multilevel inheritance.
 Assume necessary data members and functions with input information, input data and calculate 
 marks total and display result. */

#include<iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int roll_number;
    int total_subjects;
public:
    void get_info(string name, int roll)
    {
        this->name = name;
        this->roll_number = roll;
    }

    string get_name()
    {
        return name;
    }

    int get_roll()
    {
        return roll_number;
    }

};

class Test:public Student
{
public:
    int marks[3];
   
    void get_marks(float marks1, float marks2, float marks3)
    {
        marks[0]= marks1;
        marks[1] = marks2;
        marks[2] = marks3;
    }

};

class Result:public Test
{
    float total_marks;
    float average;

public:

    
    void result()
    {
        total_marks = marks[0]+ marks[1]+marks[2];
        average = total_marks/3;
    }    

    void display()
    {
        cout<<"The name of the student is "<<get_name()<<endl;
        cout<<"The roll is "<<get_roll()<<endl;
        cout<<"The marks obtained are: "<<marks[0]<<", "<<marks[1]<<", "<<marks[2]<<endl;
        cout<<"The total marks is "<<total_marks<<endl;
        cout<<"The average is "<<average<<endl;

    }

};



int main()
{
    Result R1;
    R1.get_info("Sajjan", 38);
    R1.get_marks(45, 66, 80);
    R1.result();
    R1.display();

    return 0;
}