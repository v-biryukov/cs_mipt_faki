#include <iostream>
#include <iomanip>

class Time
{
private:
    int hours {};
    int minutes {};

public:
    Time(int hours, int minutes) : hours(hours), minutes(minutes) {}

    void reset()
    {
        hours = 0;
        minutes = 0;
    }

    Time& operator+=(const Time& right)
    {
        int totalMinutes = 60 * (hours + right.hours) + minutes + right.minutes;
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
        return *this;
    }

    Time operator+(const Time& right) const
    {
        Time result = *this;
        result += right;
        return result;
    }

    friend std::ostream& operator<<(std::ostream& out, Time t);
};


std::ostream& operator<<(std::ostream& out, Time t)
{
    out << std::setw(2) << std::setfill('0') << t.hours << ":"
        << std::setw(2) << std::setfill('0') << t.minutes;
    return out;
}


int main()
{
    Time a {5, 9};
    Time b {10, 55};

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (a + b) << std::endl;
}