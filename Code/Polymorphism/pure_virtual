#include <iostream>  
using namespace std;  
class Animal  
{  
    public:  
    virtual void show() = 0;  //Pure virtual function declaration.
};  
class Man: public Animal  
{  
    public:  
    void show()  
    {  
        cout << "Man is the part of animal husbandry " << endl;  
    }  
};  
int main()  
{  
    Animal *aptr; //Base class pointer 
    //Animal a;  
    Man m;  //derived class object creation.
    aptr = &m;  
    aptr->show();  
    return 0;  
}
