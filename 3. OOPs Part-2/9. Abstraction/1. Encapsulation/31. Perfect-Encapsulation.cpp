#include <bits/stdc++.h>

using namespace std;

//* Encapsulation is often a mean to achieve abstraction by hiding internal details and only exposing what is necessary.

//! Perfect Encapsulation

// When two rules are followed:-

// 1. All data members are private.

// 2. All private data members are usedd through getter and setter methods.

class Student
{
private:
    // private data members only
    string gf;

public:
    // Setter Method
    void setGfName(string name)
    {
        this->gf = name;
    }

    // Getter Method
    string getGfName() const
    {
        return gf;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student *s1 = new Student();

    s1->setGfName("Priya");

    cout << "GF Name: " << s1->getGfName() << endl;

    delete s1; // Deleting the object to free up memory

    return 0;
}