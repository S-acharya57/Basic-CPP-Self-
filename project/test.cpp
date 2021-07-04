#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class admin {
  string username;
  string password;
  public:
    void login() {
      if (isloggedin() == true) {
        cout << "enter password ;";
        encrypt();
      } else {
        cout << "you are not logged in before,please sign up";
      }
    }

  void encrypt() {
    int i = 0;
    char pin[9];
    while (pin[i - 1] != '\t') {
      cin>>pin[i];
      if (pin[i - 1] != '\t') {
        cout << "*";
      }
      if (pin[i] == 13) {
        break;
      }
      i++;
    }
  }

  void loading() {
    for(int i = 0; i < 6; i++) 
    {
      cout << ".";
      sleep(500);
    }
  }

  bool isloggedin() {
    string un;
    cout << "Enter username :";
    cin >> username;;

    ifstream read("adminlogin" + username)
    getline(read, un);
    if (un == username) {
      return true;
    } else {
      return false;
    }
  }
};

class user {
  string username;
  string password;
  public:
    void login() {
      if (isloggedin() == true) {
        cout << "enter password ;";
        encrypt();
      } else {
        cout << "you are not logged in before,please sign up";
      }
    }
  void signup() {
    ofstream fout("adminlogin");
    cout << "Enter username :"
    cin >> username;
    fout << username;
    cout << "Enter Password :";
    string password = encrypt();
    fout << password;
    loading();
    cout << "congratulations you are registered as user";
  }

  void encrypt(void) {
    int i = 0;
    char pin[9];
    while (pin[i - 1] != '\t') {

      if (pin[i - 1] != '\t') {
        cout << "*";
      }
      if (pin[i] == 13) {
        break;
      }
      i++;
    }
  }

  void loading() {
    (int i = 0; i < 6; i++) {
      cout << ".";
      Sleep(500);
    }
  }

  bool isloggedin {
    string un;
    cout << "Enter username :";
    cin >> username;;
    ifstream read("adminlogin" + username)
    getline(read, un);
    if (un == username) {
      return true;
    } else {
      return false;
    }
  }

};

int main() {
  int a;
  admin ad;
  user us;
  cout << "do you want to enter as admin or user" << endl;
  cout << "enter 1 for admin and 2 for user" << endl;
  cin >> a;
  if (a == 1) {
    int b;
    cout << "enter to 1 for login and 2 for sign up";
    cin >> b;
    if (b == 1) {
      ad.login();
    } else {
      /*ad.signup()*/
    }
  } else {
    int c;
    cout << "enter to 1 for login and 2 for sign up";
    cin >> c;
    if (c == 1) {
      us.login();
    } else {
      us.signup();
    }
  }
}