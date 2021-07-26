/* #include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include<curses.h>
using namespace std;
class admin{
	string username;
	string password;
	public:
		void login(string username){
			char b;
			string x;
			cout<<"enter username";
			cin>>username;
			bool a = isloggedin(username);
			if(a==true){
				cout<<"yes you are logged in before";
				cout<<"enter password ;";
				encrypt();
				cout<<"do you want to add some films"<<endl;
				cout<<"enter y for yes and n for no"<<endl;
				cin>>b;
				if(b == 'y'||b == 'Y'){
					bool a = isloggedin(username);
			if(a==true){
					update();	
				}
			}
			else{
				cout<<"you are not admin";
			}
				if (a == 'n'||a == 'N'){
				cout<<"okay you can continue";
			}
			else{
				cout<<"you are not logged in before,please sign up";
			}	
		}
	}
		
    void update(){
			string filmname,directorname,starsname,summary,x;
            fstream file("Movies.txt",ios::app);
            cout<<"enter film name"<<endl;
            getline(cin,filmname);
            file<<filmname;
            cout<<"enter directorname name"<<endl;
            getline(cin,directorname);
            file<<directorname;
            cout<<"enter starsname"<<endl;
            getline(cin,starsname);
            file<<starsname;
            cout<<"enter summary"<<endl;
            getline(cin,summary);
            file<<summary;
            cout<<"updated by :"<<endl;
            cin>>x;
		}
	void encrypt(void){
		int i = 0;
        char pin[9];
        while (pin[i - 1]!='\t')
        {
            pin[i] = getch();
            if (pin[i - 1]!='\t'){
                cout<<"*";
            }
            if (pin[i]==13)
            {
                break;
            }
        i++;
    }
}

void loading(){
	for(int i=0;i<6;i++){
			cout<<".";
			// Sleep(500);	
		}
	}



bool isloggedin(string x){
	string un;
	int a;
			ifstream myreadfile("adminlogin.txt");
			if(myreadfile.is_open())
			{
			while (!myreadfile.eof()){
			while(getline(myreadfile,un));
			a = un.find(x,0);
			if(a != string::npos){
				return true;	
			}
			else{
				return false;
			}
			myreadfile.close();
		}
	}
}


	void signup(string username){
			cout<<"Enter Password :";
			encrypt();
			loading();
			cout<<"congratulations you are registered as admin"<<endl;
			cout<<"now you can login"<<endl;
		}		


};		
class user{
	string username;
	string password;
	public:
		void login(string username){
			bool a = isloggedin(username);
			if(a==true){
				cout<<"yes you are logged in before";
				cout<<"enter password ;";
				encrypt();	
			}
			else{
				cout<<"you are not logged in before,please sign up";
			}	
		}
		void signup(string username){
			cout<<"Enter Password :";
			encrypt();
			loading();
			cout<<"congratulations you are registered as user"<<endl;
			cout<<"now you can login"<<endl;
		}
		void encrypt(void){
			int i = 0;
	char pin[9];
	while (pin[i - 1]!='\t'){
		pin[i] = getch();
		if (pin[i - 1]!='\t'){
			cout<<"*";
		}
		if (pin[i]==13){
			break;
		}
	i++;
}
}
void loading(){
	for(int i=0;i<6;i++){
			cout<<".";
			// Sleep(500);	
		}
	}
bool isloggedin(string x){
	string un;
	int a;
			ifstream Myreadfile("user.txt");
			if(Myreadfile.is_open())
			{
			while (!Myreadfile.eof()){
			while(getline(Myreadfile,un)){
			a = un.find(x,0);
			if(a != string::npos){
				return true;	
			}
			else{
				return false;
			}
			Myreadfile.close();
		}
	}
	}
}
};
int main(){
	ofstream Mywritefile("user.txt");
	ofstream mywritefile("admin.txt");
	int a;
	admin ad;
	user us;
	string username,password;
	cout<<"do you want to enter as admin or user"<<endl;
	cout<<"enter 1 for admin and 2 for user"<<endl;
	cin>>a;
	if (a ==1){
		int b;
		cout<<"enter to 1 for login and 2 for sign up";
		cin>>b;
		if(b == 1){
			ifstream mywritefile("admin.txt");
			mywritefile.is_open();
			cout<<"enter username";
			cin>>username;
			ad.login(username);
		}
		else{
			ofstream mywritefile("admin.txt");
			cout<<"Enter username :";
			cin>>username;
			mywritefile<<username;
			ad.signup(username);
			cout<<"enter username"<<endl;
			cin>>username;
			cout<<"enter password";
			ad.encrypt();
		}		
}
else{
	int c;
		cout<<"enter to 1 for login and 2 for sign up";
		cin>>c;
		if(c == 1){
			ifstream Mywritefile("user.txt");
				Mywritefile.is_open();
				cout<<"enter username";
			cin>>username;
			us.login(username);
		}
		else{
			ofstream Mywritefile("user.txt");
			cout<<"Enter username :";
			cin>>username;
			Mywritefile<<username;
			us.signup(username);
			cout<<"enter username"<<endl;
			cin>>username;
			cout<<"enter password";
			us.encrypt();
		}		
 }
}

 */


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class movies{
	string filmtype,filmname,content,line;
	int choice;
	public:
		movies(){
			choice = search();
			if(choice==1){
			cout<<"WHAT KIND OF FILM DO YOU WANT";
			cout<<"\t\t|1 Action           |"<<endl;
			cout<<"\t\t\t\t\t|2 Drama            |"<<endl;   
			cout<<"\t\t\t\t\t|3 Comedy           |"<<endl;  
			cout<<"\t\t\t\t\t|4 Sci Fiction      |"<<endl;
			cout<<"\t\t\t\t\t|5 Horror           |"<<endl; 
			cout<<"enter filmname"<<endl;
	cin>>filmtype;
	filmtype = uppercase(filmtype);
	ifstream infile("allmovies.txt");
			if (!infile)
    {
        cout << "File can not opened" << endl;
        exit(0);
    }
    while (getline(infile, line))
    {
        content += line + '\n';
    }
    if(filmtype=="ACTION"){
			int myindex1=findIndex(content,filmtype);
			findtext(myindex1,content);	
			}
			if(filmtype=="DRAMA"){
			int myindex2=findIndex(content,filmtype);
			findtext(myindex2,content);	
			}
			if(filmtype=="COMEDY"){
			int myindex3=findIndex(content,filmtype);
			findtext(myindex3,content);	
			}
			if(filmtype=="HORROR"){
			int myindex4=findIndex(content,filmtype);
			findtext(myindex4,content);	
			}
			if(filmtype=="SCI-FICTION"){
			int myindex5=findIndex(content,filmtype);
			findtext(myindex5,content);	
			}
		}
		if (choice==2){
			cout<<"Enter filmname"<<endl;
			cin>>filmname;
			filmname = uppercase(filmname);
			ifstream infile("Movies.txt");
			if (!infile)
    {
        cout << "File can not opened" << endl;
        exit(0);
    }
    while (getline(infile, line))
    {
        content += line + '\n';
    }
    int fmyindex = findIndex(content,filmname);
    findtext(fmyindex,content);
		}
		backtotop();
	}		
string uppercase(string str){
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   
			str[i] = str[i] - 32;        
	}
	return str;
}
int findIndex(string src, string str)
{
    int count = 0;
    for (int i = 0; i < src.length(); i++)
    {
        if (src[i] == str[0])
        {
            count = 0;
            for (int k = 0; k < str.length(); k++)
            {
                if (src[i + k] == str[k])
                    count++;
            }
            if (count == str.length())
                return i;
        }
    }
 
    return 0;
}
void findtext(int i,string y){
	string desired_text;
    for (int x = i ; y[i] != '.'; i++)
    {
        desired_text+=y[i];
    }
    cout << desired_text<<endl;
}
int search(){
	int i;
	cout<<"Do you want to search type of movies"<<endl;
	cout<<"ENTER 1"<<endl;
	cout<<"OR YOU WANT TO SEARCH FILMNAME"<<endl;
	cout<<"ENTER 2"<<endl;
	cin>>i;
	return i;	
}
void backtotop(){
	string choose;
	cout<<endl;
	cout<<endl;
	cout<<"do you want to explore more films?"<<endl;
	cout<<"enter yes or no"<<endl;
	cin>>choose;
	choose =uppercase(choose);
	if(choose=="YES"){
		system("cls");
		movies();
	}
	if(choose=="NO"){
		system("cls");
		cout<<"THANK YOU!!!!!";
	}
}	
};
class series{
	string seriestype,seriesname,content,line;
	int choice;
	public:
		series(){
			choice = search();
			if(choice==1){
			cout<<"WHAT KIND OF SERIES DO YOU WANT?"<<endl;
			cout<<"\t\t\t\t\t|1 Action           |"<<endl;
			cout<<"\t\t\t\t\t|2 Thriller         |"<<endl;  
			cout<<"\t\t\t\t\t|3 Adventure        |"<<endl;  
			cout<<"\t\t\t\t\t|4 Sci Fiction      |"<<endl;
			cout<<"\t\t\t\t\t|5 Horror           |"<<endl;   
			cin>>seriestype;
			ifstream sFile("allseries.txt");
			seriestype= uppercase(seriestype);
			if (!sFile)
    {
        cout << "File can not opened" << endl;
        exit(0);
    }
    while (getline(sFile, line))
    {
        content += line + '\n';
    }
			if(seriestype=="ACTION"){
			int myindex1=findIndex(content,seriestype);
			findtext(myindex1,content);	
			}
			if(seriestype=="ADVENTURE"){
			int myindex2=findIndex(content,seriestype);
			findtext(myindex2,content);	
			}
			if(seriestype=="THRILLER"){
			int myindex3=findIndex(content,seriestype);
			findtext(myindex3,content);	
			}
			if(seriestype=="HORROR"){
			int myindex4=findIndex(content,seriestype);
			findtext(myindex4,content);	
			}
			if(seriestype=="SCI-FICTION"){
			int myindex5=findIndex(content,seriestype);
			findtext(myindex5,content);	
			}
		}
		if(choice==2){
			cout<<"Enter seriesname"<<endl;
			cin>>seriesname;
			seriesname = uppercase(seriesname);
			ifstream sFile("series.txt");
			if (!sFile)
    {
        cout << "File can not opened" << endl;
        exit(0);
    }
    while (getline(sFile, line))
    {
        content += line + '\n';
    }
    int myindex = findIndex(content,seriesname);
    findtext(myindex,content);
	}
	backtotop();		
		}
int search(){
	int i;
	cout<<"Do you want to search type of series"<<endl;
	cout<<"ENTER 1"<<endl;
	cout<<"OR YOU WANT TO SEARCH seriesname"<<endl;
	cout<<"ENTER 2"<<endl;
	cin>>i;
	return i;	
}
string uppercase(string str){
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   
			str[i] = str[i] - 32;        
	}
	return str;
}
int findIndex(string src, string str)
{
    int count = 0;
    for (int i = 0; i < src.length(); i++)
    {
        if (src[i] == str[0])
        {
            count = 0;
            for (int k = 0; k < str.length(); k++)
            {
                if (src[i + k] == str[k])
                    count++;
            }
            if (count == str.length())
                return i;
        }
    }
 
    return 0;
}
void findtext(int i,string y){
	string desired_text;
    for (int x = i ; y[i] != '.'; i++)
    {
        desired_text+=y[i];
    }
    cout << desired_text<<endl;
}
void backtotop(){
	string choose;
	cout<<endl;
	cout<<endl;
	cout<<"do you want to explore more series?"<<endl;
	cout<<"enter yes or no"<<endl;
	cin>>choose;
	choose =uppercase(choose);
	if(choose=="YES"){
		system("cls");
		series();
	}
	if(choose=="NO"){
		system("cls");
		cout<<"THANK YOU!!!!!";
	}
}			
};
int main(){
	int choose;
	cout<<"YOU WANT SERIES OR MOVIE"<<endl;
	cout<<"ENTER 1 FOR MOVIES"<<endl;
	cout<<"ENTER 2 FOR SERIES"<<endl;
	cin>>choose;
	if(choose==1){
	movies m;
}
		if(choose==2){
	series s;
}
}
	


/* 
#include <iostream>

using namespace std;


class User
{
public:
    string username;
    string password;
    string full_name;
    int age;
    string country;
    string occupation;

    void RateAMovie();
    void RateASeries();

    void Register();
    void Login();
    


}


class Admin
{
public:
    string username;
    string full_name;
    string password;

    void RateAMovie();
    void RateASeries();

    void Register();
    void Login();



}

void User::Register()
{
    cout<<"Enter Password :";
	encrypt();
	loading();
	cout<<"congratulations you are registered as admin"<<endl;
	cout<<"now you can login"<<endl;
}



int main()
{

}
 */