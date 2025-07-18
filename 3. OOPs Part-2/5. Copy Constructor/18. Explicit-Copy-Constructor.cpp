#include <bits/stdc++.h>

using namespace std;

//* NOTE:- Copy Constructor ka koi return type nai hota hai.

//! Explicit copy constructor

class Sample
{
private:
    int id;

public:
    void init(int x)
    {
        this->id = x;
    }

    Sample() {} // Default constructor with empty body

    //! here there is no const keyword so if someone wants to change the data inside this copy constructor they can do so.
    Sample(Sample &t) // Copy Constructor
    {
        this->id = t.id;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "ID: " << this->id << endl;
    }
};

int main()
{
    Sample obj1;

    obj1.init(10);
    obj1.display();

    Sample obj2(obj1); // Implicit copy constructor called here or Sample obj2 = obj1;

    obj2.display(); // ID: 10

    return 0;
}