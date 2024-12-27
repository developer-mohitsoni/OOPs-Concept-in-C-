#include <bits/stdc++.h>

using namespace std;

// Public Member inherits as Protected Mode

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

//! All public and protected members of the base class (Animal) become protected members in the derived class (Dog).

//! Private members of the base class are never accessible directly in the derived class, regardless of the access specifier.
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

    //! Error is occured as we are accessing public data member and member function in the Derived Class as protected.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}