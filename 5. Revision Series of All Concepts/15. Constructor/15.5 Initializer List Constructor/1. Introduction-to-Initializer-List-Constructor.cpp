#include <iostream>
using namespace std;

//! Initialization List Constructor

//* 1)- Initialization List:

// : name(n), age(a) initializes the member variables directly.
// This is more efficient than assigning values inside the constructor body, especially for const or reference members.

//* 2)- Why Use It?:

// Ensures member variables are initialized as the object is being created.
// Required for members like references or const variables, which must be initialized at the time of object creation.

//* 3)- Flow:

// The constructor Person(string n, int a) uses the initialization list to directly initialize name with n and age with a.

class Person
{
private:
    string name;
    int age;

public:
    // Constructor with initialization list
    Person(string n, int a) : name(n), age(a)
    {
        cout << "Constructor called for " << name << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person p1("John", 25); // Constructor initializes name and age
    p1.display();

    return 0;
}
