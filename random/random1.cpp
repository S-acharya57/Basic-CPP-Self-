#include<iostream>
#include<string>

using namespace std;

class Movies{
    public:
    string movie_name;
    int year;
    string review;

    Movies(string name, int year, string review)
    {
        this->movie_name= name;
        this->year = year;
        this->review = review;

    }


};


int main()
{
    Movies movie_ko_list[3];
    

    return 0;
}