#include <bits/stdc++.h>

using namespace std;

//! Getter and Setter Methods

//* NOTE:- By using Getter and Setter methods we can access Private Data Members.

class Student
{
private:
    string gf;

public:
    int age;
    int *id;

    // Parameterized Constructor

    Student(int age, int id) : age(age), id(new int(id))
    {
        cout << "Parameterized Constructor called" << endl;
        cout << age << " " << id << endl;
    }

    // Setter Method

    void setGfName(string gf)
    {
        this->gf = gf;
    }

    // Getter Method

    string getGfName() const
    {
        return gf;
        // return this->gf;
    }

    // Destructor
    ~Student()
    {
        cout << "Student Destructor is Called" << endl;
        delete id;
    }
};

int main()
{
    Student *s1 = new Student(25, 100);

    s1->setGfName("Mahak Chawla");

    cout << "Girlfriend Name: " << s1->getGfName() << endl;

    delete s1; // Destructor is called here

    return 0;
}