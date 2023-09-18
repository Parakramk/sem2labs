/*
2. Create a class called “Time” with data member hour, minute and second.
 Initialize all the data member using constructor. WAP to add two Time object using necessary member functions and display the result.
*/
#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time(int h, int min, int sec) {
        hour = h;
        minute = min;
        second = sec;
    }
    void add(Time t1, Time t2);

    void displayTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

void Time::add(Time t1, Time t2) // functions defination outside the class
{
    int total = ((t1.hour * 3600 + t1.minute * 60 + t1.second) + (t2.hour * 3600 + t2.minute * 60 + t2.second));
    hour = total / 3600;
    minute = (total % 3600) / 60;
    second = (total % 3600) % 60;
}

int main() {
    Time Time1(5, 30, 45);
    Time Time2(3, 15, 20);
    Time Time3(0, 0, 0);
    Time3.add(Time1, Time2);
    Time3.displayTime();
    return 0;
}

/*
SAMPLE OUTPUT:

8:46:5
*/
