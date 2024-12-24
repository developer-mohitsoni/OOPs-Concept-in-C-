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
    Student()
    {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor assign sensible values
    Student(int _id, string _name, int _age, string _gender, string _gf)
    {
        id = _id;
        name = _name;
        age = _age;
        gender = _gender;
        gf = _gf; // Accessing private data members

        cout << "Parameterized Constructor Called" << endl;

        // Accessing private member function
        chatting(" with " + gf);
    }

    // Parameterized Constructor assign sensible values

    Student(int _id, string _name, string _gender, string _bf)
    {
        id = _id;
        name = _name;
        gender = _gender;
        bf = _bf; // Accessing private data members

        cout << "Parameterized Constructor Called" << endl;

        // Accessing private member function
        chatting(" with " + bf);
    }

    void study()
    {
        cout << "studying" << endl;
    }
};
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