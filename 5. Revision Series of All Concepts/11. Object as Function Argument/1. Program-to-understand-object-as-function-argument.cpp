#include <bits/stdc++.h>

using namespace std;

class Time
{
public:
    int h, m;

public:
    // Member functions
    void getData();

    void showData();

    // Add two time objects and store the result in t3
    void addTime(Time t1, Time t2);
};

void Time::getData()
{
    cout << "Enter Hours & Minutes: " << endl;
    cin >> h >> m;
}
void Time::showData()
{
    cout << "Hours: " << h << endl;
    cout << "Minutes:  " << m << endl;
}

// Add two time objects and store the result in t3
void Time::addTime(Time t1, Time t2)
{
    h = (t1.m + t2.m) / 60;
    m = (t1.m + t2.m) % 60;

    h += (t1.h + t2.h);
}

int main()
{
    Time t1, t2, t3;

    t1.getData();
    t2.getData();

    t3.addTime(t1, t2);

    cout << "Time 1: ";
    t1.showData();

    cout << "Time 2: ";
    t2.showData();

    cout << "Sum of Time 1 and Time 2: ";
    t3.showData();

    return 0;
}