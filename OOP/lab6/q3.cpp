/*
3. You are provided with a LengthInMeters class that represents length in
meters. The class has one private member variable meters, which is of type
double. Your task is to implement a constructor that allows conversion
from LengthInMeters to LengthInFeetAndInches. Your task is to
implement a LengthInFeetAndInches class that represents length in feet
and inches and includes a constructor to allow conversion from
LengthInMeters to LengthInFeetAndInches.
*/

#include <iostream>
using namespace std;

class LengthInMeters {
private:
    double meters;

public:
    LengthInMeters() {
        meters = 0;
    }

    void input() {
        cout << "Enter the Length in meters: ";
        cin >> meters;
    }

    double getMeters() const {
        return meters;
    }
};

class LengthInFeetAndInches {
private:
    int feet;
    double inches;

public:
    LengthInFeetAndInches(const LengthInMeters& lengthMeters) {
        double totalInches = lengthMeters.getMeters() * 39.3700787;
        feet = static_cast<int>(totalInches / 12);
        inches = totalInches - feet * 12;
    }

    void display() const {
        cout << "Length: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    LengthInMeters lengthMeters;
    lengthMeters.input();
    LengthInFeetAndInches lengthFeetInches = lengthMeters;

    lengthFeetInches.display();

    return 0;
}
/*
SAMPLE OUTPUT:
Enter the Length in meters: 2.5
Length: 8 feet 2.4252 inches
*/