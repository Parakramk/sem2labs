/*
6. WAP to find the volume of a cube, cuboid and cylinder using the concept of
function overloading.
*/
#include<iostream>
using namespace std;

// Function to find the volume of a cube
double volume(double s) {
    return s * s * s;
}

// Function to find the volume of a cuboid
double volume(double l, double b, double h) {
    return l * b * h;
}

// Function to find the volume of a cylinder
double volume(double r, double h) {
    return 3.14 * r * r * h;
}

int main() {
    cout << "Volume of cube: " << volume(5.0) << endl;
    cout << "Volume of cuboid: " << volume(5.0, 10.0, 15.0) << endl;
    cout << "Volume of cylinder: " << volume(10.0, 20.0) << endl;

    return 0;
}

/*
OUTPUT:
Volume of cube: 125
Volume of cuboid: 750
Volume of cylinder: 6280
*/