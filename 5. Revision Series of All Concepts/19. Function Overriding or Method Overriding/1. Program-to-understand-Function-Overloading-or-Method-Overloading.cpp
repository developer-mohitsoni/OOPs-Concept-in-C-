#include <bits/stdc++.h>

using namespace std;

//! Function Overloading or Method Overloading

// Suppose we have two classes having the same name function & also having same signature, So in this case, obviously object of derived class is created & when calling that function, the function of derived class is called & executed.

// So here, the function of derived class has override the function of base class. This concept is called Method Overriding or Function Overriding.

class A
{
public:
    void display()
    {
        cout << "Base Class: " << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Derived Class: " << endl;
    }
};

int main()
{
    B obj;

    // Calling the derived class having the same name function & also having same signature
    obj.display();

    // Calling the base class through derived class using scope resolution operator that having the same name function & also having same signature.
    obj.A::display();

    return 0;
}