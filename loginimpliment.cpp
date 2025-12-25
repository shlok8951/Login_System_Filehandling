#include <bits/stdc++.h> //provide all the required files in c++.
#include <fstream>
using namespace std;
class Id
{

public:
  pair<string, string> user; // It can be store 2 values at a time.
  Id()
  { // Constructor.
    cout << "Enter the username and password" << endl;
    cin >> user.first >> user.second;
  }

  void signup()
  { // Function for signup.
    fstream f;
    f.open("user.txt", ios::app); // Open user.txt file for append the data.
    ifstream s2("user.txt");      // Open user.txt file for red the data.
    string first, second;
    while (s2 >> first >> second)
    { // Read two line of code at a one time.
      if (user.first == first)
      {
        cout << "alrady exist username" << endl;
        return;
      }
    }
    s2.close();

    f << user.first << endl;
    f << user.second << endl
      << endl;
    f.close();
    cout << "succesfully signup" << endl;
    login();
  }

  void login()
  {
    ifstream s2("user.txt");
    string first, second;
    while (s2 >> first >> second)
    {
      if (user.first == first && user.second == second)
      {
        cout << "     https://shlok8951.github.io/Number_Gussing_Game/ " << endl;
        cout << "     https://shlok8951.github.io/BackgroundColor_changer/" << endl;
        cout << "     https://shlok8951.github.io/Body_Mass_Index/  " << endl;
        return;
      }
      if (user.first == first && user.second != second)
      {
        cout << "Incorrect password,try again" << endl;
        return;
      }
      if (user.first != first && user.second == second)
      {
        cout << "Invalid username" << endl;
        return;
      }
    }
    s2.close();
    cout << endl
         << "Invalid username and password" << endl;
  }
};
int main()
{
  int a;
  cout << "Enter the '1' for singn up" << endl;
  cout << "Enter the '2' for login " << endl;
  cin >> a;
  Id i1;
  if (a == 1)
  {
    i1.signup();
  }
  else if (a == 2)
  {
    i1.login();
  }
  else
  {
    cout << "Invalid choice" << endl;
  }

  return 0;
}