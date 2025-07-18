#include <bits/stdc++.h>

using namespace std;

//* Defining Explicit Default Constructor Outside the Class

class Student
{
private:
    string name;
    int age;

public:
    // Explicit Default constructor
    Student();

    // Getter Methods Define Outside the Class:-
    string getName() const;
    int getAge() const;
};

//! NOTE:- Here you can easily access the private data members and members functions of this class directly by using the Explicit Default Constructor and Parameterized Constructor but not using Default Constructor
//* Defining Explicit Default Constructor
Student::Student()
{
    // Explicit Default Constructor
    cout << "Enter the Name" << endl; // Asking for input
    cin >> this->name;

    cout << "Enter the Age" << endl; // Asking for input
    cin >> this->age;
}
string Student::getName() const { return this->name; }

int Student::getAge() const { return this->age; }

int main()
{
    Student s1;
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl; // Since we have getter, we can directly access the private member.

    return 0;
}