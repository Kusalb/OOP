#include <iostream>    
using namespace std;  

class Sum{    
	private: int x, y, z; // private variables  
	
	public:    
	void add()    
	{    
		cout<<"Enter two numbers: ";    
		cin>>x>>y;    
		z= x+y;    
		cout<<"Sum of two number is: "<<z<<endl;    
	}    
};   
 
