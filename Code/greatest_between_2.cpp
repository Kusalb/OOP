#include<iostream>
using namespace std;

int max(int num1, int num2){
	int result;
	
	if(num1 > num2){
		result = num1;
	}
	else{
		result = num2;
	}
	return result;
}


int main(){
	cout << max(100, 200);
}
