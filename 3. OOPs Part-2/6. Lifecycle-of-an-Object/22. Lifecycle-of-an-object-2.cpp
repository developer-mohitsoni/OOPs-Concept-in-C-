#include <bits/stdc++.h>

using namespace std;

//! Program to understand life cycle of an object

//! NOTE:- If we don't write Destructor, compiler will take responsibility to add a default destructor publically

class Student
{
public:
    int age;

    Student(int age) : age(age)
    {
        cout << "Student object created with age: " << age << endl;
    }
};

int main()
{
    Student *s1 = new Student(25);

    s1->age = 30; // Modifying the age of the student object
    cout << "Student age after modification: " << s1->age << endl;

    delete s1; // Compiler will automatically call the destructor

    return 0;
}