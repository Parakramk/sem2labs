/******************************************************************************
4. You are provided with a LengthInMeters class that represents length in
meters. The class has one private member variable meters, which is of type
double. Your task is to implement a casting operator function that allows
conversion from LengthInMeters to LengthInFeetAndInches.

*******************************************************************************/
#include <iostream>
using namespace std;

class LengthInFeetAndInches {
private:
    int feet;
    double inches;

public:
    LengthInFeetAndInches(int f, double i) {
        feet = f;
        inches = i;
    }

    void display() const {
        cout << "Length: " << feet << " feet " << inches << " inches" << endl;
    }
};

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

    operator LengthInFeetAndInches() const {
        double totalInches = meters * 39.3700787;
        int feet = static_cast<int>(totalInches / 12);
        double inches = totalInches - feet * 12;
        return LengthInFeetAndInches(feet, inches);
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
Enter the Length in meters: 10
Length: 32 feet 9.70079 inches
*/