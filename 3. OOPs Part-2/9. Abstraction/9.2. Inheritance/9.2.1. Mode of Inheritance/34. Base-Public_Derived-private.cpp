#include <bits/stdc++.h>

using namespace std;

// Public Member inherits as Private Mode

class Animal
{
public:
    int age;

    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived Class

//! All public and protected members of the base class become private members of the derived class.

//! Private members of the base class are not inherited by the derived class directly.

//! The inherited members can only be accessed within the derived class or its member functions, not by objects of the derived class.

class Dog : private Animal
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

    //! Error is occured as we are accessing public data member and member function in the Derived Class as private.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}