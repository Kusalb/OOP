#include<iostream>
using namespace std;

//syntax

//void myFunction(string name){ // Parameterized function... data_type Variable
//	cout << "Your name is " << name << endl;
//	cout << "Your name size is " << name.size() <<endl;
//}
//
//void arkoFunction(){
//	cout << "ramilo function";
//}

int addition(int number1, int number2);

int main(){
	cout << addition3(2,3,4);
}
int addition(int number1, int number2){ // number1=2,  number2 =3 
	int result;
	result = number1 + number2; // result = 2+3
	cout << result;
}

int addition3(int number1, int number2, int number3){ // number1=2,  number2 =3 
	int result;
	result = number1 + number2+ number3; // result = 2+3
	cout << result;
}


