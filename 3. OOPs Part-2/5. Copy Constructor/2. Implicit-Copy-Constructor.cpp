#include <bits/stdc++.h>

using namespace std;

//* NOTE:- Copy Constructor ka koi return type nai hota hai.

//! Implicit copy constructor

class Sample
{
private:
    int id;

public:
    void init(int x)
    {
        id = x;
    }

    void display()
    {
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Sample obj1;

    obj1.init(10);
    obj1.display();

    Sample obj2 = obj1; // Implicit copy constructor called here or Sample obj2(obj1);

    obj2.display(); // ID: 10

    return 0;
}