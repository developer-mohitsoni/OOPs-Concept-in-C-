#include <bits/stdc++.h>

using namespace std;

//! Solve-1 Special Case of Hybrid Inheritance:-

//! Scope Resolution Operator (::) (NOT Recommended)

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

class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};

// Derived Class

class Researcher : public Person
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

    // Fix:-

    // Now in this way compiler is giving Teacher walk() and Researcher walk() individually.
    objP.Teacher::walk();

    objP.Researcher::walk();

    //! NOTE:- But this is not a good solution.

    return 0;
}