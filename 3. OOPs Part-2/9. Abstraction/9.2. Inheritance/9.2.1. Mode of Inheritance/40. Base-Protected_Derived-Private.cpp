#include <bits/stdc++.h>

using namespace std;

// Protected Member inherits as Private Mode

class Animal
{
protected:
    int age;

    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived Class

//! The protected members of the base class (age and eat()) become private in the Dog class.

//! Contains A public method: bark().

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

    //! Error is occured as we are accessing protected data member and member function in the Derived Class as private which is not possible.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}