#include <bits/stdc++.h>

using namespace std;

// Private Member inherits as Private Mode

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

//! Even though private inheritance changes public and protected members of the base class to private in the derived class, it has no effect on private members of the base class.

//! The bark() method is defined as public in Dog.

//! age and eat() remain inaccessible to Dog, as they are private members of Animal.

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

    //! Error is occured as we are accessing private data member and member function in the Derived Class as public which is not possible.

    // dogObj.age = 8;
    // dogObj.eat();

    return 0;
}