#include <iostream>
using namespace std;

int main(){
	//syntax
	//type arrayName [ arraySize ]
	int roll_student[5] = {401, 202, 403, 405, 406};
	cout <<sizeof(roll_student) <<endl;
	
	for (int i = 0; i<5 ; ++i){
		cout << roll_student[i] <<endl;
	}
	
}
