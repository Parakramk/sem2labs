/*
2. Create a class TimeCounter to represent a time counter in seconds.
Implement the prefix and postfix increment operators ++ to increase the
time counter by one second. The class provides separate functions for
prefix and postfix increment operations to showcase the difference in
behavior between the operators. The example usage demonstrates the time
counter's functionality with appropriate test cases, displaying the updated
time counter after each increment operation.
*/

#include <iostream>
using namespace std;

class TimeCounter {
private:
	int value;

public:
	TimeCounter(int initialSeconds = 0) {
		value = initialSeconds;
	}

	// Overload ++ when used as prefix
	TimeCounter operator++() {
		TimeCounter temp;
		temp.value = ++value;
		return temp;
	}

	// Overload ++ when used as postfix
	TimeCounter operator++(int) {
		TimeCounter temp;
		temp.value = value++;
		return temp;
	}
	void display() {
		cout << "Time in seconds: " << value << endl;
	}
};

int main() {
	TimeCounter second(8);
	TimeCounter result;
	// Call the "TimeCounter operator ++ ()" function
	result = ++second;
	second.display();
	result.display();
	// Call the "TimeCounter operator ++ (int)" function
	result = second++;
	second.display();
	result.display();
	return 0;
}
/*
SAMPLE OUTPUT:
Time in seconds: 9
Time in seconds: 9
Time in seconds: 10
Time in seconds: 9
*/