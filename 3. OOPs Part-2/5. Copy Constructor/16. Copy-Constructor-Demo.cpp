#include <bits/stdc++.h>

using namespace std;

//* NOTE:- Copy Constructor ka koi return type nai hota hai.

class Student
{
private:
    string gf;

    void chatting()
    {
        cout << "Chatting" << endl;
    }

public:
    int id;
    string name;
    int age;
    string gender;

    // Default Constructor: assign garbage value

    Student()
    {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor: assign sensible value

    Student(int _id, string _name, int _age, string _gender, string _gf)
    {
        this->id = _id;
        this->name = _name;
        this->age = _age;
        this->gender = _gender;
        this->gf = _gf;

        cout << "Parameterized Constructor Called for " << name << endl;
    }

    void study()
    {
        cout << "Studying" << endl;
    }
};

int main()
{
    Student s1(104, "Love", 25, "Male", "Lovely");

    Student s2; // Compiler added default constructor

    s2 = s1; // s1 compied into s2

    cout << s2.age << " " << s2.name << endl;

    return 0;
}