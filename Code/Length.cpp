#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Enter name " <<endl;
  getline(cin, name);
  cout << "Your name is " <<  name << endl;
  cout << "Length of your name is " << name.length();
  cout << "Length of your name is " << name.size();
  return 0; 
}

