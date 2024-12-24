#include <bits/stdc++.h>

using namespace std;

//* Understand OOP's

class Student
{
    // Data Members/ Properties / States / Attributes
    int id;
    string name;
    int age;
    int nos;

    // Member Functions/ Methods / Behaviors / Actions

    void study()
    {
        cout << "Student is studying" << endl;
    }
    void sleep()
    {
        cout << "Student is sleeping" << endl;
    }
    void bunk()
    {
        cout << "Student is bunking" << endl;
    }
}; // End of Curlybraces ;

int main()
{
    //! These below 2 are different objects.
    // Creating a object of Student class s1.
    Student s1; // Object / Instance

    // Creating a object of Student class s2.
    Student s2;

    return 0;
}