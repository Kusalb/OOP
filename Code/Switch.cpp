//Program to find grade
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	first:
	cout <<"enter an operator: + , - , *, / :";
	cin >> op; // + , - , *, /
	
	cout << "Enter two operands: ";
	cin >> num1 >> num2;
	
	switch(op){
		case '+':
			cout << num1 << " + " <<num2 <<" = " << num1 + num2;
			break;
			
		case '-': 
			cout << num1 << " - " <<num2 <<" = " << num1 - num2;
			break;
		
		case '*': 
			cout << num1 << " * " <<num2 <<" = " << num1 * num2;
			break;
			
		case '/': 
			cout << num1 << " / " <<num2 <<" = " << num1 / num2;
			break;
		
		default:
			cout << "Error! opertor is not correct";
			break;
	}
	goto first; 
	return 0;
	
}
