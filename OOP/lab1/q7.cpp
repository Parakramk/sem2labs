/*
7. WAP to swap values of two integers, two characters, two floats and two
strings respectively using function overloading.
*/
#include <iostream>
#include <string>

using namespace std;

// Function to swap two integers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two characters
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

// Function to swap two floats
void swap(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

// Function to swap two strings
void swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    char char1 = 'A', char2 = 'B';
    float float1 = 3.14, float2 = 2.71;
    string str1 = "Hello", str2 = "World";

    // Swap integers
    cout << "Before Swapping integers: " << int1 << ", " << int2 << endl;
    swap(int1, int2);
    cout << "Swapped integers: " << int1 << ", " << int2 << endl;

    // Swap characters
    cout << "Before Swapping characters: " << char1 << ", " << char2 << endl;
    swap(char1, char2);
    cout << "Swapped characters: " << char1 << ", " << char2 << endl;

    // Swap floats
    cout << "Before Swapping floats: " << float1 << ", " << float2 << endl;
    swap(float1, float2);
    cout << "Swapped floats: " << float1 << ", " << float2 << endl;

    // Swap strings
    cout << "Before Swapping strings: " << str1 << ", " << str2 << endl;
    swap(str1, str2);
    cout << "Swapped strings: " << str1 << ", " << str2 << endl;

    return 0;
}
/*
OUTPUT:
Before Swapping integers: 5, 10
Swapped integers: 10, 5
Before Swapping characters: A, B
Swapped characters: B, A
Before Swapping floats: 3.14, 2.71
Swapped floats: 2.71, 3.14
Before Swapping strings: Hello, World
Swapped strings: World, Hello
*/