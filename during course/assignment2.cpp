#include <iostream>

using namespace std;

class Time
{

    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = 12;
        min = 0;
        sec = 0;
    }

    Time(int total_sec)
    {
        this->sec = total_sec;
        this->hr = 0;
        this->min = 0;
        if(total_sec >60)
        {
            this->min = total_sec/60;
            this->sec =total_sec %60;
            if(min>60)
            {
                this->hr =min/60;
                this->min = min%60;
            }
        }
        
    }

    Time (Time &t)
    {
        this->hr = t.hr;
        this->min = t.min;
        this->sec = t.sec;
    }
    

    void display()
    {
        cout<<"The time is: "<<hr<<" hours"<<min<<" minutes"<<sec<<" seconds"<<endl;
    }

    ~Time()
    {
        cout<<"Destructor has been called"<<endl;
    } 

};

int main()
{
    int check, seconds;
    cout<<"Do you want to specify the time you want?"<<endl;
    cout<<"Press 0 if yes, 1 if no "<<endl;
    cin>>check;
    switch (check)
    {
        case 0:
        {
            cout<<"Enter the total number of seconds"<<endl;
            cin>>seconds;
            Time t1(seconds);
            t1.display();
            Time t2(t1);
            cout<<"Calling display of another object"<<endl;
            t2.display();
            break;
        }
        
        case 1:
        {
            Time t1;
            t1.display();
            Time t2(t1);
            cout<<"Calling display of another object"<<endl;
            t2.display();
            break;
        }

    }

    return 0;
}