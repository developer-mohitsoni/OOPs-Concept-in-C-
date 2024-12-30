#include <bits/stdc++.h>

using namespace std;

//! Pure Virtual Function in Base Class || Run Time Polymorphism

// It is similar as the Virtual Function. BUT there is no definition of the virtual function itself. We have to just initialize with the 0 value. Other than 0 value will not be considered as Pure Virtual Function

// Virtual is a Keyword in C++.

// A virtual function is redefined in derived class.

// When a virtual function is defined in the base class, then the pointer to the base class is created. Now, on the basis of type of object assigned, the respective class function is called.

class A
{
public:
    virtual void show() = 0;
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
    B obj;
    ptr = &obj;

    ptr->show(); // Dynamic Binding (Late Binding)

    return 0;
}