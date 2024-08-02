#include <iostream>
using namespace std;

// Class representing time
class Time
{
private:
    int hours, minutes, seconds;

public:
    // Constructor with default values
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Overloaded + operator to add two Time objects
    Time operator+(const Time &t) const
    {
        int h = hours + t.hours;
        int m = minutes + t.minutes;
        int s = seconds + t.seconds;

        // Adjust seconds, minutes, and hours if necessary
        if (s >= 60)
        {
            m += s / 60;
            s %= 60;
        }
        if (m >= 60)
        {
            h += m / 60;
            m %= 60;
        }
        if (h >= 24)
        {
            h %= 24;
        }

        // Create and return a new Time object
        return Time(h, m, s);
    }

    // Overloaded prefix ++ operator to increment time by 1 second
    Time &operator++()
    {
        ++seconds;
        if (seconds == 60)
        {
            seconds = 0;
            ++minutes;
            if (minutes == 60)
            {
                minutes = 0;
                ++hours;
                hours %= 24; // Reset hours if it reaches 24
            }
        }
        return *this;
    }

    // Function to print the time
    void printTime() const
    {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};

int main()
{
    // Creating Time objects
    Time t1(13, 35, 45);
    Time t2(12, 21, 10);

    // Adding two Time objects
    Time t3 = t1 + t2;

    // Printing Time objects
    cout << "Time 1                        : ";
    t1.printTime();
    cout << "Time 2                        : ";
    t2.printTime();
    cout << "Time 1 + Time 2 = Time 3      : ";
    t3.printTime();

    // Incrementing t3 by 1 second and printing the result
    ++t3;
    cout << "Time 3 after 1 sec increment  : ";
    t3.printTime();

    return 0;
}
