/* if (condition1) {
    // code block 1
}
else if (condition2){
    // code block 2
}
else {
    // code block 3
}

If condition1 evaluates to true, the code block 1 is executed.
If condition1 evaluates to false, then condition2 is evaluated.
If condition2 is true, the code block 2 is executed.
If condition2 is false, the code block 3 is executed.
*/

// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() {
     int number;

    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    } 
else if (number < 0) {
      cout << "You entered a negative integer: " << number << endl;
     } 
else {
        cout << "You entered 0." << endl;
    }
     cout << "This line is always printed.";
    return 0;
}
