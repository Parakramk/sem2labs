/*
Create a class time having data members as hour, minute and second. Then
add two time objects taking object as an function argument and subtract
two time objects taking objects as an function arguments and as well as
returning object by the function concept. Implement nameless temporary
object concept somewhere in your code.
*/
#include <iostream>
using namespace std;

class Time
{
	private:
		int hour, minute, second;

	public:
    	Time()
    	{
        	hour = 0;
        	minute = 0;
        	second = 0;
    	}
    	Time(int h,int m,int s)
    	{
        	hour = h;
        	minute = m;
        	second = s;
    	}

    	void DataEntry()
    	{
        	cout << "Enter hour, minute and second respectively." << endl;
        	cin >> hour >> minute >> second;
    	}
    	Time add(Time t1, Time t2)
    	{
                Time temp;
                int total = ((t1.hour * 3600 + t1.minute * 60 + t1.second) + (t2.hour * 3600 + t2.minute * 60 + t2.second));
                temp.hour = total / 3600;
                temp.minute = (total % 3600) / 60;
                temp.second = (total % 3600) % 60;
                return temp;
    	}
    	Time subtract(Time t1, Time t2)
    	{
          	int total = ((t1.hour * 3600 + t1.minute * 60 + t1.second) - (t2.hour * 3600 + t2.minute * 60 + t2.second));
        	if (total < 0)
            	total = -total;  // Make difference +ve
        	hour = total / 3600;
        	minute = (total % 3600) / 60;
        	second = (total % 3600) % 60;
        	return Time(hour, minute, second); // nameless temporary object
   	 }
    	void display()
    	{
        	cout << hour << ":" << minute << ":" << second << endl;
    	}
};

int main()
{
    Time t1, t2, t3, t4, t5, t6;
    t1.DataEntry();
    t2.DataEntry();
    cout << "The sum of the time is: " << endl;
    t4 = t3.add(t1, t2);
    t4.display();
    cout << "The difference of the time is: " << endl;
    t5 = t6.subtract(t1, t2);
    t5.display();
    return 0;
}

/*
SAMPLE OUTPUT:
Enter hour, minute and second respectively.
3
4
5
Enter hour, minute and second respectively.
5
9
8
The sum of the time is:
8:13:13
The difference of the time is:
2:5:3
*/

