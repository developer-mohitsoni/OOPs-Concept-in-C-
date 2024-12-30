#include <bits/stdc++.h>

using namespace std;

//! Virtual Function in Base Class || Run Time Polymorphism

// Virtual is a Keyword in C++.

// A virtual function is redefined in derived class.

// When a virtual function is defined in the base class, then the pointer to the base class is created. Now, on the basis of type of object assigned, the respective class function is called.

class A
{
public:
    virtual void show()
    {
        cout << "Base Class: " << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Derived Class: " << endl;
    }
};

int main()
{
    A *ptr;

    A obj; // Base Class Object

    ptr = &obj;

    ptr->show(); // Late Binding

    B obj2; // Derived Class Object

    ptr = &obj2;

    ptr->show(); // Late Binding

    return 0;
}