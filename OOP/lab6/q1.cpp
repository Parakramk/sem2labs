/*
1. You are provided with a Height class that represents a person's height in
the feet-inch system. The class has two private member variables: feet (to
store the height in feet) and inches (to store the height in inches). Your task
is to implement a constructor that allows conversion from int (representing
height in inches) to Height. Try to implement given conversion using
explicit constructor.

*/
/*
Last line means to check explicit constructor can't be used for type conversion
like Normal Conversion
*/

#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    int inches;

public:
    Height() {
        feet = 0;
        inches = 0;
    }
    Height(int heightInInches) {
        feet = heightInInches / 12;
        inches = heightInInches % 12;
    }

    void display() {
        cout << "Height: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    int heightInInches;
    cout << "Enter Height in Inches: ";
    cin >> heightInInches;
    Height hei;
    hei = heightInInches;
    hei.display();

    return 0;
}
/*
SAMPLE OUTPUT:
Enter Height in Inches: 68
Height: 5 feet 8 inches
*/

/*
Discussion:
Explicit Contructor Can't be used for Implicit Type Conversion Like Normal
Parameterized Contructor
*/