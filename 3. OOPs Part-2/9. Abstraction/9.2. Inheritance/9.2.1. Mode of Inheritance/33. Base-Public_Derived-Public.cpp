#include <bits/stdc++.h>

using namespace std;

// Public Member inherits as Public Mode

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

//! All public members of the base class remain public in the derived class.

//! All protected members of the base class remain protected in the derived class.

//! Private members of the base class are not directly accessible in the derived class.

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

    // No error occured by while accessing public data of base class and dervied class.
    dogObj.bark();
    dogObj.age = 8;
    dogObj.eat();

    return 0;
}