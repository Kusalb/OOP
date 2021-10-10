#include<iostream>
using namespace std;

class Box{
	public: 
		float length;
		float breadth;
		float height;
	public:
		void setLength(float len){
			length = len;
		}
		void setBreadth(float bre){
			breadth = bre;
		}
		void setHeight(float hei){
			height = hei;
		}
		float calculateVolume(){
			return length*breadth*height;
		}
};

int main(){
	Box b1;
	b1.setBreadth(2.0);
	b1.setLength(2.0);
	b1.setHeight(3.0);
	cout << b1.calculateVolume();
}
