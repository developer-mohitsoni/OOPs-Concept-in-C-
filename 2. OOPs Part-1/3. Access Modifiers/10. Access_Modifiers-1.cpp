#include <bits/stdc++.h>

using namespace std;

//* Access Modifiers in Class

//! Example:-1

class Student
{
    // Private Information
private:
    string gf;
    string bf;

    void chatting()
    {
        cout << "Chatting with " << bf << endl;
    }

    // Public Information
public:
    int id;
    string name;
    int age;
    string gender;

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
};

int main()
{
    Student s1;

    //! NOTE:- We can only access public data memebers and data functions
    //* Accessing the data members and data functions using (.) operator
    s1.id = 104;
    s1.name = "John Doe";
    s1.age = 20;
    s1.gender = "Male";

    Student s2;

    s2.id = 105;
    s2.name = "Jane Doe";
    s2.age = 21;
    s2.gender = "Female";

    s1.study();
    s1.sleep();
    s1.bunk();

    return 0;
}