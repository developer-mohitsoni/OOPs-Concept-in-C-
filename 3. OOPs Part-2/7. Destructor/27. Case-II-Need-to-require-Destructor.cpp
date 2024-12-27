#include <bits/stdc++.h>

using namespace std;

//! Case when we need to require Destructor

class Student
{
public:
    int age;
    int *id; // Dynamic Data Member or attribute

    Student()
    {
        cout << "Default Constructor called" << endl;
    }

    Student(int age, int id) : age(age), id(new int(id))
    {
        cout << "Parameterized Constructor called" << endl;
        cout << age << " " << id << endl;
    };

    //! In this cae, The class contain dynamic member or object, so we need to write Destructor for it.

    ~Student()
    {
        cout << "Student Destructor called" << endl;
        delete id; // Deleting dynamically allocated memory
        // This must be done to avoid memory leaks inside Destructor for Dynamic Member created.
    }
};

int main()
{
    Student *s1 = new Student(25, 100); // Dynamic Object is created

    delete s1; // Deleting dynamically allocated memory to avoid memory leaks

    return 0;
}