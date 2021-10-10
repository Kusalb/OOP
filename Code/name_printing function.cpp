#include<iostream>
using namespace std;

void myFunction(string fname) {
  cout << "Your name is " << fname << endl;
  cout << "Your name has " << fname.size() << " letters" <<endl;
}

int main() {
  string fname;
  cout << "Enter your name: "<<endl;
  cin >> fname;
  myFunction(fname); 
  return 0;
}
