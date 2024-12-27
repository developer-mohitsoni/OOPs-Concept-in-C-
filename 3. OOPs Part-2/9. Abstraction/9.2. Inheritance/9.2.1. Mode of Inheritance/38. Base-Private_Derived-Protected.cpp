#include <bits/stdc++.h>

using namespace std;

// Private Member inherits as Protected Mode

class Animal
{
private:
    int age;

    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived Class

//! Normally, with protected inheritance, the public and protected members of the base class become protected in the derived class.

//! However, private members (age and eat()) of the base class remain completely inaccessible to the derived class.

//! The bark() method is defined as public in Dog.

class Dog : protected Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

int main()
{
    Dog dogObj;

    //* No error occured by while accessing public data member and member function within the Derived Class.
    dogObj.bark();

    //! Error is occured as we are accessing private data member and member function in the Derived Class as protected which is not possible.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}