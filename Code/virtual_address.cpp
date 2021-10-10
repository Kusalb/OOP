#include <iostream>
using namespace std;

int main(){
	int variable = 2;
	char letter = 'k';
	float data = 2.2;
	string name = "Kusal";
	cout << "Size taken by integer "<<sizeof(variable) <<endl;
	cout << "Size taken by char  "<<sizeof(letter) <<endl;
	cout << "Size taken by float "<<sizeof(data) <<endl;
	cout << "Size taken by string "<<sizeof(name) <<endl;

	cout << "Virtual space for variable 2" << &variable <<endl;
	cout << "Value " << variable <<endl;
}
