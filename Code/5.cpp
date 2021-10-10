#include<iostream>
using namespace std;

int main(){
	float total_sale_a, total_sale_b;
	float extra_sale_a, extra_sale_b;
	float total_commission_a, total_commission_b;
	float total_commission;
	cout << "Please enter the amount of item A sold : \t";
	cin >> total_sale_a;
	
	cout << "Please enter the amount of item b sold : \t";
	cin >> total_sale_b;
	
	if(total_sale_a <= 2000 && total_sale_a > 0){
		total_commission_a = total_sale_a * (20/(float)100);
		cout << "Total commission earned for item less than 2000: \t" << total_commission_a <<endl;
	}
	else if(total_sale_a > 2000){
		extra_sale_a = total_sale_a - 2000;
		total_commission_a = 400 + (extra_sale_a)* (6/(float)100);
		cout << "Total commission earned for item more than 2000: \t" << total_commission_a <<endl;	
	}
	else{
		cout<< "Invalid input";
	}
	
	if(total_sale_b <= 4000 && total_sale_b > 0){
		total_commission_b = total_sale_b * (10/(float)100);
		cout << "Total commission earned for item B less than 4000: \t" << total_commission_b <<endl;
	}
	else if(total_sale_b > 4000){
		extra_sale_b = total_sale_b - 4000;
		total_commission_b = 400 + (extra_sale_b)* (12/(float)100);
		cout << "Total commission earned for item B more than 4000: \t" << 400 + (extra_sale_b)* (12/(float)100) <<endl;	
	}
	else{
		cout<< "Invalid input";
	}
	
	total_commission = total_commission_a + total_commission_b;
	cout << "Your total commission earned is: \t " << total_commission <<endl;
	return 0;
}
