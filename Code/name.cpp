#include <iostream>
#include <string>
using namespace std;

int main() {
  string first_name;
  string last_name; 
  cout << "Enter your first name " <<endl;
  cin >> first_name;
  cout << "Enter your sur name " <<endl;
  cin >> last_name;
  cout << "Entered name is " << first_name.append(last_name);
  return 0; 
}

