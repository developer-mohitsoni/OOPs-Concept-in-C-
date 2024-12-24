#include <bits/stdc++.h>

using namespace std;

//* Accessing different modifiers:-

class Student
{
private:
    string gf;
    string bf;

    void chatting(string name)
    {
        cout << "chatting" << name << endl;
    }

public:
    // Accessing Private Members
    int id;
    string name;
    int age;
    string gender;

    // Default Constructor assign garbage value
    Student();

    // Parameterized Constructor assign sensible values

    //! NOTE:- You can not use the calling the same constructor with same parameter values
    Student(int _id, string _name, int _age, string _gender, string _gf);

    // Parameterized Constructor assign sensible values
    Student(int _id, string _name, string _gender, string _bf);

    void study();
};
Student::Student()
{
    cout << "Default Constructor Called" << endl;
}
Student::Student(int _id, string _name, int _age, string _gender, string _gf)
{
    this->id = _id;
    this->name = _name;
    this->age = _age;
    this->gender = _gender;
    this->gf = _gf; // Accessing private data members

    cout << "Parameterized Constructor Called" << endl;

    // Accessing private member function
    chatting(" with " + gf);
}
Student::Student(int _id, string _name, string _gender, string _bf)
{
    this->id = _id;
    this->name = _name;
    this->gender = _gender;
    this->bf = _bf; // Accessing private data members

    cout << "Parameterized Constructor Called" << endl;

    // Accessing private member function
    chatting(" with " + bf);
}
void Student::study()
{
    cout << "studying" << endl;
}
int main()
{
    Student s; // Default constructor Invoked

    Student s1(1, "John", 20, "Male", "Jane"); // Parameterized constructor 1 Invoked

    cout << s1.name << endl
         << endl;

    Student s2(2, "Jane", "Female", "John"); // Parameterized constructor 2 Invoked

    cout << s2.name << endl
         << endl;

    s1.study(); // Accessing public member function
    return 0;
}