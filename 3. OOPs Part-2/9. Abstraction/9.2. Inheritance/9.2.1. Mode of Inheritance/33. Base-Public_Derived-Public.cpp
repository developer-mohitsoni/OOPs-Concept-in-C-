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