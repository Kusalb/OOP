#include <iostream>

using namespace std; 

int main () {
	int choice;
	int a,b,c; 
	
	cout << "Menu:" << endl;
	cout << "Press 1 for summation" << endl;
	cout << "Press 2 for sum of squares" << endl;
	cout << "Press 3 for sum of cubes" << endl;
	cout << "Press 4 for product" << endl; 
	
	cout << "Enter your choice: " <<endl ; // Asks the choice of the user to perform operations
	cin >> choice;
	
	cout << "Enter the three numbers: " << endl;
	cin >> a >> b >> c;
	
	
	
	    switch(choice) {  // After the user chooses the choice,  it matches the value and case
        case 1: 
            cout << a << " + " << b << " + " << c << " = " << a+b+c << endl; //For summation
            break;

        case 2:
            cout << a*a << " + " << b*b << " + " << c*c << " = " << a*a+b*b+c*c << endl;  //For sum of squares
            break;

        case 3:
            cout << a*a*a << " + " << b*b*b << " + " << c*c*c << " = " << a*a*a+b*b*b+c*c*c << endl; //For sum of cubes
            break;

        case 4:
            cout << a << " * " << b << " * " << c << " = " << a * b * c << endl; //For product
            break;

        default:
            cout << "No any menu mentioned to solve"; //For displaying in case the user has another choice
            break; 
    }

    return 0;
}

