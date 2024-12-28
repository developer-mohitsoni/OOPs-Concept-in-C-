#include <bits/stdc++.h>

using namespace std;

//! Program to understand Function Overriding using Virtual Keyword.

class Boy
{
public:
    virtual void behave()
    {
        cout << "Boy is behaving normally." << endl;
    }
};

class Bus : public Boy
{
public:
    void behave() override
    {
        cout << "In Bus Behaving like a passenger" << endl;
    }
};

class School : public Boy
{
public:
    void behave() override
    {
        cout << "In School Behaving like a student" << endl;
    }
};

void behave(Boy *boy)
{
    boy->behave(); // Polymorphism
};

int main()
{
    Boy *boy = new Bus(); // Upcasting

    behave(boy);

    delete boy; // Properly delete the first object before reassigning

    boy = new School();

    behave(boy);

    delete boy; // Properly delete the first object before reassigning

    return 0;
}