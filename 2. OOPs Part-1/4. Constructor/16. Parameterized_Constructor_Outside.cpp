#include <bits/stdc++.h>

using namespace std;

//* Defining Parameterized Constructor Outside the Class

class Student
{
private:
    string name;
    int age;

public:
    // Explicit Parameterized constructor
    Student(string name, int age); // Calling to the outside constructor

    // Getter Methods Define Outside the Class:-
    string getName() const;
    int getAge() const;
};

//! NOTE:- Here you can easily access the private data members and members functions of this class directly by using the Explicit Default Constructor and Parameterized Constructor but not using Default Constructor
//* Defining Explicit Default Constructor
Student::Student(string name, int age)
{
    // Parameterized Constructor
    this->name = name;
    this->age = age;
}

// Getters Method
string Student::getName() const { return name; }

int Student::getAge() const { return age; }

int main()
{
    // Creating an object of Student class using Explicit Default Constructor
    Student s1("John", 20);
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl; // Since we have getter, we can directly access the private member.
    return 0;
}