#include <bits/stdc++.h>

using namespace std;

//! Program to understand Function Overriding using Virtual Keyword without Memory Leakage

class Boy
{
public:
    virtual void behave()
    {
        cout << "Boy is behaving normally." << endl;
    }

    // Virtual Destructor for proper cleanup in derived class (Recommended)
    virtual ~Boy()
    {
        cout << "Boy's Destructor called." << endl;
    }
};

class Bus : public Boy
{
public:
    void behave() override
    {
        cout << "In Bus Behaving like a passenger" << endl;
    }

    // Virtual Destructor for proper cleanup in derived class (Recommended)
    virtual ~Bus()
    {
        cout << "In Bus Destructor called" << endl;
    }
};

class School : public Boy
{
public:
    void behave() override
    {
        cout << "In School Behaving like a student" << endl;
    }

    // Virtual Destructor for proper cleanup in derived class (Recommended)
    virtual ~School()
    {
        cout << "In School Destructor called" << endl;
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