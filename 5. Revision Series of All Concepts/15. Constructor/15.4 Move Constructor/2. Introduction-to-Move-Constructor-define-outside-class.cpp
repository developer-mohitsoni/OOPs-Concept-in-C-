#include <bits/stdc++.h>

using namespace std;

//! Move Constructor:-

// A move constructor in C++ is a special constructor that enables the resources owned by an rvalue object to be moved to a new object, rather than being copied. This can significantly improve performance, especially when dealing with objects that manage dynamic memory or other resources.

//! Why Use Move Constructors?

// Performance Optimization : Moving resources is generally cheaper than copying them because it involves transferring ownership rather than duplicating data.

// Resource Management : Helps in managing resources like dynamic memory, file handles, etc., more efficiently.

// Instead of making a deep copy of the resource (which is expensive), the move constructor simply "moves" the resource by transferring ownership, leaving the source object in a valid but empty state.

//! Why Use && in Move Constructor?

// The && in a move constructor is used to indicate an rvalue reference. Here's why it is essential:

//* Rvalue References (&&):

// An lvalue is something that has a name and can be referenced (e.g., variables).

// An rvalue is a temporary object, usually created as the result of an expression, and it does not have a persistent memory address (e.g., return values, literals).

// The move constructor takes an rvalue reference (&&) to signify that it can "steal" the resources from this temporary object without copying them.

//! What is the noexcept Keyword?

// The noexcept keyword is used to tell the compiler that a function does not throw exceptions. It provides several benefits:

//* 1. Performance Optimization:
// If a move constructor is marked as noexcept, the standard containers (like std::vector) and algorithms can safely use it during operations like resizing or sorting. This allows for optimizations, as the compiler knows that exceptions won’t disrupt the operation.

//* 2. Exception Safety:
// A move constructor marked noexcept guarantees to the user of the class that it won't fail.

//* 3. Standard Compliance:
// The C++ Standard Library prefers move constructors that are noexcept. If a move constructor is not noexcept, it might fall back to a slower copy constructor in some cases.

//! When is a Move Constructor Called?

// When an object is initialized with an rvalue (temporary object).

// When std::move is used to explicitly convert an lvalue to an rvalue.

class MoveExample
{
private:
    int *data;

public:
    // Constructor

    MoveExample(int value);

    // Move Constructor

    MoveExample(MoveExample &&other) noexcept;

    void display();
};

MoveExample::MoveExample(int value)
{
    data = new int(value); // Dynamic Allocated Memory
    cout << "Constructor Called for Value: " << *data << endl;
}

//! The move constructor transfers ownership of resources instead of copying.
//! The obj1 is left in a safe but empty state (nullptr).
//! Simple and efficient!

//* && (rvalue reference):

// Identifies that the object can be "moved" rather than copied.
// Ensures the move constructor is called for rvalues.

//* noexcept:

// Guarantees that the move constructor does not throw exceptions.
// Enables better performance in containers and algorithms.
MoveExample::MoveExample(MoveExample &&other) noexcept
{
    data = other.data;    // Steal the ownership of data from other object
    other.data = nullptr; // Reset the other object's data pointer to nullptr
    cout << "Move Constructor Called" << endl;
}

void MoveExample::display()
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

int main()
{
    MoveExample obj1(10); // Constructor

    //! move() ensures the move constructor is called.
    MoveExample obj2 = move(obj1); // Move Constructor

    cout << "After moving:\n";

    cout << "obj1: ";
    obj1.display();

    cout << "obj2: ";
    obj2.display();

    return 0;
}