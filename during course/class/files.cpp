#include<iostream>
#include<fstream>
#include <string>
using namespace std;

class Files{
public:
    int age;
    string name;
    string line;//temp variable
    string biography;

    Files()
    {
        age = 0;
        name = "";
        biography = "";
    }

    Files(int age, string name, string biography)
    {
        this->age = age;
        this->name = name;
        this->biography =biography;
    }

    void getlines()
    {
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter the biography"<<endl;
        getline(cin, biography);
        
    }

    int show_age(){ return age;}
    string show_name(){ return name;}
    string show_biography(){return biography;}
};

int main()
{
    int age;
    string name, biography;
    Files F1;
    string temp;
    F1.getlines();
    ofstream outfile("random.txt");
    outfile<<F1.show_age()<<"\n";
    outfile<<F1.show_name()<<"\n";
    outfile<<F1.show_biography()<<"\n";
    outfile.close();

    ifstream infile("random.txt");
    infile>>F1.age;
    cout<<F1.age<<endl;
    infile>>F1.name;
    cout<<F1.name<<end;
    infile>>biography;
    cout<<biography<<endl;






    return 0;
}