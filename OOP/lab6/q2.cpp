/*
2. You are provided with a Time class that represents time in hours and
minutes. The class has two private member variables: hours (to store the
time in hours) and minutes (to store the time in minutes). Your task is to
implement a member function that allows conversion from Time to int,
representing the total minutes.
*/

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    void getTime() {
        cout << "Enter Time in Hours and Minutes" << endl;
        cin >> hours >> minutes;
    }
    operator int()  // Casting Operator to Convert into Basic data type
    {
        int totalMin = hours * 60 + minutes;
        return totalMin;
    }
    void display() const {
        cout << "Time: " << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time time;
    time.getTime();
    time.display();
    int totalMinutes = time;
    cout << "Total minutes: " << totalMinutes << endl;

    return 0;
}
/*
SAMPLE OUTPUT:
Enter Time in Hours and Minutes
2
30
Time: 2 hours 30 minutes
Total minutes: 150
*/