// 3
#include<iostream>
using namespace std;

int main(){
	int number, iteration;
	cout << "Enter any number: ";
	cin >> number;
	
	for(iteration = 1; iteration <=10; iteration++){
		cout <<number <<" * " << iteration << " = " << number * iteration <<endl;
	}
	return 0;
}
