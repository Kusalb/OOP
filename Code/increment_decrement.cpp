#include <iostream>
using namespace std;

int main()
{
	int a=10, b=100, result_a, result_b;
	result_a = ++a; // result_a = a + 1 
	cout << "result_a after increment = " <<result_a <<endl;
	
	result_b = --b; // result_b = b- 1; 
	cout << "result_b after decrement = " <<result_b <<endl;

	return 0;
}
