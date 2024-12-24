#include <bits/stdc++.h>

using namespace std;

//* Dynamic Memory Allocation in Class

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

    //! Stack Memory Allocation of Class Object
    Student s1(1, "Rahul", 20, "Male", "Radhika");

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Gender: " << s1.gender << endl;

    cout << "Girlfriend: " << s1.getGf() << endl; // Accessing private data member using 'this' pointer

    //! Dynamic Memory Allocation of Class Object

    Student *s2 = new Student(1, "Mohit", 20, "Male", "Shivani");

    cout << (*s2).name << endl; // First dereference the using (.) operator.

    cout << s2->name << endl; // Dereference using 'this' pointer

    delete s2; // Deleting dynamically allocated memory

    return 0;
}