#include <bits/stdc++.h>

using namespace std;

//! Move Constructor:-

// A move constructor in C++ is a special constructor that enables the resources owned by an rvalue object to be moved to a new object, rather than being copied. This can significantly improve performance, especially when dealing with objects that manage dynamic memory or other resources.

//! Why Use Move Constructors?

// Performance Optimization : Moving resources is generally cheaper than copying them because it involves transferring ownership rather than duplicating data.

// Resource Management : Helps in managing resources like dynamic memory, file handles, etc., more efficiently.

//! When is a Move Constructor Called?

// When an object is initialized with an rvalue (temporary object).

// When std::move is used to explicitly convert an lvalue to an rvalue.

class MoveExample
{
private:
    int *data;

public:
    // Constructor

    MoveExample(int value)
    {
        data = new int(value); // Dynamic Allocated Memory
        cout << "Constructor Called for Value: " << *data << endl;
    }

    // Move Constructor

    MoveExample(MoveExample &&other) noexcept
    {
        data = other.data;    // Steal the ownership of data from other object
        other.data = nullptr; // Reset the other object's data pointer to nullptr
        cout << "Move Constructor Called" << endl;
    }

    void display()
    {
        if (data)
        {
            cout << "Value: " << *data << endl;
        }
        else
        {
            cout << "No Value" << endl;
        }
    }
};

int main()
{
    MoveExample obj1(10); // Constructor

    MoveExample obj2 = move(obj1); // Move Constructor

    cout << "After moving:\n";

    cout << "obj1: ";
    obj1.display();

    cout << "obj2: ";
    obj2.display();

    return 0;
}