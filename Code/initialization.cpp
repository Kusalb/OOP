#include<iostream>
using namespace std;

int main()
{
	int numberOfstudent, i;
	cout << "Enter the total student" <<endl;
	cin >> numberOfstudent;
	int array[numberOfstudent];
	cout << "Enter the roll number" << endl;
	for ( i = 0; i < numberOfstudent ; i++ ){
		cin >> array[i];
	}
	//You have entered;
	for (i=0; i < numberOfstudent; i++){
		cout << array[i] <<endl; 
	}
	return 0;
}
