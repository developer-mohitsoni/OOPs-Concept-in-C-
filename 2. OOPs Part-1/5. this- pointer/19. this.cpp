#include <bits/stdc++.h>

using namespace std;

//* Default Constructor in Class

//! NOTES:-

//* What is this pointer?

// this pointer is a private data member in class.
// this pointer points to current object
// this pointer added by compiler privately.

//* Why use of this pointer?

// The most important use of 'this' pointer in c++ is to differentiate b/w the Local variable and Member variable that share the same name;
// this -> is also use for accessing private data members

class Student
{
private:
    string gf;

public:
    int id;
    string name;
    int age;
    string gender;

    // Parameterized Constructor Definition
    Student(int id, string name, int age, string gender, string gf);

    // Getter Methods Definition
    string getGf() const;
};

Student::Student(int id, string name, int age, string gender, string gf)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->gf = gf; // Accessing private data member

    cout << "Parameterized Constructor Called" << endl;
}

string Student::getGf() const
{
    return gf; // Accessing private data member using 'this' pointer
}

int main()
{
    // Creating an object of Student class using Explicit Default Constructor
    Student s1(1, "Rahul", 20, "Male", "Radhika");

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Gender: " << s1.gender << endl;

    cout << "Girlfriend: " << s1.getGf() << endl; // Accessing private data member using 'this' pointer
    return 0;
}