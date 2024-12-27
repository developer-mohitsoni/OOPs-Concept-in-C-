#include <bits/stdc++.h>

using namespace std;

//* NOTE:- Copy Constructor ka koi return type nai hota hai.

//! Own Copy Constructor

class Student
{
private:
    string gf;

public:
    int id;
    string name;
    int age;
    string gender;

    // Default constructor
    Student()
    {
        cout << "Default Constructor is called" << endl;
    } // Default constructor with empty body

    // Parameterized Constructor
    Student(int id, string name, int age, string gender, string gf)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->gf = gf; // Accessing private data member

        cout << "Parameterized Constructor Called" << endl;
    }

    //! here there is const keyword so if someone wants to change the data inside this copy constructor they cann't do so.
    Student(const Student &srcObj) // Copy Constructor
    {
        // here this-> points to s2 destination and srcObj -> points to s1 destination
        this->id = srcObj.id;
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->gender = srcObj.gender;
        this->gf = srcObj.gf; // Accessing private data member

        cout << "Copy Constructor Called" << endl;
    }
};

int main()
{
    Student s1(1, "Chotta Bheem", 23, "Male", "Chutki");

    Student s2; // this called the default constructor not copy constructor

    s2 = s1; // Copy constructor is not called here. And this is a bad practice.

    cout << "Student 1: " << s1.name << endl;
    cout << "Student 2: " << s2.name << endl;

    return 0;
}