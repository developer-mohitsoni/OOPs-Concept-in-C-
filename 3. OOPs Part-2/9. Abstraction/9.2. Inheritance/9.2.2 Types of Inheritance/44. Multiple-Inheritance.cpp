#include <bits/stdc++.h>

using namespace std;

//! Multiple Inheritance

// Base Class
class Teacher
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};

class Researcher
{
public:
    void research()
    {
        cout << "Researching..." << endl;
    }
};

// Derived Class

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

    objP.bore();
    objP.teach();
    objP.research();

    return 0;
}