#include <iostream>
using namespace std;

int main(){
	//syntax
	//type arrayName [ arraySize ]
	string roll_student[5], largest;
	
	//Input to store user's data into array
   cout << "Enter 5 roll number"<<endl;
   for (int i = 0; i<5 ; ++i){
   		cout << "Enter roll number for student " << i + 1 <<endl;
 		cin >> roll_student[i];
	}
	
	largest = roll_student[0]; // 
	//Checking one by one. 
	for(int i = 0 ; i<5 ; ++i){
		cout << roll_student[i];
	}
	
	cout << "Largest element in array is " << largest;
	return 0; 
}
