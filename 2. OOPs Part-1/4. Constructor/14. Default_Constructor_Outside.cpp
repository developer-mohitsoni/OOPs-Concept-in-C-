#include <bits/stdc++.h>

using namespace std;

//* Defining Default Constructor Outside the Class

class Student
{
public:
    string name;
    int age;

public:
    // Default constructor
    Student(); // Calling to outside the class constructor
};

//! Using Scope Resolution Operator to define Constructor outside the class
//* Defining Default Constructor
Student::Student()
{
    // Default Constructor
    name = "Mohit";
    age = 23;
}

int main()
{
    Student s1;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    return 0;
}