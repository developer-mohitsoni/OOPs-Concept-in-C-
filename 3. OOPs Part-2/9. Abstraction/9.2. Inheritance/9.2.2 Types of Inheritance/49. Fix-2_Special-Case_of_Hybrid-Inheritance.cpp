#include <bits/stdc++.h>

using namespace std;

//! Solve-2 Special Case of Hybrid Inheritance:-

//! Virtual Base Class (Recommended)

// We provide the virtual keyword to those class which create ambiguity.

// Base Class
class Person
{
public:
    void walk()
    {
        cout << "Person is walking" << endl;
    }
};

// Base Class

class Teacher : virtual public Person
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};

// Derived Class

class Researcher : virtual public Person
{
public:
    void research()
    {
        cout << "Researching" << endl;
    }
};

class Professor : public Teacher, public Researcher
{
public:
    void bore()
    {
        cout << "Boring..." << endl;
    }
};

int main()
{
    Professor objP;

    //! Error: request for member 'walk' is ambiguous
    // objP.walk();

    //* Now computer confuse ho gya hai ki Professor ko konsa 'walk' chaiye Teacher se yaa phir Researcher se.

    //* Virtual Keyword ki madad se mai walk() ki same copy laa paa raha hu.
    objP.walk(); // Not create ambiguity this time by using the virtual keyword.

    return 0;
}