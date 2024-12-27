#include <bits/stdc++.h>

using namespace std;

//! Case when we don't need to require Destructor

class Student
{
public:
    int age;

    Student()
    {
        cout << "Default Constructor called" << endl;
    }

    Student(int age) : age(age)
    {
        cout << "Parameterized Constructor called with age: " << age << endl;
    };

    //! In this cae, The class doesn't contain any dynamic member or object, so we don't need to write Destructor by itself.
};

int main()
{
    {
        // Not dynamic object
        Student s1(25);
    }
    Student s1;

    return 0;
}