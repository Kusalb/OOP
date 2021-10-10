#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  int salary;
  Employee myObj;
  myObj.setSalary(400);
  cout << myObj.getSalary();
  return 0;
}
