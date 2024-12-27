#include <bits/stdc++.h>

using namespace std;

//! Program to understand life cycle of an object

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
    Student s1(20); // Object s1 is created with age 20

    return 0;
}