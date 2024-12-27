#include <bits/stdc++.h>

using namespace std;

//! Hybrid Inheritance

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};

// Derived Class

class Fare
{
public:
    Fare()
    {
        cout << "Fare is calculated" << endl;
    }
};

// First-sub class

class Car : public Vehicle
{
};

// Second-sub class

class Bus : public Vehicle, public Fare
{
};

int main()
{
    // Creating object of sub class will invoke the constructor of base class

    Bus busObj;

    return 0;
}