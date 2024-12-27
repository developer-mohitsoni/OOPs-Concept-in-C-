#include <bits/stdc++.h>

using namespace std;

// Public Member inherits as Public Mode

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

//! Inherits Animal using the public access specifier.

//! The bark() method is defined as public in the Dog class.

//! Access to private members (age and eat) of Animal is not granted to Dog. These members remain entirely encapsulated within the Animal class.
class Dog : public Animal
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

    //* No error occured by while accessing public data member and member function withing the Derived Class.
    dogObj.bark();

    //! Error is occured as we are accessing private data member and member function in the Derived Class as public which is not possible.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}