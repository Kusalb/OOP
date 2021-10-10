#include <iostream>
using namespace std;

int main()
{
	bool result;
	
	result = (3!=5) && (3 < 5);  //true
	cout << "(3!=5) && (3 < 5) is "  <<result <<endl;
	
	result = (3==5) && (3<5); //False
	cout << "(3==5) && (3<5) is " <<result <<endl;
	
	result = (3==5) && (3>5); //False
	cout << "(3==5) && (3>5) is " <<result <<endl;
	
	result = (3==5) || (3>5); //True
	cout << "(3==5) || (3>5) is " <<result <<endl;
	
	result = !(5==6);// False= 0 ; true = 1 ; 
	cout << "!(5==5) is" << result <<endl; 
	
	
	
	return 0;
}
