#include<iostream>
using namespace std;

// Function to get 2 number and return a sum of two number
int Addition(int a, int b){
	return a+b;
}
// Function to get 2 number and return a substract of two number
int Substraction(int a, int b){
	return a-b;
}
// Function to get 3 number and return a multiply of 3 number
int Multiply(int a, int b, int c){
	return a*b*c;
}
// Function to get string from user and then print the name with hello world
void NamePrint(string name){
	cout <<"hello world " << name ;
}

// Function just to print 
void Print(){
	cout << "NO parameter";
}

int main()
{
	//Calling the Addition function with the parameter  1 and 1.
	cout << "The sum is" << Addition(1,1) <<endl; 
	//Calling the Difference function with the parameter  1 and 1.
	cout << "The difference is" << Substraction(1,1);
	//Calling the Product function with the 3 parameters   1,1 and 3.
	cout << "The product is " << Multiply(1,1,3) <<endl;
	//Calling NamePrint function with a parameter 
	NamePrint("Kusal");
	NamePrint("Asim");
	// Function with no argument and no parameter
	Print();
	return 0;
	
}
