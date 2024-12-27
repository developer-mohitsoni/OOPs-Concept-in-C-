#include <bits/stdc++.h>

using namespace std;

// Protected Member inherits as Protected Mode

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

//! The protected members of Animal (age and eat()) remain protected in the Dog class.

//! Contains A public method : bark().

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

    //! Error is occured as we are accessing protected data member and member function in the Derived Class as protected which is not possible.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}