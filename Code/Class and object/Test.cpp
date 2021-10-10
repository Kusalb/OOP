#include<iostream>
using namespace std;

class Box{
	public:
		float length;
		float breadth;
		float height;
};

int main()
{
	Box box1;
	Box box2;
	box1.length = 1.0;
	box1.breadth = 2.0;
	box1.height = 3.0;
	
	cout << "VOlume of the box = " << box1.length * box1.breadth * box1.height;
	 
	
}		
