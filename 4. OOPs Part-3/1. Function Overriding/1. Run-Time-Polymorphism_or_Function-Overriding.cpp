#include <bits/stdc++.h>

using namespace std;

//! Program to demonstrate Function Overriding or Run-Time Polymorphism

class Boy
{
public:
    void behave()
    {
        cout << "Boy is playing" << endl;
    }
};

class Bus : public Boy
{
public:
    void behave()
    {
        cout << "In Bus Behaving like a passenger" << endl;
    }
};

class School : public Boy
{
public:
    void behave()
    {
        cout << "In School Behaving like a student" << endl;
    }
};

void behave(Boy *boy)
{
    boy->behave();
};

int main()
{
    Boy *boy = new Bus();

    behave(boy);

    boy = new School();

    behave(boy);

    delete boy;

    return 0;
}